#include <cs50.h>
#include <stdio.h>

int main(void) {
    char c = get_char("Do you agree?[Y/N] ");
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not Agreed.\n");
    }
    return 0;
}