#include <iostream>
using namespace std;
int main (){
	int year;
	cout<<"welcome in Sukhnam's programme"<<endl;
	cout<<"Enter the year to check that is this leap or not"<<endl;
	cin>>year;
	if(year%4==0 or year%400==0){
		cout<<"this is leap year"<<endl;
	}
	else{
		cout<<"this is not leap year"<<endl;
	}
	
	
	
	
	return 0;
}
