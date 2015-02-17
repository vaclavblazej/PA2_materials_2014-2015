#include <stdio.h>
#include <stdlib.h>

int comp (const void * elem1, const void * elem2) 
{
    return *((int*)elem1) - *((int*)elem2);
}

void ctiPole(size_t * delka, int ** pole){
	int i;
	scanf("%d", &*delka);
	*pole = calloc(*delka, sizeof(int));
	for (i = 0; i < *delka; ++i)
	{
		scanf("%d", &(*pole)[i]);
	}
	return;
}

void seradPole(size_t delka, int ** pole){
	qsort(*pole, delka, sizeof(int), comp);
}

void vypisPole(size_t delka, int *pole){
	int i;
	for (i = 0; i < delka; ++i)
	{
		if(i != 0) printf(", ");
		printf("%d", pole[i]);
	}
	printf("\n");
}

int main(){
	int delka, i;
	int * pole;
	ctiPole(&delka, &pole);
	vypisPole(delka, pole);
	seradPole(delka, &pole);
	vypisPole(delka, pole);
	free(pole);
}