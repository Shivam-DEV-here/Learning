#include<stdio.h>
#include<conio.h>

void main() {
    int x, y, c, count = 0;
    printf("Enter two numbers for addition: ");

    // Using a loop to ensure correct input
    do {
        if (scanf("%d%d", &x, &y) == 2) {
            c = x + y;
            printf("Your sum is = %d\n", c);
            break;  // Exit the loop if the input is correct
        } else {
            printf("You have entered the wrong data type. Please enter two integers: ");
            // Clear the input buffer
            while(getchar() != '\n');
        }
    } while (count < 1);

    getch();  // Only use this if you're in a DOS environment where it's required
}
