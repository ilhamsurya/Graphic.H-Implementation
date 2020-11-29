#include "stroke.h"
using namespace std;
int warna = WHITE;
int ganti = 0;

// Garis Praktikum 2
void makeline(int xmin, int ymin, int xmaks, int ymaks){
    int dx = xmaks - xmin;
    int dy = ymaks - ymin;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float Xplus = dx / (float) steps;
    float Yplus = dy / (float) steps;

    float X = xmin;
    float Y = ymin;
    for (int i = 0; i <= steps; i++)
    {
        putpixel (X,Y,WHITE);
        X += Xplus;
        Y += Yplus;
    }
}
void garis(titik A, titik B){
	//GARIS BRESENHAM PERCOBAAN PERTAMA
  int w = B.x - A.x ;
    int h = B.y - A.y ;
    int dx1 = 0, dy1 = 0, dx2 = 0, dy2 = 0 ;

    if (w<0) 
		dx1 = -1 ; 
	else if (w>0)
		dx1 = 1 ;
		
    if (h<0) 
		dy1 = -1 ; 
	else if (h>0) 
		dy1 = 1 ;
		
    if (w<0) 
		dx2 = -1 ; 
		
	else if (w>0) 
		dx2 = 1 ;
		
    int longest = abs(w) ;
    int shortest = abs(h) ;
    
    if (!(longest>shortest)) {
        longest = abs(h) ;
        shortest = abs(w) ;
        if (h<0) 
			dy2 = -1 ; 
		else if 
			(h>0) dy2 = 1 ;
        dx2 = 0 ;            
    }

	int numerator = longest/2;
    for (int i=0;i<=longest;i++) {
        putpixel(A.x,A.y,warna) ;
        numerator += shortest ;
        if (!(numerator<longest)) {
            numerator -= longest ;
            A.x += dx1 ;
            A.y += dy1 ;
        } else {
            A.x += dx2 ;
            A.y += dy2 ;
        }
    }
}

void garis2(titik A, titik B){
	//GARIS BRESENHAM ALGORITMA TEORI
	//BRESENHAM
	//dx = x2 - x1;
	//dy = y2 - y1;
	//x = x1;
	//y = y1;
    int dx = B.x - A.x;
    int dy = B.y - A.y;
    //MENCARI NILAI MUTLAK (ABS)
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float Xplus = dx / (float) steps;
    float Yplus = dy / (float) steps;
    float X = A.x;
    float Y = A.y;
    for (int i = 0; i <= steps; i++)
    {
        putpixel (X,Y,WHITE);
        X += Xplus;
        Y += Yplus;
    }
}

void garis3(int x1, int y1, int x2, int y2, int warna) {
    int w = x2 - x1 ;
    int h = y2 - y1 ;
    int dx1 = 0, dy1 = 0, dx2 = 0, dy2 = 0 ;

    if (w<0) 
		dx1 = -1 ; 
	else if (w>0)
		dx1 = 1 ;
		
    if (h<0) 
		dy1 = -1 ; 
	else if (h>0) 
		dy1 = 1 ;
		
    if (w<0) 
		dx2 = -1 ; 
		
	else if (w>0) 
		dx2 = 1 ;
		
    int longest = abs(w) ;
    int shortest = abs(h) ;
    
    if (!(longest>shortest)) {
        longest = abs(h) ;
        shortest = abs(w) ;
        if (h<0) 
			dy2 = -1 ; 
		else if 
			(h>0) dy2 = 1 ;
        dx2 = 0 ;            
    }

	int numerator = longest/2;
    for (int i=0;i<=longest;i++) {
        putpixel(x1,y1,warna) ;
        numerator += shortest ;
        if (!(numerator<longest)) {
            numerator -= longest ;
            x1 += dx1 ;
            y1 += dy1 ;
        } else {
            x1 += dx2 ;
            y1 += dy2 ;
        }
    }
}

//untuk merubah warna garis
void gantiwarna(int color){
	warna = color;
}

//untuk ganti warna garis
void gariswarna(titik A, titik B, int color){

    int dx = B.x - A.x;
    int dy = B.y - A.y;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float Xplus = dx / (float) steps;
    float Yplus = dy / (float) steps;
    float X = A.x;
    float Y = A.y;
    for (int i = 0; i <= steps; i++)
    {
        putpixel (X,Y, color);
        X += Xplus;
        Y += Yplus;
    }
}

//untuk ganti gayagaris
void garisgaya(titik A, titik B, int type){
    int dx = B.x - A.x;
    int dy = B.y - A.y;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float Xplus = dx / (float) steps;
    float Yplus = dy / (float) steps;
    float X = A.x;
    float Y = A.y;
    for (int i = 0; i <= steps; i++)
    {
        switch (type){
        case 1:
            if (i%7<2)
            putpixel (X,Y,WHITE);
            break;
        //garis dash
        case 2:
            if (i%15<8)
            putpixel (X,Y,WHITE);
            break;
        //garis titik dash
        case 3:
            if (i%9>1 && i%9<6){
                putpixel (X,Y,WHITE);
            }
            else if(i%9>7){
                putpixel (X,Y,WHITE);
            }
            break;
        }
        X += Xplus;
        Y += Yplus;
    }
}

void garistebal(titik A, titik B, int tebal){
    int dx = B.x - A.x;
    int dy = B.y - A.y;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float Xplus = dx / (float) steps;
    float Yplus = dy / (float) steps;
    float X = A.x;
    float Y = A.y;
    for (int i = 0; i <= steps; i++)
    {
        int x=X,y=Y;
        if (abs(dy) > abs(dx)){
            for(int j=1; j<=tebal; j++){
            putpixel(x, y, WHITE);
            x++;
            }
        }
        else{
            for(int j=1; j<=tebal; j++){
            putpixel(x, y, WHITE);
            y++;
            }
        }
        putpixel (X,Y,WHITE);
        X += Xplus;
        Y += Yplus;
    }
}



//mengganti garis 
void gantigayagaris(int gayagaris, int pola, int ketebalan){
	ganti = 1;
	setlinestyle(gayagaris, pola, ketebalan); 
}
