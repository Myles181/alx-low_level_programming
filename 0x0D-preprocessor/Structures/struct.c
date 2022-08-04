struct User
{
	char *name;
	char *email;
	int *age;
};
int main(void)
{
	struct User user;

	user.name = "Foo Bar";
	return (0);
}
