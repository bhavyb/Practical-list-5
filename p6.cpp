//Write a C++ program to demonstrate Runtime polymorphism code without virtual keyword
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;

class animal
{
	public:
		void eat()
		{
			cout<<"Eating...:)"<<endl;
		}
};
class dog : public animal
{
	public:
		void eat()
		{
			cout<<"Dog Eating Bread...:)"<<endl;
		}
		
};
int main()
{
	dog d=dog();
	d.eat();
	return 0;
}