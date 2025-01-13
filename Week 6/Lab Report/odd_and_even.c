#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char response[10];
    FILE *oddFile, *evenFile;

    // Open the files for writing
    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");

    if (oddFile == NULL || evenFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        // Ask the user to enter an integer
        printf("Enter an integer: ");
        scanf("%d", &num);

        // Check if the number is odd or even and write to the corresponding file
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num); // Write even number to even.txt
        } else {
            fprintf(oddFile, "%d\n", num); // Write odd number to odd.txt
        }

        // Ask the user if they want to continue
        printf("Do you want to continue? (yes/no): ");
        scanf("%s", response);

    } while (strcmp(response, "no") != 0); // Continue until the user says "no"

    // Close the files
    fclose(oddFile);
    fclose(evenFile);

    printf("Numbers have been written to odd.txt and even.txt.\n");

    return 0;
}