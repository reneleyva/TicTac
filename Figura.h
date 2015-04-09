/* Enum para figuras */
typedef enum {CIRCLE, CROSS} tipe;

/* estructura para figuras */
struct Figura
{
	tipe tipo;
};
struct Point
{
	int x;
	int y; 
};

int mueve(int **, struct Point*, tipe);

int check(int **, tipe);

struct Figura* newFigura(tipe tipo);

struct Point* newPoint(int x, int y);

char* figuraToString(struct Figura*);