#include<iostream>
using namespace std;

struct Employee{
	
	int id;
	string name;
	string department;
	
};
void show(Employee* employee){
	
	employee->id=30;
	cout<<"Id : "<<employee->id<<endl;
	cout<<"Name : "<<employee->name<<endl;
	cout<<"Department : "<<employee->department<<endl;
}
void showEmployee(Employee employee){
	employee.id=41;
	cout<<"Id : "<<employee.id<<endl;
	cout<<"Name : "<<employee.name<<endl;
	cout<<"Department : "<<employee.department<<endl;
}


int main(){
	
	Employee employee1 = {10,"Ayhan Kos","Bilgisayar"};	
	
	showEmployee(employee1);
	
	cout<<employee1.id<<endl;
	
	show(&employee1);
	
	cout<<employee1.id<<endl;
	
	return 0;
}
