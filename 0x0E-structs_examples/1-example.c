#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User
{
	char *name;
	char *email;
	int age;
};
int main(void)
{
	struct User user;

	user.name = "Emmanuel";
	user.email = "cyrile450@gmail.com";
	user.age = 17;

	printf("NAME: %s\nEMAIL: %s\nAGE: %d\n", user.name, user.email, user.age);
	return (0);
}
