#include <cs50.h>
#include <stdio.h>

int main(void) {
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");
    
    if (x < y) {
        printf("Y is grater then X\n");
    }
    else if (x > y) {
        printf("X is grater then Y\n");
    }
    else {
        printf("X and Y are equal\n");
    }
}