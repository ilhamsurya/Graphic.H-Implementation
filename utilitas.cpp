#include "utilitas.h"

void inisiasi(int panjang, int lebar, string teks){
	initwindow(panjang, lebar, "pertemuan 3");
}
bool sudah;
void menu(){

	if(sudah==false){
		int panjang,lebar;
		cout<<"Masukan panjang layar : ";
		cin>>panjang;
		cout<<"Masukan lebar layar : ";
		cin>>lebar;
		initwindow(panjang, lebar, "PROGRAM DEMO");
	}
	
	int pilih;
	cout<<"PROGRAM DEMO" <<endl;
	cout<<"1. Garis koordinat A->B "<<endl;
	cout<<"2. Warna Garis (16 Warna)"<<endl;
	cout<<"3. Ganti Tipe Garis (dash,titik,titikdash)"<<endl;
	cout<<"4. Ganti Ketebalan Garis "<<endl;
	cout<<"5. Persegi & Persegi Panjang"<<endl;
	cout<<"6. Segitiga siku-siku"<<endl;
	cout<<"7. Jajaran Genjang"<<endl;
	cout<<"8. Trapesium"<<endl;
	cout<<"9. Lingkaran"<<endl;
	cout<<"10. Smiley"<<endl;
	cout<<"11. Logo"<<endl;
	cout<<"12. Soal No 6"<<endl;
	cout<<"13. Soal No 8a"<<endl;
	cout<<"14. Soal No 8b"<<endl;
	cout<<"15. Soal No 8c"<<endl;

	
	//fungsi untuk memilih menu
	cout<<"Masukan pilihan anda : ";
	cin>>pilih;
	pilihan(pilih);
}

