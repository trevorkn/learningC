#include <stdio.h>
#include <stdlib.h>

//inputing both name and number first desighn

int main(){

    char name[20];
    int phoneNum;

    printf("Enter your name:");
    fgets(name, 20, stdin);

    printf("Enter your number:");
    scanf("%d", &phoneNum);

    printf("Your name is %s\n", name);
    printf("Your number is %d\n", phoneNum);

return 0;
}
