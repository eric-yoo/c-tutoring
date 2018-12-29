#include <stdio.h>
int main(){
  int array[5];
  for (int i=0; i<5; i++){
    scanf("%d", &array[i]);
  }
  int sum=0;
  for (int i=0; i<5; i++){
    printf("%d\n", array[i]);
    sum+=array[i];
  }
  printf("%d\n",sum);
}
