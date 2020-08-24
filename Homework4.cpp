#include <iostream>
using namespace std;
int Calage(int);
int main()
{
	int Year,age;
	for (int i = 1 ; i <= 3 ; i++){ 
     cout<<"Enter Year" <<i<< ":";
	 cin>> Year ;
	 int age = Calage (Year) ;
	 cout << "age" <<i<< ":" << age <<endl;
	}
	return (0);
}
int Calage (int Y)
{   int age;
	age = 2563-Y ;
  return (age);
} 