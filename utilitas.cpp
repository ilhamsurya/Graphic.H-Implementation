#include "utilitas.h"

void inisiasi(int panjang, int lebar, string teks){
	initwindow(panjang, lebar, "pertemuan 3");
}
bool sudah;

void garisWarna(){
 		titik A,B;
		int pilihwarna;
		cout<<"Masukan titik x1: ";
		cin>>A.x;
		cout<<"Masukan titik y1: ";
		cin>>A.y;
		cout<<endl<<"Masukan titik x2 : ";
		cin>>B.x;
		cout<<"Masukan titik y2: ";
		cin>>B.y;
		cout<<"Masukan kode warna : ";
		cin>>pilihwarna;
		gariswarna(A,B,pilihwarna);
		system("CLS");
		sudah = true;
		menu();
	
}


void garisGaya(){
		titik A,B;
	    int type;
		cout<<"Masukan titik x1: ";
		cin>>A.x;
		cout<<"Masukan titik y1: ";
		cin>>A.y;
		cout<<endl<<"Masukan titik x2 : ";
		cin>>B.x;
		cout<<"Masukan titik y2: ";
		cin>>B.y;
		do{
            cout<<"Pilih gaya (1: Garis Titik-titik, 2: Garis dash, 3: Garis titik-dash): ";
            cin>> type;
        }while (type==0 || type>3);

        garisgaya(A,B,type);
	
}

void garisTebal(){
		titik A,B;
		int tebal;
		cout<<"Masukan titik x1: ";
		cin>>A.x;
		cout<<"Masukan titik y1: ";
		cin>>A.y;
		cout<<endl<<"Masukan titik x2 : ";
		cin>>B.x;
		cout<<"Masukan titik y2: ";
		cin>>B.y;
        cout<<"Masukan ketebalan garis: ";
        cin>> tebal;
        garistebal(A,B,tebal);
        system("CLS");

}

void pertemuan2No6(){
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
		graphno6(x2/2,y2/2);

}

void pertemuan2No8A(){
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
			graphno8a(x2/2, y2/2);

}

void pertemuan2No8B(){
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
		 	graphno8b(x2/2,y2/2);

}

void pertemuan2No8C(){
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
		 	graphno8c(x2/2,y2/2);

}

void bentuk_segiempat(){
	titik point1,point2;
			cout<<"Masukan titik x1 dan titik y1 : ";
			cin>>point1.x;
			cin>>point1.y;
			cout<<"Masukan titik x2 dan titik y2 : ";
			cin>>point2.x;
			cin>>point2.y;
			cout<<"Silahkan lihat hasil pada windows graphics"<<endl;
			square(point1, point2);

}

	

void bentuk_segitigaSiku(){
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

}

void bentuk_segitigaSisi(){
		titik A,B;
		    int panjang;
		    cout<<"Masukan titik pusat x:";
		    cin>>A.x;
		    cout<<"Masukan titik pusat y:";
		    cin>>A.y;

		    cout<<endl<<"Masukan panjang sisi:";
		    cin>>panjang;
		    B.x=A.x+panjang;
		    B.y=A.y;
		    segitigasamasisi(A,B);

}

void bentuk_jajaranGenjang(){
	titik point;
			int pilihan;
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

}

void bentuk_trapesium(){
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
			cout<<endl<<"Silahkan lihat hasil pada windows graphics"<<endl;
			trapesium(point, tinggi, bawah, atas);

}

void bentuk_lingkaran(){
			int xc,yc,r,color;
			cout<<"Masukan titik x,y: ";
			cin>>xc>>yc;
			cout<<"Masukan radius: ";
			cin>>r;
			cout<<"Masukan warna : ";
			cin>>color;
			// membuat lingkaran dengan titik pusat x,y dan radius
			Lingkaran(xc,yc,r,color);

}

void bentuk_elips(){

		int xc,yc,rx,ry;
		cout<<"Masukan koordinat elips:";
		cin>>xc>>yc;
		cout<<"Masukan radius elips(rx):";
		cin>>rx;
		cout<<"Masukan radius elips(ry):";
		cin>>ry;
		ellipse_midpoint(xc,yc,rx,ry);

}

void bentuk_belahKetupat(){
		titik A,B;
		int panjang;
		cout<<"Masukan titik pusat x:";
		cin>>A.x;
		cout<<"Masukan titik pusat y:";
		cin>>A.y;
		cout<<endl<<"Masukan panjang sisi:";
		cin>>panjang;
		B.x=A.x+panjang;
		B.y=A.y;
	   	belahketupat(A,B);

}

