#include "stroke.h"

#define KIRIATAS 1
#define KANANATAS 2
#define KIRIBAWAH 3
#define KANANBAWAH 4

void square(titik LT, titik RB);
void segitiga(titik point1,int tinggi, int alas);
void jajarGenjang(titik point1, int panjang, int tinggi, int sisi);
int trapesium (titik point1, int tinggi, int alas_a, int alas_b);
void circlemidpoint(int xc,int yc,int r);
void drawcircle(int xc,int yc,int x,int y);
void mulut(titik pusat, int radius);
void graphno6(double xpusat, double ypusat);
void graphno8a(double xpusat, double ypusat);
void graphno8b(double xpusat, double ypusat);
void graphno8c(double xpusat, double ypusat);
