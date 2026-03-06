#include <iostream>
using namespace std;
int main(){
	float voltage =0 , resistance =  0, current = 0;
	cout <<"Enter voltage:";
	cin>>voltage;
	cout<<"enter current:";
		cin>>current;
	resistance=voltage/current;
	cout<<"resistance ="<<resistance<<"ohms";
	return 0;
	}
