#include <stdio.h>
#include "user_io.h"
#include "datamanager.h"

int main() {
    int isRunning = RUN;
    int choice;
    while (isRunning == RUN) {
        printf("\n1: Add\n2: View\n3: Delete\n4: End\nSelect an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            ADD();
        } else if (choice == 2) {
            VIEW();
        } else if (choice == 3) {
            DELETE();
        } else if (choice == 4) {
            END(isRunning);
        } else {
            printf("Invalid selection.\n");
        }
    }

    printf("Exiting program.\n");
    return 0;
}
