#include <stdio.h>
#include <stdlib.h>

  int main(){

     char name[20];
     int number;

        printf("Enter your name:");
        fgets(name, 20, stdin);

        printf("Enter your number:");
        scanf("%d", &number);

        printf("My name is %s\n", name);
       printf("My number is %d\n", number);

  return 0;
}
