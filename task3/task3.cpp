    #include <stdio.h>
    int main(){
        int number;
        printf("Enter any number : ");scanf_s("%d",&number);
        const char* result = (number % 4 == 0 && number % 10 == 0) ? "Positive":"Nagative";
        printf("%s",result);
        return 0;}