#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int x;
  scanf("%d", &x);
  int first;
  int i;
  for (i=0; i<n; i++){
    int current;
    scanf("%d", &current);
    if(i==0){
      first = current;
    }
    if(current>x){
      printf("%d\n", current);
      break;
    }
  }
  if(i==n){
    printf("%d\n",first);
  }
}
