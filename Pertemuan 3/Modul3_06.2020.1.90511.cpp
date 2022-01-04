#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main(){
	int jumlah90511;
	string namaDepan90511[100];
	string namaBelakang90511[100];
	int nilaiTugas90511[100];
	int nilaiUTS90511[100];
	int nilaiUAS90511[100];
	int nilaiRatarata90511[100];
	cout<<"Masukkan jumlah mahasiswa : ";
	cin>>jumlah90511;
	int i=0;
	do{
	cout<<"========================================================="<<endl;
	cout<<"Mahasiswa ke: "<<i+1<<endl;
	cout<<"========================================================="<<endl;
	cout<<"Nama Depan: ";
	cin>>namaDepan90511[i];
	cout<<"Nama Belakang: ";
	cin>>namaBelakang90511[i];
	cout<<"Nilai Tugas: ";
	cin>>nilaiTugas90511[i];
	cout<<"Nilai UTS: ";
	cin>>nilaiUTS90511[i];
	cout<<"Nilai UAS: ";
	cin>>nilaiUAS90511[i];
	nilaiRatarata90511[i]=(nilaiTugas90511[i]+nilaiUTS90511[i]+nilaiUAS90511[i])/3;
	i++;
}while(i<jumlah90511);
	
	cout<<"==================================================================================================="<<endl;
	cout<<"			DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"==================================================================================================="<<endl;
	cout<<"No. \tNAMA MAHASISWA\tNILAI TUGAS\tNILAI UTS\tNILAI UAS\trata-rata\tGRADE AKHIR"<<endl;
	cout<<"==================================================================================================="<<endl;
	for(int i=0;i<jumlah90511;i++) {
		cout<<i+1<<"\t"<<namaDepan90511[i]<<" "<<namaBelakang90511[i]<<"\t"<<nilaiTugas90511[i]<<"\t""\t"<<nilaiUTS90511[i]<<"\t""\t"<<nilaiUAS90511[i]<<"\t""\t"<<nilaiRatarata90511[i]<<"\t""\t";
		if(nilaiRatarata90511[i]>90){
			cout<<"A"<<endl;
		} else if (nilaiRatarata90511[i]<=90){
			cout<<"B+"<<endl;
		} else if(nilaiRatarata90511[i]<=80){
			cout<<"B"<<endl;
		} else {
			cout<<"C"<<endl;
		}
	}
	getch();
}
