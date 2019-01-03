#include <stdio.h>

int fibonacci(int n){
  int first=1, second=1, next;
	for(int c=3;c<=n;c++){
		next = first+second;
    first = second;
    second = next;
	}
  return next;
}

int main(){
  int n;
  scanf("%d",&n);

  int next = fibonacci(n);
  printf("%d\n",next);

}
