#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//building word game

   int main(){

       char color[20];
       char noun[20];
       char name[20];

            printf("Enter a color:");
            fgets(color, 20, stdin);
            color[strcspn(color, "\n")]= '\0';

            printf("Enter a noun:");
            fgets(noun, 20, stdin);
            noun[strcspn(noun, "\n")]= '\0';

            printf("Enter a  name:");
            fgets(name, 20, stdin);
            name[strcspn(name, "\n")]= '\0';


         printf("\nRoses are %s\n", color);
         printf("%s is blue\n", noun);
         printf("I love %s\n", name);

      return 0;
}
