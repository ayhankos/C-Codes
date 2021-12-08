#include<iostream>

using namespace std;

int main(){
	
	cout<<"1 den girilen N sayisina kadar olan sayilar toplanacak ."<<endl;
	
	int i,n;
	int toplam=0;
	cout<<"N sayisini giriniz :";
	cin>>n;
	
	for( i=1 ; i<=n ; i++){
		toplam+=i;
	}
	cout<<"Toplamin sonucu :"<<toplam;
	
}
