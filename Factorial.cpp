#include<iostream>
using namespace std;

int main(){
	
	int x;
	int y = 1;
	int fact;
	
	cout<<"This Programme is help you to find the factorial value of any number.\n";
	cout<<"Please Enter the value:";
	cin>>x;
	
	while (y<=x){
	
	fact = fact*y;
	y++;
	}
	
    cout<<"The Ans is:"<<fact<<"\n";
	
}
