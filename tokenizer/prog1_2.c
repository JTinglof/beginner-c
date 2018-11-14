#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
printf("Assigment #1-2, Joseph Tinglof, jbtinglof@gmail.com\n");
char userWords[250];
char lineMaker[2] = " ";
char *token;

printf(">");
scanf("65%[^\n]%*c", userWords);
fgets(userWords, 65, stdin);

token = strtok(userWords, lineMaker);
while(token != NULL )
{
	if(isdigit(*token))
	{
		printf("INT ");
	}
	else
	{
		printf("STR ");
	}
	token = strtok(NULL, lineMaker);
}

return 0;
}