void bentuk_layangLayang(){
	titik A,B;
		    int panjang;
		    cout<<"Masukan titik pusat x:";
		    cin>>A.x;
		    cout<<"Masukan titik pusat y:";
		    cin>>A.y;
		    cout<<endl<<"Masukan panjang sisi:";
		    cin>>panjang;
		    B.x=A.x+panjang;
		    B.y=A.y;
	   	    layanglayang(A,B);

}



void bentuk_smiley(){
	titik A,B,C,D;
			A.x = 200;
			A.y = 240;
			B.x = 200;
			B.y = 170;
			C.x = 200;
			C.y = 170;
		    int tebal;
		    // Membuat lingkaran utama
			Lingkaran(200,200,150,rand()%15);
	
			// Membuat mata kiri 
			Lingkaran(260,170,40,rand()%15);
			// Membuat mata kanan 
		
			// Membuat hidung 
			garistebal(A,B,3);
			// Membuat mulut 
			mulut(C,150);
			getch();
			closegraph();

}

void bentuk_logo(){
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
		  

}

void pattern1 (){
    int loop1 = 50, loop2 = 5, loop3=50, loop4 = 40, loop5 = 500, loop6=10, loop7, loop8=200, loop9 = 350;
    int count = 0;
    int jumlah = 0;
	while (jumlah < 1){
                for ( int angle = 0; angle < 120; angle+=5 ) {
            	circle(50,50,50);
				setcolor(rand());
				delay(20);
                RotationEllips(50, 50, 10, loop1, angle,rand()%15);
                RotationEllips(50, 50, 10, loop1, angle+60, rand()%15);
                RotationEllips(50, 50, 10, loop1, angle-60, rand()%15);
                swapbuffers();
                cleardevice();
				loop1--;
				loop2++;
                count++;
        		}
        		if(count > 5 ){
        			for ( int angle = 0; angle < 120; angle+=5 ) {
						circle(200,50,50);
						setcolor(rand());
						delay(50);
						RotationEllips(200, 25, loop2, 10, angle, rand()%15);
						RotationEllips(170, 55, loop2, 10, angle, rand()%15);
						RotationEllips(230, 55, loop2, 10, angle, rand()%15);
						RotationEllips(200, 85, loop2, 10, angle, rand()%15);
						RotationEllips(200, 55, loop2, 20, angle+90, rand()%15);
						RotationEllips(200, 55, loop2, 20, angle-90, rand()%15);
		                swapbuffers();
		                cleardevice();
		                loop2--;
		                loop3++;
				  }
				}
				if(count > 20){
						for ( int angle = 0; angle < 120; angle+=5 ) {
						circle(350,50,50);
						setcolor(rand());
						delay(50);
						segitigaRotate(350, 15, 360, loop3, 340, loop3, angle,rand()%15);
						segitigaRotate(350, 15, 360, loop3, 340, loop3, angle+120,rand()%15);
						segitigaRotate(350, 15, 360, loop3, 340, loop3, angle-120,rand()%15);
		                swapbuffers();
		                cleardevice();
		                loop3--;
		                loop4++;
				  }
				}
				if(count > 20){
						for ( int angle = 0; angle < 120; angle+=5 ) {
						circle(500,50,50);
						setcolor(rand());
						delay(50);
						segitigaRotate(500, 15, 520, 40, 480, 40, 0,rand()%15);
						segitigaRotate(480, 40, 500, 40+25, 460, 40+25, 0,rand()%15);
						segitigaRotate(520, 40, 540, 40+25, 500, 40+25, 0,rand()%15);
						
		                swapbuffers();
		                cleardevice();
		                loop4--;
		                loop6++;
				  }
				}
				if(count > 20){
						for ( int angle = 0; angle < 120; angle+=5 ) {
						circle(125,200,50);
						setcolor(rand());
						delay(50);
						RotationEllips(125, 180, 10, 15, angle+90, rand()%15);
						RotationEllips(100, 190, 10, 15, angle+90, rand()%15);
						RotationEllips(150, 190, 10, 15, angle+90, rand()%15);
						RotationEllips(125, 200, 10, 15, angle+90, rand()%15);
						RotationEllips(100, 210, 10, 15, angle+90, rand()%15);
						RotationEllips(150, 210, 10, 15, angle+90, rand()%15);
						RotationEllips(125, 220, 10, 15, angle+90, rand()%15);
		                swapbuffers();
		                cleardevice();
		                loop6--;
		                loop7++;
				  }
				}
				if(count > 20){
						for ( int angle = 0; angle < 120; angle+=5 ) {
						circle(275,200,50);
						setcolor(rand());
						delay(50);
						RotationEllips(275, 200, 10, 50, angle, rand()%15);
						RotationEllips(275, 200, 10, 50, angle+60, rand()%15);
						RotationEllips(275, 200, 10, 50, angle-60, rand()%15);
						RotationEllips(275, 200, 10, 50, angle+90, rand()%15);
						RotationEllips(275, 200, 10, 50, angle-90, rand()%15);
						RotationEllips(275, 200, 10, 50, angle+90, rand()%15);
						RotationEllips(275, 200, 10, 50, angle-180, rand()%15);
		                swapbuffers();
		                cleardevice();
		                loop7--;
		                loop8++;
				  }
				}
				if(count > 20){
						for ( int angle = 0; angle < 120; angle+=5 ) {
						circle(425,200,50);
						setcolor(rand());
						delay(50);
						segitigaRotate(425, 185, 475, loop8, 400, loop8, angle,rand()%15);
						segitigaRotate(425, 185, 475, loop8, 400, loop8, angle+90,rand()%15);
						segitigaRotate(425, 185, 475, loop8, 400, loop8, angle+180,rand()%15);
						segitigaRotate(425, 185, 475, loop8, 400, loop8, angle+270,rand()%15);
		                swapbuffers();
		                cleardevice();
		                loop8--;
		                loop9++;
		         
				  }
				}
				if(count > 20){
						for ( int angle = 0; angle < 120; angle+=5 ) {
						circle(50,350,50);
						setcolor(rand());
						delay(50);
						segitigaRotate(50, 325, 100, loop9, 25, loop9, angle,rand()%15);
						segitigaRotate(50, 325, 100, loop9, 25, loop9, angle+90,rand()%15);
						segitigaRotate(50, 325, 100, loop9, 25, loop9, angle+180,rand()%15);
						segitigaRotate(50, 325, 100, loop9, 25, loop9, angle+270,rand()%15);
		                swapbuffers();
		                cleardevice();
						loop9--;
						loop1++;
				  }
				}
				if(count > 20){
						for ( int angle = 0; angle < 120; angle+=5 ) {
						circle(200,350,50);
						setcolor(rand());
						delay(50);

		                swapbuffers();
		                cleardevice();
				
				  }
				}
				if(count > 20){
						for ( int angle = 0; angle < 120; angle+=5 ) {
						circle(350,350,50);
						setcolor(rand());
						delay(50);

		                swapbuffers();
		                cleardevice();
				
				  }
				}
				if(count > 20){
						for ( int angle = 0; angle < 120; angle+=5 ) {
						circle(500,350,50);
						setcolor(rand());
						delay(50);
		                swapbuffers();
		                cleardevice();
				
				  }
				}
			  jumlah++;
    }
    
}

