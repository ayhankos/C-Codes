#include<iostream>
using namespace std;

int main(){
	 
	const int a[] = {2,4,6,8,10}; //const olarak tanimlanan degerler sonradan degistirilemez.
	
	for(int i= 0 ; i < 5 ; i++){
		cout<<a[i]<<endl;
	}
	a[2]=20;
	return 0;
}
