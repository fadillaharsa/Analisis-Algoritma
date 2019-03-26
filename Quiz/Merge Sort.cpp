/*
Nama Program       : Merge Sort
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 20 Maret 2019

Telah diujicoba menggunakan Dev C++
********************************************************************************************
*/

#include <iostream> 
using namespace std;

void tukar(int a, int b){
	int t;
	int data[b];
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}

void merge_sort(int data[],int n){
	int banding=n/2;	
	
	//Maaf, pusing kang teh :(
	
}

main(){
	int n, tanya;
	cout<<"Masukkan banyak elemen array: ";
	cin>>n;
	
	int data[n];
	cout<<"Masukan elemen array berupa angka:"<<endl;
	for(int i=0; i<n; i++){
		cout<<"elemen["<<i+1<<"] = ";
		cin>>data[i];
	}
	
	merge_sort(data,n);
	
	cout<<"Data Setelah di Sort : ";
	for(int i=0; i<n; i++){
		cout<<" "<<data[i];
	}
	
	cout<<"\nSorting dengan Merge Sort selesai :)";
}
