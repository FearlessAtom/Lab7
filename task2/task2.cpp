#include <stdio.h>
int main(){
    int number;
    printf("Enter a number: ");scanf_s("%d", &number);
    const char* result = (number >= 2 && number <= 4) ? "The given number is between 2 and 4!\n" : "The given number is not between 2 and 4\n";
    printf("%s", result);
    return 0;}