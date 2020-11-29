#include "shape.h"
#define PI 3.14159265358979323846

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//TUGAS 2 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void frame(){
    int x1=1,x2=639,y1=1,y2=479;
    titik A,B;
    A.x=x1;
    A.y=y1;
    B.x=x2;
    B.y=y1;
    garis(A,B);
    A.x=x1;
    A.y=y2;
    B.x=x2;
    B.y=y2;
    garis(A,B);
    A.x=x2;
    A.y=y1;
    B.x=x2;
    B.y=y2;
    garis(A,B);
    A.x=x1;
    A.y=y1;
    B.x=x1;
    B.y=y2;
    garis(A,B);
    A.x=x1;
    A.y=y2/2;
    B.x=x2;
    B.y=y2/2;
    garis(A,B);
    A.x=x2/2;
    A.y=y1;
    B.x=x2/2;
    B.y=y2;
    garis(A,B);
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//TUGAS 3 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



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
	// membuat persegi panjang, perpanjang X nya saja
	// persegi disamakan semua antara jaraknya
}

void kombinasikotak(){
	titik LT,RB;
	LT.x = 10;
	LT.y = 10;
	RB.x = 450;
	RB.y = 450;
	for (int i=0;i<=10;i++){
		square(LT,RB);
		LT.x += 20; 
		LT.y += 20;
		RB.x -= 20;
		RB.y -= 20;
	}
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


void trapesiumsamakaki(titik point1, int tinggi, int alas_a, int alas_b){
    titik point2,point3;
    point2.x=point1.x-alas_b/2;
    point2.y=abs(point1.y+tinggi);
    garis2(point1,point2);
    point2.x=point1.x +  alas_a;
    point2.y=point1.y;
    garis2(point1,point2);
    point3.x=point1.x-alas_b/2;
    point3.y=abs(point1.y+tinggi);
    point2.x=point1.x + alas_a+alas_b/2;
    point2.y=abs(point1.y+tinggi);
    garis2(point3, point2);
    point3.x=point1.x+ alas_a+alas_b/2;
    point3.y=abs(point1.y+tinggi);
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//TUGAS 4 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void drawLingkaran(int x,int y,int xC,int yC, int color)
{
    putpixel(xC + x,yC + y,color);
    putpixel(xC + x,yC - y,color);
    putpixel(xC - x,yC + y,color);
    putpixel(xC - x,yC - y,color);
    putpixel(xC + y,yC + x,color);
    putpixel(xC - y,yC + x,color);
    putpixel(xC + y,yC - x,color);
    putpixel(xC - y,yC - x,color);
}

void Lingkaran(int Radius,int xC,int yC, int color)
{
    int P;
    int x,y;
    void drawLingkaran(int x,int y,int xC,int yC, int color);
    P = 1 - Radius;
    x = 0;
    y = Radius;
    drawLingkaran(x,y,xC,yC,color);
    while (x<=y)
    {
        x++;
        if (P<0)
        {
            P += 2 * x + 1;
        }
        else
        {
            P += 2 * (x - y) + 1;
            y--;
        }
        drawLingkaran(x,y,xC,yC,color);
    }

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


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//TUGAS 5 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//TRANSFORMASI
titik translasi(titik x, titik t){
    x.x+=t.x;
    x.y+=t.y;
    return x;
}
titik scalling(titik x, titik s){

    x.x=x.x*s.x;
    x.y=x.y*s.y;
    return x;
}

titik rotation(titik A, titik B, int deg) {
	titik rt;
	double vsin, vcos;

	vcos = cos(deg * (PI / 180.0));
	vsin = sin(deg * (PI / 180.0));

	rt.x = (vcos * (B.x - A.x)) + (-vsin * (B.y - A.y)) + A.x;
	rt.y = (vsin * (B.x - A.x)) + (vcos * (B.y - A.y)) + A.y;

	return rt;
}


//TUGAS TRANSFORMASI
void translasitugas2(){
    int x2=639,y2=479;
    int skala=50;
    frame();
    titik B;
    titik t;
    cout<<"Masukan titik translasi x: ";
    cin>>t.x;
    cout<<"Masukan titik translasi y:";
    cin>>t.y;


     for(double i=1; i<=5;i+=0.01){
        B.x=x2/2+(i*skala);
        B.y=y2/2-(i*i*skala);
        B=translasi(B,t);
        putpixel(B.x, B.y,LIGHTGREEN);

    }
    for(double i=0; i<50;i+=0.01){
        B.x=x2/2+(i*skala);
        B.y=x2/2-((i*i*i*skala)-(3*i*skala)-1*skala);
        B=translasi(B,t);
        putpixel(B.x,B.y ,LIGHTRED);

    }

}

void scallingtugas2(){
    int x2=639,y2=479;
    int skala=50;
    frame();
    titik B;
    titik t;
    cout<<"Masukan scale x: ";
    cin>>t.x;
    cout<<"Masukan scale y:";
    cin>>t.y;


     for(double i=1; i<=5;i+=0.01){
        B.x=x2/2+(i*skala);
        B.y=y2/2-(i*i*skala);
        B=scalling(B,t);
        putpixel(B.x, B.y,LIGHTGREEN);

    }
    for(double i=0; i<50;i+=0.01){
        B.x=x2/2+(i*skala);
        B.y=x2/2-((i*i*i*skala)-(3*i*skala)-1*skala);
        B=scalling(B,t);
        putpixel(B.x,B.y ,LIGHTRED);

    }
}
//BANGUN DATAR

void segitigasamasisi(titik A, titik B){
    garis2(A,B);
    garis2(A, rotation(A,B,300));
    garis2(B, rotation(A,B,-60));
}

void belahketupat(titik A, titik B)
{
	garis2(A, rotation(A,B,300));
    garis2(B, rotation(A,B,-60));
	garis2(B,rotation(A,B,-300));
	garis2(A,rotation(A,B,60));
}

void layanglayang(titik A, titik B)
{
	double sca = 0.2;
	garis2(A, rotation(A,B,-300));
    garis2(B, rotation(A,B,60));
	titik rt = rotation(A, B, -300);
	titik scale;
	scale.y=sca;
	scale.x=1;
	titik rt2=scalling(rt,scale);
	rt2.x=rt.x;
	garis2(B,rt2);
	rt=rotation(A, B, 60);
	rt2=scalling(rt,scale);
	rt2.x=rt.x;
	garis2(A,rt2);
}


void ellipse_midpoint(int xc,int yc,int rx,int ry)
{
	// REGION 1
	int x=0,y=ry,x2,y2;
	float p1=(ry*ry)-(rx*rx*ry)+(rx*rx)/4;
	int a=2*ry*ry*x;
	int b=2*rx*rx*y;
	while(a<=b){
		drawellipse(xc,yc,x,y);
		x++;
		if(p1<0) {
		a=2*ry*ry*x;
		p1=p1+a+(ry*ry);}
		else {
	y--;
		a=2*ry*ry*x;
		b=2*rx*rx*y;
		p1=p1+a-b+(ry*ry);
	}	
	drawellipse(xc,yc,x,y);
	delay(10);}
	// REGION 2
	float p2=((ry*ry)*(x+0.5)*(x+0.5))+((rx*rx)*(y-1)*(y-1))-((rx*rx)*(ry*ry));
	a=0;
	b=0;
	while(y>=0) {
		drawellipse(xc,yc,x,y);
	y--;
		if(p2<0) {
		x++;
		a=2*ry*ry*x;
		b=2*rx*rx*y;
		p2=p2+a-b+(rx*rx);}
		else{
		b=2*rx*rx*y;
		p2=p2-b+(rx*rx); }
		drawellipse(xc,yc,x,y);
	}
}

void drawellipse(int xc,int yc,int x,int y)
{
	putpixel(xc+x, yc+y, 15);
	putpixel(xc-x, yc+y, WHITE);
	putpixel(xc+x, yc-y, WHITE);
	putpixel(xc-x, yc-y, 15);
}

void triangle(int x1,int y1,int x2,int y2,int x3,int y3, int color)
{
   garis3(x1,y1,x2,y2,color);
   garis3(x2,y2,x3,y3,color);
   garis3(x3,y3,x1,y1,color);
}

void segitigaRotate(int x1,int y1,int x2,int y2,int x3,int y3, float Angle, int color)
{
    int x,y,a1,b1,a2,b2,a3,b3,p=x1,q=y2;
    //float Angle = 30;
    //cleardevice();
    Angle=(Angle*3.14)/180;
    a1=p+(x1-p)*cos(Angle)-(y1-q)*sin(Angle);
    b1=q+(x1-p)*sin(Angle)+(y1-q)*cos(Angle);
    a2=p+(x2-p)*cos(Angle)-(y2-q)*sin(Angle);
    b2=q+(x2-p)*sin(Angle)+(y2-q)*cos(Angle);
    a3=p+(x3-p)*cos(Angle)-(y3-q)*sin(Angle);
    b3=q+(x3-p)*sin(Angle)+(y3-q)*cos(Angle);
    //printf("Rotate");
    triangle(a1,b1,a2,b2,a3,b3,color);
    int arr[] = 
	{
		a1, b1, a2, b2, a3, b3	
	};
	
}

titik rotate(titik A, int x_poros, int y_poros,int angle)
{
        // Shifting the pivot point to the origin
        // and the given points accordingly
        int x_shifted = A.x - x_poros;
        int y_shifted = A.y - y_poros;
 
        // Calculating the rotated point co-ordinates
        // and shifting it back
        A.x = x_poros+ (x_shifted * cos(angle) - y_shifted * sin(angle));
        A.y = y_poros + (x_shifted * sin(angle) + y_shifted * cos(angle));
        cout << "(" << A.x << ", " << A.y << ") ";
        return A;
}



int translasi(int a, int ta)
{
	return a + ta;
}

void elips(int rx, int ry, int xc, int yc)
{
	float dx, dy, d1, d2, x, y; 
    x = 0; 
    y = ry; 
    elipsPlotPoints(rx, ry, x, y); 
  
    // Initial decision parameter of region 1 
    d1 = (ry * ry) - (rx * rx * ry) +  
                     (0.25 * rx * rx); 
    dx = 2 * ry * ry * x; 
    dy = 2 * rx * rx * y; 
  
    // For region 1 
    while (dx < dy)  
    { 
        x++; 
        dx = dx + (2 * ry * ry); 
		// Checking and updating value of 
        // decision parameter based on algorithm 
        if (d1 < 0) 
        { 
            //x++; 
            //dx = dx + (2 * ry * ry); 
            d1 = d1 + dx + (ry * ry); 
        } 
        else 
        { 
           // x++; 
            y--; 
           // dx = dx + (2 * ry * ry); 
            dy = dy - (2 * rx * rx); 
            d1 = d1 + dx - dy + (ry * ry); 
        } 
        //elipsPlotPoints(rx, ry, x, y); 
        putpixel ( x + xc, y + yc, RED);
        putpixel ( -x + xc, y + yc, RED);
        putpixel ( x + xc, -y + yc, RED);
        putpixel ( -x + xc, -y + yc, RED);
        
    } 
  
    // Decision parameter of region 2 
    d2 = ((ry * ry) * ((x + 0.5) * (x + 0.5))) +  
         ((rx * rx) * ((y - 1) * (y - 1))) - 
          (rx * rx * ry * ry); 
  
    // Plotting points of region 2 
    while (y >= 0) 
    { 
  		y--; 
  		dy = dy - (2 * rx * rx);
        // Checking and updating parameter 
        // value based on algorithm 
        if (d2 > 0)  
        { 
           // y--; 
           // dy = dy - (2 * rx * rx); 
            d2 = d2 + (rx * rx) - dy; 
        } 
        else 
        { 
           // y--; 
            x++; 
            dx = dx + (2 * ry * ry); 
            //dy = dy - (2 * rx * rx); 
            d2 = d2 + dx - dy + (rx * rx); 
        } 
        //elipsPlotPoints(rx, ry, x, y); 
        putpixel ( x + xc, y + yc, RED);
        putpixel ( -x + xc, y + yc, RED);
        putpixel ( x + xc, -y + yc, RED);
        putpixel ( -x + xc, -y + yc, RED);
		
    } 
} 

void elipsPlotPoints(int xc, int yc, int x, int y)
{
//	putpixel (xc + x, yc + y, 14);
//	putpixel (xc - x, yc + y, 13);
//	putpixel (xc + x, yc - y, 12);
//	putpixel (xc - x, yc - y, 11);

	putpixel ( x + xc, y + yc, 14);
    putpixel ( -x + xc, y + yc, 13);
    putpixel ( x + xc, -y + yc, 12);
    putpixel ( -x + xc, -y + yc, 11);
}

void translasiElips(int rx, int ry, 
			int xc, int yc, int tx, int ty)
{
	elips(rx, ry, translasi(xc,tx),  translasi(yc,ty));
	
}

int scale(int a, int sa)
{
	return  a * sa;
}

titik rotation(int x1, int y1, int x2, int y2, int deg) {
	titik rt;
	double vsin, vcos;
	
	vcos = cos(deg * (PI / 180.0));
	vsin = sin(deg * (PI / 180.0));
	
	rt.x = (vcos * (x2 - x1)) + (-vsin * (y2 - y1)) + x1;
	rt.y = (vsin * (x2 - x1)) + (vcos * (y2 - y1)) + y1;
	
	return rt;
}

void PlotRotation(int x0, int y0, int x, int y, int deg, int color) {
	titik p1, p2, p3, p4;
	p1 = rotation(x0, y0, x0 + x , y0 + y, deg);
	p2 = rotation(x0, y0, x0 + x , y0 - y, deg);
	p3 = rotation(x0, y0, x0 - x , y0 + y, deg);
	p4 = rotation(x0, y0, x0 - x , y0 - y, deg);
	
	putpixel(p1.x, p1.y, color);
	putpixel(p2.x, p2.y, color);
	putpixel(p3.x, p3.y, color);
	putpixel(p4.x, p4.y, color);
}

void RotationEllips(int x0, int y0, int rx, int ry, int deg, int color) {
	int x, y;
	int p, px, py;
	x = 0;
	y = ry;
	PlotRotation(x0, y0, x, y, deg, color);
	p = (ry * ry) - (rx * rx * ry) + (rx * rx * 0.25 );
	px = 0;
	py = 2 * rx * rx * y;
	
	while(px < py) {
		x++;
		px = px + (2 * ry * ry);
		if(p >= 0) {
			y = y - 1;
			py = py - (2 * rx * rx);
			p = p + (ry * ry) + px - py;
		} else {
			p = p + (ry * ry) + px;
		}
		PlotRotation(x0, y0, x, y, deg, color);
	}
	
	PlotRotation(x0, y0, x, y, deg, color);
	
	p = (ry * ry) * (x + 0.5) * (x + 0.5) + ((rx * rx) * (y - 1) * (y - 1)) - (rx * rx * ry * ry);
	
	while(y > 0) {
		y--;
		py = py - (2 * (rx * rx));
		if(p <= 0) {
			x++;
			px = px + (2 * ry * ry);
			p = p + (rx * rx) + px - py;
		} else {
			p = p + (rx * rx) - py;
		}
		PlotRotation(x0, y0, x, y, deg, color);
	}
}





