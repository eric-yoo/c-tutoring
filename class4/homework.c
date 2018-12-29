#include <stdio.h>
int main(){
  int array[7];
  for (int i=0; i<7; i++){
    int x;
    scanf("%d", &x);
    array[i]=x%11;
  }
  int avg=0;
  for (int i=0; i<7; i++){
    avg+=array[i];
  }
  avg/=7;
  printf("%d\n",avg);
}
