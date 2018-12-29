#include <stdio.h>
int main(){
  int len;
  scanf("%d", &len);
  char s1[len]; char s2[len]; char s3[len];
  scanf("%s", s1);
  scanf("%s", s2);
  int i;
  for (i=0; i<len/2; i++){
    s3[i]=s1[i];
  }
  for (; i<len; i++){
    s3[i]=s2[i];
  }
  printf("%s\n",s3);
}
