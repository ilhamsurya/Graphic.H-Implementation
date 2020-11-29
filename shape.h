#include "stroke.h"

#define KIRIATAS 1
#define KANANATAS 2
#define KIRIBAWAH 3
#define KANANBAWAH 4
//TUGAS2
void frame();
void graphno6(double xpusat, double ypusat);
void graphno8a(double xpusat, double ypusat);
void graphno8b(double xpusat, double ypusat);
void graphno8c(double xpusat, double ypusat);

//TUGAS3
void square(titik LT, titik RB);
void segitiga(titik point1,int tinggi, int alas);
void jajarGenjang(titik point1, int panjang, int tinggi, int sisi);
int trapesium (titik point1, int tinggi, int alas_a, int alas_b);
void kombinasikotak();
void trapesiumsamakaki(titik point1, int tinggi, int alas_a, int alas_b);

//TUGAS 4

void mulut(titik pusat, int radius);

//TUGAS 5
//TRANSFORMASI
titik translasi(titik x, titik t);
titik scalling(titik x, titik s);
titik rotation(titik A, titik B, int deg);
void translasitugas2();
void scallingtugas2();

//BENTUK BANGUN DATAR
void belahketupat(titik A, titik B);
void layanglayang(titik A, titik B);
void segitigasamasisi(titik A, titik B);
void ellipse_midpoint(int xc,int yc,int rx,int ry);
void drawellipse(int xc,int yc,int x,int y);
void segitigaRotate(int x1,int y1,int x2,int y2,int x3,int y3, float Angle, int color);
// prosedure untuk membuat titik pada lingkaran
void drawLingkaran(int x,int y,int xC,int yC, int color);
// prosedure untuk membuat lingkaran
void Lingkaran(int Radius,int xC,int yC, int color);
void triangle(int x1,int y1,int x2,int y2,int x3,int y3, int color);


// prosedure membuat elips
// rx : jari-jari horizontal 
// ry : jari-jari vertikal
// xc : koordinat titik tengah x
// yc : koordinat titik tengah y
void elips(int rx, int ry, int xc, int yc);

// prosedure membuat titik pada elips
void elipsPlotPoints(int xc, int yc, int x, int y);

// function untuk melakukan translasi
int translasi(int a, int ta);

// prosedure untuk membuat translasi pada elips
// rx : jari-jari horizontal 
// ry : jari-jari vertikal
// xc : koordinat titik tengah x
// yc : koordinat titik tengah y
// tx : translasi titik x
// ty : translasi titik y
void translasiElips(int rx, int ry, int xc, int yc, int tx, int ty);
int scale(int a, int sa);
titik rotation(int x1, int y1, int x2, int y2, int deg);
void PlotRotation(int x0, int y0, int x, int y, int deg, int color);
void RotationEllips(int x0, int y0, int rx, int ry, int deg, int color);
titik rotate(titik A, int x_poros, int y_poros,int angle);
void segitigaSamaSisiRotated(int x1, int y1, int x2, int y2, int warna, int angle);
