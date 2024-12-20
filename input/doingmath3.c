#include <stdio.h>

//Second way of doing math(multiplication) via double

    int main(){

       double num1;
       double num2;

          printf("Enter first number:");
          scanf("%lf", &num1);

          printf("Enter second number:");
          scanf("%lf", &num2);

       printf("Answer: %f\n", num1 * num2);

    return 0;
}
