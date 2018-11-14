#include <stdio.h>
#include <string.h>

int main()
{
printf("It's working so far.\n");
char userWords[250];
char lineMaker[2] = " ";
char *token;

scanf("65%[^\n]%*c", userWords);
fgets(userWords, 65, stdin);

token = strtok(userWords, lineMaker);
while(token != NULL )
{
	printf("=%s=\n", token);
	token = strtok(NULL, lineMaker);
}

return 0;
}
