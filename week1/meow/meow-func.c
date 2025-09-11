#include <stdio.h>
#include <cs50.h>

void meow(int x);
int get_pos_int(const char* prompt);


int main(void) {
    int foo = get_pos_int("How many times to run? ");
    
    meow(foo);

    printf("The program ran: %d times\n", foo);
    
    return 0;
}

int get_pos_int(const char* prompt) {
    int foo;
    do
    {
        foo = get_int("%s", prompt);
    } 
    while (foo < 0);

    return foo;

}

void meow(int x) {
    for (int i = 0; i < x; i++)
    {
        printf("Meow :3\n");
    }
}