#include <iostream>
#include <fstream>
using namespace std;
void xesteElavet(int vesiqe,string ad, string soyad){
	ofstream file("xeste.txt",ios::app);
	file<<ad<<" ";
	file<<soyad<<" ";
	file<<vesiqe<<endl;
	file.close();
	
}
int xesteGoster(int xeste){
	
	ifstream file1("xeste.txt");
	string setr;
	while(file1>>setr){
	cout<<setr<<endl;
}
	file1.close();
}

int main(){
int secim,xeste;
do{
system("CLS");

cout<<"1.xeste elave et"<<endl;
cout<<"2.xesteleri goster"<<endl;
cout<<"3.xeste axtar"<<endl;
cout<<"4.xeste sil"<<endl;
cout<<"5.cixis"<<endl;
cin>>secim;
cout<<endl;

if(secim==1){
	string ad,soyad;
	int vesiqe;
	cout<<"ad: ";
	cin>>ad;
	cout<<"soyad: ";
	cin>>soyad;
	cout<<"vesiqe: ";
	cin>>vesiqe;
	xesteElavet(vesiqe , ad , soyad);
	
}
else if(secim==2){
	xesteGoster(xeste);
}
else if(secim==2){
	xesteGoster(xeste);
}
}
while(secim!=5);
}