void pattern2(){
	int loop1 = 200, loop2= 200, loop3 = 260, loop4 = 390, loop5 = 110;
    while (loop1 > 100){
    
    	segitigaRotate(250, 195, loop1+100, 245, loop2, 245, 0,7);
		segitigaRotate(175, 325, loop1+25, 375, loop2-75, 375, 0,7);
		segitigaRotate(325, 325, loop1+175, 375, loop2+75, 375, 0,7);    
		swapbuffers();

		loop1--;
		loop2++;
    }
    swapbuffers();
	cleardevice();

    while (loop3 > 180){
    	segitigaRotate(250, 100, loop3+10, 130, loop3-30, 130, 0,7);
		segitigaRotate(250, 100, loop3+10, 130, loop3-30, 130, 120,7);
		segitigaRotate(250, 100, loop3+10, 130, loop3-30, 130, -120,7);    
        swapbuffers();
        loop3--;
    }
    swapbuffers();
	cleardevice();
    while (loop4 > 280){
    	segitigaRotate(380, 400, loop4+10, 430, loop4-30, 430, 0,8);
		segitigaRotate(380, 400, loop4+10, 430, loop4-30, 430, 120,8);
		segitigaRotate(380, 400, loop4+10, 430, loop4-30, 430, -120,8);    
        swapbuffers();
        loop4--;

    }
    swapbuffers();
    cleardevice();
    
        while (loop5 > 60){
    	segitigaRotate(100, 400, loop5+10, 430, loop5-30, 430, 0,8);
		segitigaRotate(100, 400, loop5+10, 430, loop5-30, 430, 120,8);
		segitigaRotate(100, 400, loop5+10, 430, loop5-30, 430, -120,8);    
        swapbuffers();
        loop5--;

    }
    swapbuffers();
    cleardevice();
  
}

