#include <stdio.h>
#include <stdlib.h>

int main() {
//  declare and initialize variables
    int integers[3];
    int max, mid, min, placeholder;
//  receive 3 integer user inputs continuously until a negative integer is entered
    printf("Enter 3 positive integers with differences of 7 or more, enter a negative integer to exit:\n");
    scanf("%d", &integers[0]);
    scanf("%d", &integers[1]);
    scanf("%d", &integers[2]);

    while(((integers[0]>0) && (integers[1]>0) && (integers[2]>0)) ) {

        //  check if integers have differences of less than 7, re-enter values if true
        if((abs(integers[0] - integers[1]) < 7) || (abs(integers[1] - integers[2]) < 7) ||
        (abs(integers[0] - integers[2]) < 7)) {
            printf("Integers must have a larger difference than 7\n");
            exit(1);
        }

//  array sorting based on integer value, comparing all values to each other swapping if a lower array index is a
//  larger integer. After 3 if statements array will be sorted from greatest to least
        if (integers[0] < integers[1]) {
            placeholder = integers[1];
            integers[1] = integers[0];
            integers[0] = placeholder;
        }

        if (integers[0] < integers[2]) {
            placeholder = integers[0];
            integers[0] = integers[2];
            integers[2] = placeholder;
        }

        if (integers[1] < integers[2]) {
            placeholder = integers[1];
            integers[1] = integers[2];
            integers[2] = placeholder;
        }
//  assign values to max, min and mid and print them to the user
        max = integers[0];
        mid = integers[1];
        min = integers[2];
        printf("Min: %d\nMiddle: %d\nMax: %d\n", min, mid, max);

//  loop that iterates from the min value to the mid-value, printing all odd values using mod to determine if
//  the value is odd
        printf("The odd numbers are:\n");
        while (min < mid) {
            if (min % 2 != 0) {
                printf("Value: %d\n", min);
            }
            min += 1;
        }
//  loop that iterates from the mid-value to the max-value, printing all even values using mod to determine if
//  the value is even
        printf("The even numbers are:\n");
        while (mid < max) {
            if (mid % 2 == 0) {
                printf("Value: %d\n", mid);
            }
            mid += 1;
        }
//  Re-enter values for next iteration of while loop
        printf("Enter 3 positive integers with differences of 7 or more, enter a negative integer to exit:\n");
        scanf("%d", &integers[0]);
        scanf("%d", &integers[1]);
        scanf("%d", &integers[2]);
    }
    return 0;
}
