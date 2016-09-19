#include <stdio.h>

int palindromo(char string[], int total, int atual)
{
	if(total == 0)
	{
		return 0;
	}	
	if (string[atual] != string[total - atual])
	{
		return -1;
	}
	if (string[atual] == string[total - atual] && atual == total - 1)
	{
		return 0;
	}

	else if (string[atual] == string[total - atual])
	{
		return palindromo(string, total, (atual+1));
	}
}

int main(int argc, char const *argv[])
{
	char string[255];
	int x, i;
	while(gets(string) != NULL)
	{
		for (i = 0; i < 255; ++i)
		{
			if(string[i] == '\0')
			{	
				x = i-1;
				break;
			}
		}	
		x = palindromo(string, x, 0);
		if (x)
		{
		 	printf("nao palindromo\n");
		}
		else
		{
	 		printf("palindromo\n");
		} 
	return 0;
	}
}