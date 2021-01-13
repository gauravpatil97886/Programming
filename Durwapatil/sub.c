#include<stdio.h>
#include<stdlib.h>
int main(){
  int n1, n2, diff;
  printf("Enter two numbers : \n");
  scanf("%d %d", &n1, &n2);
  diff = n1 - n2;
  printf("%d - %d = %d", n1, n2, diff);
  return 0;
}
