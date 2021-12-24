#include<iostream>
using namespace std;

struct Fenerbahce{
	
	string name;
	int age;
	int goal,assist;
	string position;
	
};
void showInfos(Fenerbahce f1){
	cout<<"\n";
	cout<<"Footballer name is :"<<f1.name<<endl;
	cout<<"Footballer age is :"<<f1.age<<endl;
	cout<<"Footballer number of goals and assists: "<<f1.goal<<" - "<<f1.assist<<endl;
	cout<<"Footballer position is : "<<f1.position<<endl;
}


int main(){
	
	Fenerbahce f1;
	
	cout<<"\t Footballer information  "<<endl;
	cout<<"Enter Footballer name : ";
	cin>> f1.name;
	cout<<"Enter footballer age : ";
	cin>> f1.age;
	cout<<"Enter footballer goals : ";
	cin>>f1.goal;
	cout<<"Enter footballer assists : ";
	cin>>f1.assist;
	cout<<"Enter footballer position : ";
	cin>>f1.position;
 	
	showInfos(f1);
		
}

