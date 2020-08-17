#include <iostream>
using namespace std;
int Calage(int,int);
int main()
{
	int Year,Age;
	for (int i = 1 ; i <= 3 ; i++){ 
     cout<<"Enter Year" <<i<< ":";
	 cin>> Year ;
	 Age = 2563- Year;
	 cout << "Age" <<i<< ":" << Age <<endl;
	 Calage(Year,Age);
	}
	return (0);
}
int Calage (int Y ,int age)
{ age = 2563-Y ;
  return (age);
} 