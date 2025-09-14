#include <cs50.h>
#include <stdio.h>

int sum(int x, int y){
    return x + y;
}

int res(int x, int y){
    return x - y;
}

int multi(int x, int y){
    return x * y;
}

float div(int x, int y){
    return (float) x / y;
}

int main(void){
    printf("sum [1]\n");
    printf("subtraction [2]\n");
    printf("multiplication [3]\n");
    printf("division [4]\n");
 
    printf("What mode do you want to do? ");

    int n = get_int("");

    printf("Select the numbers you want to operate with? ");


    int x = get_int("X = ");
    int y = get_int("Y = ");

    switch (n) {
    case 1:
        printf("Result: %d\n", sum(x, y));
        break;
    
    case 2:
        printf("Result: %d\n", res(x, y));
        break;
    
    case 3:
        printf("Result: %d\n", multi(x, y));
        break;
    
    case 4:
        printf("Result: %.4f\n", div(x, y));
        break;
    
    default:
        break;
        return 1;
    }
    
    return 0;
}