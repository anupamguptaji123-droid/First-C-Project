#include<stdio.h>

int main()  {
    int num, i;
    unsigned long long fact = 1;

    printf("Enter a number which you want to find the factorial: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("factorial of negative number doesn't exist!!\n");
    }
    else {
        for(i = 1; i <= num; i++) {

            fact = fact * i;
        }

        printf("Factorial of %d = %11u\n", num, fact);
    }

    return 0;
}
