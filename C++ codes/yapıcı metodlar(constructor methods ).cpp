#include<iostream>
#include<iomanip>
using namespace std;

class game{
	private:
		string name;
		int releaseDate;
		int rating;
	public:
		game(string name,int releaseDateg,int rating){
		
			this->name = name;
			this->releaseDate = releaseDate;
			this->rating=rating;
			
		}
		void showInfos(){
			cout<<"Oyun adi : "<<name<<endl;
			cout<<"Yayin yili : "<<releaseDate<<endl;
			cout<<"Oyun reytingi : "<<rating<<endl;
			cout<<setfill('-')<<setw(25)<<"\n";			
		}
	
};

int main(){
	
	game mafia("Mafia",2002,88);
	mafia.showInfos();
	game mafia2("Mafia 2",2012,77);
	mafia2.showInfos();
	game mafia3("Mafia 3",2016,62);
	mafia3.showInfos();
	
}
