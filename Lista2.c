#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado() {
  srand(time(NULL));
  return (rand() % 6) + 1; 
}
int main() {  
  printf("%d\n", Dado()); 
  return 0;
}

