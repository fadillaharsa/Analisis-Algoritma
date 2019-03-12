/*
Nama Program       : Binary Search / Pencarian Biner
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 12 Maret 2019

Telah diujicoba menggunakan Dev C++
********************************************************************************************
*/

#include<iostream>
using namespace std;

void PencarianBiner(int x[],int tanya,int n){
	int i=0, j=n-1, tengah;
	
	bool ketemu=false;
	while((!ketemu) && i <= j){
		tengah = (i+j)/2;
		
		if(x[tengah]==tanya){
			ketemu=true;
		}
		
		else{
			if(x[tengah]<tanya){
				i=tengah+1;
			}else{
				j=tengah-1;
			}				
		} 
	}
	int lokasi;
	if(ketemu){
		lokasi = i+1;
	} else{
		lokasi = 0;
	}
	cout<<"Elemen yang dicari berada di indeks: "<< lokasi;
}

main(){
	int n, tanya;
	cout<<"Masukkan banyak elemen array: ";
	cin>>n;
	
	int x[n];
	cout<<"Masukan elemen array berupa angka:"<<endl;
	for(int i=0; i<n; i++){
		cout<<"elemen["<<i+1<<"] = ";
		cin>>x[i];
	}
	
	cout<<endl<<"Masukan elemen array yang ingin dicari: ";
	cin>>tanya;
	
	PencarianBiner(x, tanya, n);
}
