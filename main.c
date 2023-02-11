#include <stdio.h>
#include <stdlib.h>

int main() {
//  Declare Variables
    int counter, max, min, program_guessed_number, response;
//  Initialize Variables
    response = 0;
    counter = 1;

//  Receive user input of max and min values using scanf (integer inputs)
    printf("Minimum Range:");
    scanf("%d", &min);
    printf("Maximum Range:");
    scanf("%d", &max);

//  Detect if user inputted a min value greater than max and require another input if true
//  loop until correct input is entered
    while (min >= max) {
        printf("Min must be less than Max\n");
        printf("Minimum Range:");
        scanf("%d", &min);
        printf("Maximum Range:");
        scanf("%d", &max);
    }
//  Print Guessed number and take response too large/too small/found from user
//  and generate a 2nd guess from this input
    while (response != 3) {
        program_guessed_number = (min + max) / 2;
        printf("Guessed Number:%d\n1. TOO LARGE\n2. TOO SMALL\n3. FOUND\n", program_guessed_number);
        scanf("%d", &response);

//      Too large response case
        if (response == 1) {
            max = program_guessed_number - 1;
            counter += 1;
        }
//      Too small response case
        else if (response == 2) {
            min = program_guessed_number + 1;
            counter += 1;
        }
//      Found response (while loop will end after 3 is inputted)
        else if (response == 3) {
            printf("FOUND IT\nNumber of tries: %d", counter);
            counter += 1;
        }
//      Else case, print message and exit program if response isn't (1-3)
        else {
            printf("Input must be a value from (1-3)\n");
            exit(1);
        }
    }
}