#include <stdio.h>

int main(){
  float sum = 0;
  for(int i = 0; i < 10; i++){
    sum = sum + 0.1;
  } 
  printf("%e\n", sum);
}