#include <stdio.h>
#include <string.h>

struct User{
	char name[20];
	int age;
	int gender; 		// 0=male, 1=female
	float stats[3];		// (power, intelligence, friendliness)
};

int main(){
	struct User user1;
  user1.age = 27;
  user1.gender = 0;
  user1.stats[0] = 7.2;
  user1.stats[1] = 7.4;
  user1.stats[2] = 7.8;
  char username[] = "Eric";
	for(int i=0; i<strlen(username); i++){
    user1.name[i]=username[i];
  }
  printf("user 1 info\n");
  printf("name %s\n", user1.name);
  printf("age %d\n", user1.age);
  if( user1.gender == 0) printf("gender male\n");
  else printf("gender female\n");
  printf("stats: %.2f, %.2f, %.2f\n", user1.stats[0], user1.stats[1], user1.stats[2]);
}
