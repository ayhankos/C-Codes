#include<iostream>
using namespace std;
    int toplam;
struct Ghetto{
	
	string name;
	string okul;
	int yas;
};
void toplama(int a,int b){
	toplam=a+b;
}

int main(){
	setlocale (LC_ALL,"Turkish");
	
	Ghetto ghetto1 = {"Ayhan ","B'17 Eyl�l ",20};

	cout<<"�sim : "<< ghetto1.name<<endl<<"Okul : "<<ghetto1.okul<<endl<<"Ya�� : "<<ghetto1.yas<<endl<<endl;
	
	toplama(10,5);
	
	cout<<toplam;
	
	return 0;
}
