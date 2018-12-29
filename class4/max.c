#include <stdio.h>
int main(){
  int array[7];
  for (int i=0; i<7; i++){
    scanf("%d", &array[i]);
  }
  int max=array[0];
  int max_idx = 0;
  for (int i=1; i<7; i++){
    if(array[i]>max){
      max = array[i];
      max_idx = i;
    }
  }
  printf("index %d: max %d\n",max_idx, max);
}
