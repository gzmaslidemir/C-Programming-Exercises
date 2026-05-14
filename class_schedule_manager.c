#include <stdio.h>

int main() {

    FILE *cfPtr;

    char name[100];
    char days[10];
    char start[20];
    char end[20];

    int credits;
    int count;
    int i;

    // Open file for writing
    cfPtr = fopen("schedule.txt", "w");

    if (cfPtr == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("How many classes? ");
    scanf("%d", &count);
    getchar();

    // Enter class information
    for (i = 0; i < count; i++) {

        printf("\nEnter class name: ");
        fgets(name, sizeof(name), stdin);

        // Remove newline character
        int j = 0;

        while (name[j] != '\0') {

            if (name[j] == '\n') {
                name[j] = '\0';
                break;
            }

            j++;
        }

        printf("Enter days (MWF, TR, MW): ");
        scanf("%s", days);

        printf("Enter start time: ");
        scanf(" %[^\n]", start);

        printf("Enter end time: ");
        scanf(" %[^\n]", end);

        printf("Enter credits: ");
        scanf("%d", &credits);

        getchar();

        // Write to file
        fprintf(cfPtr, "%-25s %-6s %-10s %-10s %2d\n",
                name, days, start, end, credits);
    }

    fclose(cfPtr);

    // Reopen file for reading
    cfPtr = fopen("schedule.txt", "r");

    if (cfPtr == NULL) {
        printf("File could not be opened for reading.\n");
        return 1;
    }

    printf("\n**** Class Schedule ****\n\n");

    // Read records from file
    while (fscanf(cfPtr, "%99s %9s %19s %19s %d",
                  name, days, start, end, &credits) != EOF) {

        printf("%-25s %-6s %-10s %-10s %2d\n",
               name, days, start, end, credits);
    }

    fclose(cfPtr);

    return 0;
}