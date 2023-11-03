//Write a C++ program to demonstrate use of this pointer
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;

class employee
{
	public:
		int id ;
		string name ;
		int salary ;
		employee(int id,string name,int salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void display()
		{
			cout<<"ID is     ::"<<id<<endl;
			cout<<"Name is   ::"<<name<<endl;
			cout<<"Salary is ::"<<salary<<endl<<endl;
		}
};
int main()
{
	employee e1 (101,"Yug",987098);
	employee e2 (101,"Jeet",999000);
	e1.display();
	e2.display();
	return 0;
}
