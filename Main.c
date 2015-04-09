#include "Figura.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

struct Figura* newFigura(tipe tipo) {
	struct Figura* figura = (struct Figura*)malloc(sizeof(struct Figura));
	assert(figura != NULL);
	figura->tipo = tipo;
	return figura;
}

struct Point* newPoint(int x, int y) {
	struct Point* point = (struct Point*)malloc(sizeof(struct Point));
	point->x = x;
	point->y = y;
	return point;
}

char* figuraToString(struct Figura* figura) {
	char res[1];
	if (figura->tipo == CIRCLE)
		res = "°";
	else {
		res = "X";
	}
	return res;	
}

int main(int argc, char const *argv[])
{
	struct Figura* fig = newFigura(CIRCLE);
	printf("%s\n", figuraToString(fig)); 
	return 0;
}

