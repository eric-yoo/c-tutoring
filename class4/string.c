#include <stdio.h>
#include <string.h>

int main(){
    char string_example[]="string sample";
    int length1=strlen(string_example);
    char first_letter=string_example[0];
    char last_letter=string_example[12];

    printf("string1: %s\n",string_example);
    printf("length: %d\n",length1);
    printf("first letter: %c\n",first_letter);
    printf("last letter: %c\n",last_letter);

    char string_example2[]="different string";
    char string_example3[length1];
    strcpy(string_example3,string_example);

    printf("string2: %s\n",string_example2);
    printf("string3: %s\n",string_example3);

    int comparison1_2=strcmp(string_example,string_example2);
    int comparison1_3=strcmp(string_example,string_example3);

    printf("compare 1 & 2: %d\n",comparison1_2);
    printf("compare 1 & 3: %d\n",comparison1_3);
}
