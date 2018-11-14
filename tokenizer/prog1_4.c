#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
printf("Assigment #1-4, Joseph Tinglof, jbtinglof@gmail.com\n");
char userWords[250];
char lineMaker[2] = " ";
char *token;
int j = 0;
char returnLine [250];
char digit[5] = "INT ";
char letters[5] = "STR ";

printf(">");
scanf("65%[^\n]%*c", userWords);
fgets(userWords, 65, stdin);

token = strtok(userWords, lineMaker);

while(token != NULL && j != 4)
{
	if(strlen(userWords) > 20)
	{
		printf("ERROR! Input sting too long.\n");
		exit(2);
	} 
	else if(isdigit(*token) && j < 2)
	{
		strcat(returnLine, digit);
		j++;
	}
	else if(isalpha(*token) && j < 2)
	{
		strcat(returnLine, letters);
		j++;
	}
	else
	{
		j++;
	}
	token = strtok(NULL, lineMaker);
}
if(j >= 3)
{
	printf("ERROR! Incorrect number of tokens found.\n");
}
else
{
	printf("%s\n", returnLine);
}

return 0;
}
