//Write a C++ program to demonstrate use of Single Inheritance
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;

class vehicle
{
	public:
		vehicle()
		{
			cout<<"this is a vehicle"<<endl;
		}
		
};
class car : public vehicle {};
int main()
{
	vehicle v;
	car obj;
	return 0;
}
