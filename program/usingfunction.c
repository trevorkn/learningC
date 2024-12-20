#include <stdio.h>
#include <stdlib.h>

//using function

void wooow(char day[], int time);
    int main(){

     printf("Hello world\n");

       wooow("Friday", 7);

     printf("I love it\n");

  return 0;

}

     void wooow(char day[], int time){


       printf("It's a wonderful day\n");
       printf("this day %s seems like a beautiful day\n", day);
       printf("I am up early at %d AM already coding\n", time);
       printf("Coding is addictive\n");

}
