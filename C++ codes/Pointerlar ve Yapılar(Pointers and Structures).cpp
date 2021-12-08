#include<iostream>
using namespace std;

struct Ghetto{
	
	string name;
	string okul;
	int yas;
	
	
};

int main(){
	
	Ghetto ghetto1 = {"Ayhan ","B'17 Eylul ",20};
	
	Ghetto *ptr = &ghetto1;
	
	cout<<ghetto1.name<<endl;
	
	cout<<ptr->okul<<endl;
	
	return 0;
}
