#include<iostream>
using namespace std;

//Private degiskenlere set ve get metodlari ile ulasma

class kimlik{
	private:
		string name;
		int age;
		string placeOfBirth;
		
	public:
		void setName(string isim){
			name=isim;
		}
		string getName(){
			return name;
		}
		void setAge(int yas){
			age=yas;
		}
		int getAge(){
			return age;
		}
		void setPlaceOfBirth(string dogumYeri){
			placeOfBirth=dogumYeri;
		}
		string getPlaceOfBirth(){
			return placeOfBirth;
		}
		
};



int main(){
	
	kimlik kimlik1;
	kimlik* kimlik2= new kimlik();   // Pointer ile olusturulan nesne
	kimlik1.setName("Ayhan");
	cout<<"Kimlikteki isim : "<<kimlik1.getName()<<endl;
	kimlik1.setAge(20);
	cout<<"Kimlikteki yas : "<<kimlik1.getAge()<<endl;
	kimlik2->setPlaceOfBirth("Izmit");    // Pointer ile set metodu
	cout<<"Kimlikteki dogum yeri : "<<kimlik2->getPlaceOfBirth();  // Pointer ile get metodu
	
	
	
	
}
