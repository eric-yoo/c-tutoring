#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  if (n<0 || n>5){
    for (int i=0; i<10; i++){
      int x;
      scanf("%d", &x);
      if(x==0){
        printf("start game\n");
      }

      else if(x==1){
        printf("a\n");
      }
      else if(x==2){
        printf("b\n");
      }
      else if(x==3){
        printf("c\n");
      }
      else if(x==4){
        printf("d\n");
      }
      else if(x==5){
        printf("e\n");
      }

      else if(x==n){
        printf("end game\n");
        break;
      }
      else {
        printf("ignore this input\n");
      }
    }
  }
}
