#include <stdio.h>
int somar(int array[], int indice, int soma)
{



int main(int argc, char const *argv[])
{
	int i, indice, soma = 0;
	scanf("%d", &indice);
	int array[indice];
	for (i = 0; i < indice; ++i)
	{
		scanf("%d", &array[i]);
	}
	printf("%d", somar(array, indice, soma));
	return 0;
}