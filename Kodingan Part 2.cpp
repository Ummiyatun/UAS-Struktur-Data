#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char kota_A,kota_B,kota_C,kota_D,kota_E;
    int jumlah,panjang,hasil1,hasil2,hasil3,hasil4,hasil5,hasil6,hasil7;
    /*input jumlah kota dalam kerajaan Britan*/
    cout<<"Jumlah kota yang berada dalam kerajaan Britan : "<<endl;
    cin>>jumlah;
    /*input nama kota*/
    cout<<"Kota 1 : ";
    cin>>kota_A;
    cout<<"Kota 2 : ";
    cin>>kota_B;
    cout<<"Kota 3 : ";
    cin>>kota_C;
    cout<<"Kota 4 : ";
    cin>>kota_D;
	cout<<"Kota 5 : ";
	cin>>kota_E;
	cout<<endl;
	/*deklarasi graph*/                                        
	/*menampilkan setiap graph yang terjadi*/
	cout<<"Tepinya adalah : "<<endl<<endl;
    cout<<kota_A<<kota_B<<",";
    cout<<kota_A<<kota_D<<",";
    cout<<kota_A<<kota_E<<",";
    cout<<kota_B<<kota_C<<",";
    cout<<kota_C<<kota_E<<",";
    cout<<kota_C<<kota_D<<",";
    cout<<kota_D<<kota_E<<endl<<endl;
	/*deklarasi edge*/
	/*menampilkan panjang jalan yang menghubungkan vertex*/
	cout<<"Panjang jalan antar kota : "<<endl;
	cout<<"panjang "<<kota_A<<" ke "<<kota_B<<" : ";cin>>hasil1;
	cout<<"panjang "<<kota_A<<" ke "<<kota_D<<" : ";cin>>hasil2;
	cout<<"panjang "<<kota_A<<" ke "<<kota_E<<" : ";cin>>hasil3;
	cout<<"panjang "<<kota_B<<" ke "<<kota_C<<" : ";cin>>hasil4;
	cout<<"panjang "<<kota_C<<" ke "<<kota_E<<" : ";cin>>hasil5;
	cout<<"panjang "<<kota_C<<" ke "<<kota_D<<" : ";cin>>hasil6;
	cout<<"panjang "<<kota_D<<" ke "<<kota_E<<" : ";cin>>hasil7;
	cout<<endl;
	/*deklarasi adjacency*/
	/*menampilkan jalan yang menghubungkan kedua simpul (x,y,z)*/
	cout<<"Semua jalan dan panjangnya yang ada di kerajaan Britan : "<<endl;
	cout<<"("<<kota_A<<","<<kota_B<<","<<hasil1<<")";
	cout<<"("<<kota_A<<","<<kota_D<<","<<hasil2<<")";
	cout<<"("<<kota_A<<","<<kota_E<<","<<hasil3<<")";
	cout<<"("<<kota_B<<","<<kota_C<<","<<hasil4<<")";
	cout<<"("<<kota_C<<","<<kota_E<<","<<hasil5<<")";
	cout<<"("<<kota_C<<","<<kota_D<<","<<hasil6<<")";
	cout<<"("<<kota_D<<","<<kota_E<<","<<hasil7<<")";
	cout<<endl<<endl;
	/*menampilkan hasil*/
	/*menampilkan tempat dimana pedagang berada*/
	cout<<"Pedagang sekarang berada di kota : "<<endl<<endl;
	cout<<kota_A;
	cout<<endl<<endl;
	/*menampilkan kota yang diserang naga*/
	cout<<"Kota yang diserang naga adalah : "<<endl<<endl;
	cout<<kota_C; 
	cout<<endl<<endl;
	/*menampilkan kota yang terdapat kastil*/
	cout<<"Kota yang memiliki kastil adalah : "<<endl<<endl;
	cout<<kota_E;
	cout<<endl<<endl;
	/*menampilkan jalur tercepat*/
	cout<<"Jalur yang paling cepat ditempuh oleh pedagang untuk ke kastil adalah : "<<endl<<endl;
	cout<<kota_A<<"->"<<kota_D<<"->"<<kota_E<<endl;
	cout<<endl<<endl;
	/*menampilkan total edge yang harus ditempuh*/
	cout<<"dengan jarak : "<<endl<<endl;
	cout<<hasil2+hasil7<<endl<<endl;
	
	getch();
	
	return 0;
}
