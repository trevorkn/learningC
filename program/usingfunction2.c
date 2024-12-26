#include <stdio.h>
#include <stdlib.h>

  void info (char name[], int age);
  int main(){

     printf("Hello, wonderful people\n");
     info("Trevor", 21);
return 0;
}

  void info (char name[], int age){
     printf("I am %s\n", name);
    printf("I am %d\n", age);
}