void animasiUTS(){


	for(;;){
		
		int count = 0;
		while (count < 50){
			cleardevice();
			pattern1();
			pattern2();
		}
}
}

void animasiTesting(){

}

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
    cout<<"PROGRAM CG : Muhammad Ilham Surya\n";
    cout<<"=======MENU=======\n";
    cout<<"1. Garis\n";
    cout<<"2. Shape\n";
    cout<<"3. Animasi\n";
    cout<<"Masukan Pilihan : ";
	cin>>pilih;
	pilihan(pilih);
}

void pilihan(int pilih){
	int kembali;
	if(pilih == 1){
		system("cls");
        int num;
        cout<<"======MENU STROKE======"<<endl;
        cout<<"1. Garis Warna"<<endl;
     	cout<<"2. Garis Gaya"<<endl;
        cout<<"3. Garis Tebal"<<endl;
        cout<<"4. Pertemuan 2 No 1"<<endl;
        cout<<"5. Pertemuan 2 No 2"<<endl;
     	cout<<"6. Pertemuan 2 No 3"<<endl;
        cout<<"7. Pertemuan 2 No 4"<<endl;
        cout<<"Masukan nomor pilihan : ";
        cin>>num;
        switch(num){
        	case 1:{
			garisWarna();
			sudah = true;
			menu();
			cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
				if (kembali = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
			}
			case 2:{
			garisGaya();
			cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
				if (kembali = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
			}
			case 3:{
			garisTebal();
			cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
				if (kembali = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
			}
			case 4:{
			pertemuan2No6();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
				if (kembali = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
			}
			case 5:{
			pertemuan2No8A();
			cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
				if (kembali = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
			}
			case 6:{
			pertemuan2No8B();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
				if (kembali = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
			}
			case 7:{
			pertemuan2No8C();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
				if (kembali = 1){
					system("CLS");
					sudah = true;
					menu();
				} else {
					break;
				}
			}
		
		}
	}
	else if (pilih == 2) {
		system("cls");
        int num;

        cout<<"======MENU SHAPE======"<<endl;
        cout<<"1.  Persegi & Persegi Panjang"<<endl;
     	cout<<"2.  Segitiga siku-siku"<<endl;
     	cout<<"3.  Segitiga sama sisi"<<endl;
        cout<<"4.  Jajaran Genjang"<<endl;
        cout<<"5.  Trapesium"<<endl;
        cout<<"6.  Layang Layang"<<endl;
        cout<<"7.  Belah Ketupat"<<endl;
        cout<<"8.  Lingkaran"<<endl;
        cout<<"9.  Elips"<<endl;
     	cout<<"10. Smiley"<<endl;
        cout<<"11. Logo"<<endl;
        cout<<"12. Bunga 4 arah"<<endl;
    	cout<<"13. Bunga 8 arah"<<endl;
        cout<<"Masukan nomor pilihan : ";
        cin>>num;
        switch(num){
        	case 1:{
        		bentuk_segiempat();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
			case 2:{
				bentuk_segitigaSiku();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
			case 3:{
				bentuk_segitigaSisi();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
			case 4:{
				bentuk_jajaranGenjang();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
			case 5:{
				bentuk_trapesium();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
			case 6:{
				bentuk_layangLayang();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
			case 7:{
				bentuk_belahKetupat();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
			case 8:{
				bentuk_lingkaran();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
			case 9:{
				bentuk_elips();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
			case 10:{
				bentuk_smiley();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
			case 11:{
				bentuk_logo();
				cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
        }
	}
	
	else if (pilih == 3){
		system("cls");
        int num;
        cout<<"======MENU ANIMASI======"<<endl;
        cout<<"1. Animasi UTS"<<endl;

        cout<<"Masukan nomor pilihan : ";
        cin>>num;
        switch(num){
        	case 1: {
        	animasiUTS();	
			cout<<"Kembali Ke Awal? ";
				cout<<"1. Iya ";
				cout<<"2. Tidak ";
				cin>>kembali;
					if (kembali = 1){
						system("CLS");
						sudah = true;
						menu();
					} else {
						break;
					}
			}
		}
	} 

}
 

