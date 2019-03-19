/*
Nama Program       : Nilai Maksimum
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 6 Maret 2019

Telah diujicoba menggunakan Dev C++
********************************************************************************************
*/

#include <iostream>
using namespace std;

main(){
	//- - - - - - - - - DELKARASI
	int n, maks, i, x[99];
	
	//- - - - - - - - - INPUT
	cout<<"------------------------------------------"<<endl;
	cout<<"- - - Menghitung Nilai Data Terbesar - - -"<<endl;
	cout<<"------------------------------------------"<<endl;	
	
	for(;;){
		cout<<"1. Masukkan jumlah data: ";
		cin>>n;
		if(n<2){
			cout<<"Maaf, data minimal 2."<<endl;
			continue;
		}
		break;
	}
	
	cout<<"2. Masukkan data:"<<endl;
	for (i=0; i<n; i++){
		cout<<"ke-"<<i+1<<": ";
		cin>>x[i];
	}
	
	//- - - - - - - - - ALGORITMA UTAMA
	i=1;
	maks=x[0];
	do {
		if(x[i]>maks){
			maks=x[i];
		}
		i=i+1;
	}
	while(i<n); 
	
	cout<<"Nilai terbesar dari data input adalah: "<<maks<<endl;
}
