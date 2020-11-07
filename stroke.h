#include <bits/stdc++.h>
#include<graphics.h>
using namespace std;
typedef struct{
	int x;
	int y;
}titik;
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGRAY 7
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15
//variabel global untuk warna
//variabel global untuk merubah garis
//int ubahgaris;
//membuat garis
void garis(titik A, titik B);
void garis2(titik A, titik B);
void gantiwarna(int color);
void gantigayagaris(int gayagaris, int pola, int ketebalan);
void garisgaya(titik A, titik B, int type);
void garistebal(titik A, titik B, int tebal);
void gariswarna(titik A, titik B, int color);
void makeline(int xmin, int ymin, int xmaks, int ymaks);
