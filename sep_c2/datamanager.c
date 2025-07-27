#include <stdio.h>
#include "datamanager.h"

static S_DATA g_data[MAX_SIZE] = {0};
int data_count = 0;

void DATA_ADD(S_DATA data) {
    if (data_count < MAX_SIZE) {
        g_data[data_count].id = (char)(data_count + 1); // Assuming id is just the index + 1
        snprintf(g_data[data_count].name, ARRAY_SIZE, "%s", data.name);
        snprintf(g_data[data_count].mail, ARRAY_SIZE, "%s", data.mail);
        snprintf(g_data[data_count].memo, ARRAY_SIZE, "%s", data.memo);
        data_count++;
    }
}

S_DATA DATA_VIEW(int output_count) {
    //if (output_count < data_count) {    
        return g_data[output_count];
    //}
}

void DATA_DELETE(int input_num) {
    if (input_num < 0 || input_num >= data_count) {
        printf("Invalid entry number.\n");
        return;
    }

    // Shift elements to the left to remove the entry
    for (int i = 0; i < data_count; i++) {
        if (input_num == g_data[i].id) {
            g_data[i] = g_data[i + 1];
            g_data[i].id = g_data[i].id - 1;
        }
    }
    data_count--;
}






