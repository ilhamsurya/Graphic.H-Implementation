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
	if(ganti==1){
		line(A.x,A.y,B.x,B.y);
	}
	else{
		if(A.y<B.y && A.x==B.x || A.x < B.y){
		int m_new = 2 * (B.x - A.x); 
		int slope_error_new = m_new - (B.y - A.y); 
   		for (int x = A.x, y = A.y; y <= B.y;y++) 
   		{ 
  			putpixel(x,y,warna);
      		slope_error_new += m_new; 
      		if (slope_error_new >= 0) 
      		{ 
         		x++; 
         		slope_error_new  -= 2 * (B.y - A.y); 
      		} 
   		} 
	}
	if(A.x<B.x && A.y<=B.y){
		int m_new = 2 * (B.y - A.y); 
		int slope_error_new = m_new - (B.x - A.x); 
   		for (int x = A.x, y = A.y; x <= B.x; x++) 
   		{ 
   			putpixel(x,y,warna);
      		slope_error_new += m_new; 

      		if (slope_error_new >= 0) 
      		{ 
         		y++; 
         		slope_error_new  -= 2 * (B.x - A.x); 
      		} 
   		} 	
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
