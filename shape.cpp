#include "shape.h"

//membuat persegi dan persegi panjang
void square(titik LT, titik RB){
	titik point2;
	// Memasukan nilai titik,titik yang dibutuhkan
	// Pada persegi maupun persegi panjang dibutuhkan 4 poin
	// yaitu LEFT, TOP, RIGHT, BOTTOM
	point2.x = RB.x;
	point2.y = LT.y;
	titik point3;
	point3.x = LT.x;
	point3.y = RB.y;
	//Memasukan nilai-nilai ke algorima 
	garis(LT,point2);
	garis(LT,point3);
	garis(point2,RB);
	garis(point3,RB);
}

void segitiga(titik point1,int tinggi, int alas){
  	 //titik digunakan untuk mendapatkan sudut siku siku 
	titik point2;
    point2.x=point1.x;
    point2.y=abs(point1.y - tinggi);
    garis2(point1,point2);
    point2.x=point1.x + alas;
    point2.y=point1.y;
    garis2(point1,point2);
    titik point3;
    point3.x=point1.x;
    point3.y=abs(point1.y - tinggi);
    point2.x=point1.x + alas;
    point2.y=point1.y;
    garis2(point3, point2);
}

//membuat trapesium
int trapesium (titik point1, int tinggi, int alas_a, int alas_b){
	//titik A untuk mencari titik pusat dari trapesium
    titik point2,point3;
    point2.x=point1.x;
    //titik tinggi untuk mendapatkan tinggi dari trapesium
    point2.y=abs(point1.y-tinggi);
    garis2(point1,point2);
    //alas_a untuk mendapatkan garis atas dari trapesium
    point2.x=point1.x +  alas_a;
    point2.y=point1.y;
    garis2(point1,point2);
    //alas_b untuk mendapatkan garis bawah dari trapesium
    point3.x=point1.x;
    point3.y=abs(point1.y-tinggi);
    point2.x=point1.x + alas_b;
    point2.y=abs(point1.y-tinggi);
    garis2(point3, point2);
    //gari sambung titik atas dan bawah
    point3.x=point1.x+ alas_b;
    point3.y=abs(point1.y-tinggi);
    point2.x=point1.x +  alas_a;
    point2.y=point1.y;
    garis2(point3,point2);
}

void jajarGenjang(titik point1, int panjang, int tinggi, int sisi){

	// point 1 sbg pusat
	int x2 = point1.x + panjang;
    int x3 = point1.x-sisi;
    int x4 = x2-sisi;
    int y2 = point1.y;
    int y3 = abs(point1.y - tinggi);
    int y4 = y3;
    
    //jajar genjang terbagi menjadi sisi A,B,C,D
    titik point2;
    point2.x=x2;
    point2.y=y2;
    garis2(point1, point2);
    titik point3;
    point3.x=x3;
    point3.y=y3;
    point2.x=x4;
    point2.y=y4;
    garis2(point3, point2);
    point2.x=x3;
    point2.y=y3;
    garis2(point1, point2);
    point3.x=x2;
    point3.y=y2;
    point2.x=x4;
    point2.y=y4;
    garis2(point3, point2);
	
}

void circlemidpoint(int xc,int yc,int r)
{
	int x=0,y=r;
	int p=5/4-r;
	while(x<y)
	{
	drawcircle(xc,yc,x,y);
	x++;
	if(p<0)
	{
	p=p+2*x+1;
	}
	else
	{
	y--;
	p=p+2*(x-y)+1;
	}
	drawcircle(xc,yc,x,y);
	delay(10);
}
}

void drawcircle(int xc,int yc,int x,int y)
{
	putpixel(xc+x, yc+y, GREEN);
	putpixel(xc-x, yc+y, RED);
	putpixel(xc+x, yc-y, YELLOW);
	putpixel(xc-x, yc-y, BLUE);
	putpixel(xc+y, yc+x, MAGENTA);
	putpixel(xc-y, yc+x, RED);
	putpixel(xc+y, yc-x, GREEN);
	putpixel(xc-y, yc-x, MAGENTA);
}

void mulut(titik pusat, int radius){
	int pk = 1 - radius;
	int x = 0;
	int y = radius;
	 titik awal,akhir;

	while(x < y)
	{
		//Menentukan titik titik lingkaran dan warna
		putpixel(x+pusat.x,y+pusat.y,GREEN);
		putpixel(-x+pusat.x,y+pusat.y,BLUE);
		//Dikarenakan mulut hanyalah setengah lingkaran, 
		//cukup menggunakan 2 putpixel saja

		++x;
		if(pk < 0)
		{
			pk = pk + (2*x) + 1;
		}
		else
		{
			--y;
			pk = pk + (2*x) + 1 - (2*y);
		}
	}
		//memasukan nilai titik pusat, dll
		awal.x = pusat.x - x;
	 	awal.y = pusat.y + y;
	 	akhir.x = pusat.x + x;
	 	akhir.y = pusat.y + y;
	 	gantiwarna(BLUE);
	 	garis2(awal,akhir);
}

void graphno6(double xpusat, double ypusat){
	
	int skala=50;
    int xmin,xmaks, y;
    //y=x^2
    for(double i=1; i<=5;i+=0.01){

        putpixel(xpusat+(i*skala), ypusat-(i*i*skala),LIGHTGREEN);

    }
}

void graphno8a(double xpusat, double ypusat){
	int skala=50;
    int xmin, xmaks, ymin, ymaks;

    for(double i=0; i<50;i+=0.01){
        //putpixel(xpusat-(i*skala), ypusat-(-(i*i*i*skala)-(3*-i*skala)-1*skala),LIGHTRED);
        putpixel(xpusat+(i*skala), ypusat-((i*i*i*skala)-(3*i*skala)-1*skala),YELLOW);

    }
}

void graphno8b(double xpusat, double ypusat){
	int skala=50;

     int xmin, xmaks, ymin, ymaks;
    for(double i=0; i<50;i+=0.01){
        putpixel(xpusat+(i*skala), ypusat-(sin(i)*skala),LIGHTRED);


    }
}

void graphno8c(double xpusat, double ypusat){
	int skala=50;

     int xmin, xmaks, ymin, ymaks;
    for(double i=0; i<50;i+=0.01){
        putpixel(xpusat+(i*skala), ypusat-(cos(i)*skala),MAGENTA);

    }

}





