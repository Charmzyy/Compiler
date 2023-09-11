#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[20]; // Assuming the input is less than 20 characters

    // prompt sequence
    printf("Please Enter an English sentence: ");
    //read input from user
    fgets(input, sizeof(input), stdin);

    // Token the inputs into words
    char *word = strtok(input, " \t\n");

    // Use loop while the variable word has present value
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " \t\n");
    }

    return 0;
}
