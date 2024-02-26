#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d", myNum);

    return 0; // Indicate successful completion of the program
}