void pilihan(int pilih){
	switch(pilih){
		case 2 :{
 			titik A,B;
			int pilihwarna;
			cout<<"Masukan titik x pertama: ";
			cin>>A.x;
			cout<<"Masukan titik y pertama: ";
			cin>>A.y;
			cout<<endl<<"Masukan titik x kedua : ";
			cin>>B.x;
			cout<<"Masukan titik y kedua: ";
			cin>>B.y;
			cout<<"Masukan kode warna(0-15) : ";
			cin>>pilihwarna;
			gariswarna(A,B,pilihwarna);
			system("CLS");
			sudah = true;
			menu();
			break;
		}
		case 1 :{
			titik A,B;
			int pilihan;
			cout<<"Masukan titik A : ";
			cin>>A.x;
			cin>>A.y;
			cout<<"Masukan titik B : ";
			cin>>B.x;
			cin>>B.y;
			garis(A,B);
			cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>pilihan;
				if (pilihan = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
		
		}
		case 3 :{
		    titik A,B;
		    int type;
			cout<<"Masukan titik x pertama: ";
			cin>>A.x;
			cout<<"Masukan titik y pertama: ";
			cin>>A.y;
			cout<<endl<<"Masukan titik x kedua : ";
			cin>>B.x;
			cout<<"Masukan titik y kedua: ";
			cin>>B.y;
			do{
            cout<<"Pilih type (1: Garis Titik-titik, 2: Garis dash, 3: Garis titik-dash): ";
            cin>> type;
            }while (type==0 || type>3);

            garisgaya(A,B,type);
			system("CLS");
			sudah = true;
			menu();
			break;
		}
		case 4 : {
		 	titik A,B;
		    int tebal;
			cout<<"Masukan titik x pertama: ";
			cin>>A.x;
			cout<<"Masukan titik y pertama: ";
			cin>>A.y;
			cout<<endl<<"Masukan titik x kedua : ";
			cin>>B.x;
			cout<<"Masukan titik y kedua: ";
			cin>>B.y;

            cout<<"Masukan ketebalan garis: ";
            cin>> tebal;

            garistebal(A,B,tebal);
            system("CLS");
			sudah = true;
			menu();
            break;
		}

		case 5 :{
			int pilihan;
			titik point1,point2;
			cout<<"Masukan titik kiri dan titik atas : ";
			cin>>point1.x;
			cin>>point1.y;
			cout<<"Masukan titik kanan dan titik bawah : ";
			cin>>point2.x;
			cin>>point2.y;
			cout<<"Silahkan lihat hasil pada windows graphics"<<endl;
			square(point1, point2);
			cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>pilihan;
				if (pilihan = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
		}
		case 6 :{
			titik point;
			int tinggi, alas;
			int pilihan;
			cout<<"Masukan titik x: ";
			cin>>point.x;
			cout<<"Masukan titik y: ";
			cin>>point.y;
			cout<<"Masukan tinggi: ";
			cin>>tinggi;
			cout<<"Masukan alas: ";
			cin>>alas;
			segitiga(point,tinggi,alas);
			cout<<"Silahkan lihat hasil pada windows graphics"<<endl;
			cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>pilihan;
				if (pilihan = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}

		}
		case 7:{
			titik point;
		    int panjang, tinggi, sisi;
			cout << "Masukkan titik x pusat: ";
            cin >> point.x;
            cout<< "Masukkan titik Y pusat: ";
            cin >> point.y;
            cout<< "Masukkan sisi jajaran genjang: ";
            cin >> panjang;
            cout<< "Masukkan tinggi jajaran genjang: ";
            cin >> tinggi;
            cout<< "Masukkan sisi miring: ";
            cin >> sisi;
            jajarGenjang(point,panjang,tinggi,sisi);
			break;
		}
		case 8 : {
			titik point;
			int tinggi, bawah, atas;
			int pilihan;
			cout<<"Masukan titik x: ";
			cin>>point.x;
			cout<<"Masukan titik y : ";
			cin>>point.y;
			cout<<"Masukan tinggi: ";
			cin>>tinggi;
			cout<<"Masukan alas atas: ";
			cin>>atas;
			cout<<"Masukan alas bawah: ";
			cin>>bawah;	
			cout<<endl<<"Silahkan lihat hasil pada windosw graphics"<<endl;
			trapesium(point, tinggi, bawah, atas);
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>pilihan;
				if (pilihan = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
	
		}
		
		case 9: {
			int xc,yc,r;
			cout<<"Masukan titik x: ";
			cin>>xc>>yc;
			cout<<"Masukan titik y : ";
			cin>>r;
			// membuat lingkaran dengan titik pusat x,y dan radius
			circlemidpoint(xc,yc,r);
			getch();
			closegraph();
		
		}
		
		case 10: {
			titik A,B,C,D;
			A.x = 200;
			A.y = 240;
			B.x = 200;
			B.y = 170;
			C.x = 200;
			C.y = 170;
		    int tebal;
		    // Membuat lingkaran utama
			circlemidpoint(200,200,150);
			// Membuat mata kiri 
			circlemidpoint(140,170,40);
			// Membuat mata kanan 
			circlemidpoint(260,170,40);
			// Membuat hidung 
			garistebal(A,B,3);
			// Membuat mulut 
			mulut(C,150);
			getch();
			closegraph();
		
		}
		
		case 11: {
			titik A,B,C,D,E,F;
			A.x = 250;
			A.y = 210;
			B.x = 250;
			B.y = 300;
			C.x = 250;
			C.y = 300;
			D.x = 280;
			D.y = 300;
			E.x = 280;
			E.y = 250;
			F.x = 330;
			F.y = 250;
			
		   // Titik tengah dan radius lingkaran
		    int x_circle = 250; 
		    int y_circle = 250; 
		    int radius=100; 
		    // Mengatur warna border
		    int border_color = WHITE; 
		    // Menentukan pola dan Mengatur warna background lingkaran utama
		    setfillstyle(SOLID_FILL,RED); 
		    // Memanggil lingkaran 
		    circle(x_circle,y_circle,radius); 
		    // Mengisi warna
		    // (x, y) dan border color
		    floodfill(x_circle,y_circle,border_color); 
			setfillstyle(SOLID_FILL,WHITE); 
			//Membuat lingkaran kecil putih LG
			circle(210,225,15); 
			floodfill(210,225,border_color); 
			//Membuat Garis tengah LG
			garistebal(A,B,3);
			garistebal(C,D,3);
			garistebal(E,F,2);
			// location of the arc 
		    int j = 245; 
		    int k = 250; 
		  
		    // starting angle and ending angle 
		    // of the arc 
		    int start_angle = 90; 
		    int end_angle = 360; 
		  
		    // radius of the arc 
		    int arc_radius = 85; 
		  
		    // initgraph initializes the graphics system 
		    // by loading a graphics driver from disk 
	
		  
		    // arc function 
		    arc(j, k, start_angle, end_angle, arc_radius); 
		  
			break;
		}
	
		case 12: {
			int x1=1,x2=639,y1=1,y2=479;
			int pilihan;
			makeline(x1,y1,x2,y1);
		    makeline(x1,y2,x2,y2);
		    makeline(x2,y1,x2,y2);
		    makeline(x1,y1,x1,y2);
		    makeline(x1, y2/2,x2, y2/2 );
		    makeline(x2/2,y1,x2/2,y2);
		    printf("Koordinat sudut kiri atas : (%d,%d)\n",x1,y1);
			printf("Koordinat sudut kiri bawah : (%d,%d)\n",x1,y2);
			printf("Koordinat sudut kanan atas : (%d,%d)\n",x2,y1);
			printf("Koordinat sudut kanan bawah : (%d,%d)\n",x2,y2);
			outtextxy(250,100," : y=x^2");
			graphno6(x2/2,y2/2);
			cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>pilihan;
				if (pilihan = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
		}
		case 13: {
			int x1=1,x2=639,y1=1,y2=479;
			int pilihan;
			makeline(x1,y1,x2,y1);
		    makeline(x1,y2,x2,y2);
		    makeline(x2,y1,x2,y2);
		    makeline(x1,y1,x1,y2);
		    makeline(x1, y2/2,x2, y2/2 );
		    makeline(x2/2,y1,x2/2,y2);
		    printf("Koordinat sudut kiri atas : (%d,%d)\n",x1,y1);
			printf("Koordinat sudut kiri bawah : (%d,%d)\n",x1,y2);
			printf("Koordinat sudut kanan atas : (%d,%d)\n",x2,y1);
			printf("Koordinat sudut kanan bawah : (%d,%d)\n",x2,y2);
			outtextxy(250,150," :y=x^3-3x-1");
			graphno8a(x2/2, y2/2);
			cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>pilihan;
				if (pilihan = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
		}
		case 14: {
			int x1=1,x2=639,y1=1,y2=479;
			int pilihan;
			makeline(x1,y1,x2,y1);
		    makeline(x1,y2,x2,y2);
		    makeline(x2,y1,x2,y2);
		    makeline(x1,y1,x1,y2);
		    makeline(x1, y2/2,x2, y2/2 );
		    makeline(x2/2,y1,x2/2,y2);
		    printf("Koordinat sudut kiri atas : (%d,%d)\n",x1,y1);
			printf("Koordinat sudut kiri bawah : (%d,%d)\n",x1,y2);
			printf("Koordinat sudut kanan atas : (%d,%d)\n",x2,y1);
			printf("Koordinat sudut kanan bawah : (%d,%d)\n",x2,y2);
			outtextxy(250,200," :y=sin(x)");
		 	graphno8b(x2/2,y2/2);
		 	cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>pilihan;
				if (pilihan = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
		}
		case 15: {
			int x1=1,x2=639,y1=1,y2=479;
			int pilihan;
			makeline(x1,y1,x2,y1);
		    makeline(x1,y2,x2,y2);
		    makeline(x2,y1,x2,y2);
		    makeline(x1,y1,x1,y2);
		    makeline(x1, y2/2,x2, y2/2 );
		    makeline(x2/2,y1,x2/2,y2);
		    printf("Koordinat sudut kiri atas : (%d,%d)\n",x1,y1);
			printf("Koordinat sudut kiri bawah : (%d,%d)\n",x1,y2);
			printf("Koordinat sudut kanan atas : (%d,%d)\n",x2,y1);
			printf("Koordinat sudut kanan bawah : (%d,%d)\n",x2,y2);
			outtextxy(250,250," :y=sin(x)");
		 	graphno8c(x2/2,y2/2);
		 	cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>pilihan;
				if (pilihan = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
		}
	
	}
}
