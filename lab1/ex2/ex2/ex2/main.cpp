#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE* file;
    if (fopen_s(&file, "in.txt", "r") != 0) {
        printf("Error opening the file.\n");
        return 1;
    }

    char line[100];
    int totalSum = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        int currentNumber = 0;
        int i = 0;

        while (line[i] != '\0') {
            if (line[i] >= '0' && line[i] <= '9') {
                currentNumber = currentNumber * 10 + (line[i] - '0');
            }
            else {
                totalSum += currentNumber;
                currentNumber = 0;
            }

            i++;
        }

        totalSum += currentNumber;
    }

    printf("Total sum for the file: %d\n", totalSum);

    fclose(file);

    return 0;
}
