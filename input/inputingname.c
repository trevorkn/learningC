#include <stdio.h>
#include <stdlib.h>

//inputing name
int main(){

    char name[20];

    printf("Enter your name:");
    fgets(name, 20, stdin);

    printf("Your name is %s\n", name);

return 0;
}

