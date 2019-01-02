#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int a[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%d", &a[i][j]);
    }
  }
  int diag = 0;
  for(int i=0;i<n;i++){
    diag += a[i][i];
  }
  printf("%d\n", diag);
}
