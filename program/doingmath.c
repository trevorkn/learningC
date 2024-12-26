#include <stdio.h>
#include <stdlib.h>

float cube(float c);


int main(){

  printf("Answer:%f", cube (4.2));
return 0;
}
float cube(float c){
 float  result= c * c * c;
  return result;
}
