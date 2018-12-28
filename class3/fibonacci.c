#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
	int first=1, second=1, next;
	for(int c=3;c<=n;c++){
		next = first+second;
    first = second;
    second = next;
	}
  printf("%d\n",next);

}
