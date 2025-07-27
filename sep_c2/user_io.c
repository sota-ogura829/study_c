#include <stdio.h>
#include "user_io.h"
#include "datamanager.h"

int output_count = 0;
extern int data_count;

void ADD() {
    S_DATA data = {};

    printf("Enter name : ");
    scanf("%15s", data.name);

    printf("Enter mail : ");
    scanf("%15s", data.mail);

    printf("Enter memo : ");
    scanf("%15s", data.memo);

    //DATA_ADD(data.name, data.mail, data.memo);
    DATA_ADD(data);
    return;
}

void VIEW() {
    printf("[id]\tname\tmail\tmem\n");
    for (int i = 0; i < data_count; i++) {
        S_DATA data = DATA_VIEW(i);
        printf("[%d]\t%s\t%s\t%s\n", data.id, data.name, data.mail, data.memo);
    }
}

void DELETE() {
    int input_num;
    printf("Enter the number of the entry to delete: ");
    scanf("%d", &input_num);

    if (input_num < data_count) {
        DATA_DELETE(input_num);
        printf("Entry %d deleted.\n", input_num + 1); // Adjust for user-friendly display
        return;
    }
}

void END(int isRunning) { 
    printf("Exiting program.\n");
    isRunning = NOT_RUN;
    return;
}
