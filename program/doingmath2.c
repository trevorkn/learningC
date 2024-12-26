#include <stdio.h>
#include <stdlib.h>

  float cube(float num);

 int main(){

   printf("The cube of 3.2 is :%f\n", cube(3.2));

  return 0;
}

  float cube (float num){

  float answer= num * num * num;
   return answer;
}
