#include <stdio.h>

void scanArray(int* array){
  for (int i=0; i<7; i++){
    scanf("%d", &array[i]);
  }
}

int getMax(int* array){
  int max=array[0];
  int max_idx = 0;
  for (int i=1; i<7; i++){
    if(array[i]>max){
      max = array[i];
      max_idx = i;
    }
  }
  // printf("%d\n", max_idx);
  return max_idx;
}

int main(){

  int array[7];
  scanArray(array);
  int max_idx=getMax(array);
  printf("index %d: max %d\n",max_idx, array[max_idx]);
}
