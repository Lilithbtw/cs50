#include <stdio.h>
#include <cs50.h>

void print_row(int times){
    for (int count = 0; count < times; count++){
        printf("#");
    }
    printf("#");
    printf("\n");
}

int main(void){
    // Prompt for user input
    int levels;
    do
    {
    levels = get_int("How many levels do you want in the pyramid: ");
    } while (levels <= 0 || levels > 30);
    
    // build the pyramid
    for (int i = 0; i < levels; i++)
    {
        print_row(i);
    }
    
    return 0;
}
