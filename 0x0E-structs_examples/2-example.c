#include <stdio.h>
#include <stdlib.h>

struct User
{
	char *name;
	char *email;
	int age;
};
struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	user = malloc(sizeof(struct User));
	if (user == NULL)
		return  (NULL);

	user->name = name;
	(*user).email = email;
	user->age = age;

	return (user);
}
int main(void)
{
	struct User *user;

	user = new_user("Foo bar", "cyrile450@gmail.com", 98);
	printf("User name: %s\n", user->name);
	printf("User email: %s\n", (*user).email);
	printf("User age: %d\n", user->age);

	return (0);
}
