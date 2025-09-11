#include <stdio.h>

int main(void) {
    char answer[50];

    printf("What's your name? ");
    scanf("%s", answer);
    
    printf("Your name is %s\n", answer);
    
    return 0;
}