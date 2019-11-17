2.18 (Comparing Integers) Write a program that asks the user to enter two integers, obtains the
numbers from the user, then prints the larger number followed by the words "is larger." If the
numbers are equal, print the message "These numbers are equal."



#include<iostream>
using namespace std;
main(){
	int a,b;
	cout<<"enter two numbers: ";
	cin>>a;
	cin>>b;
	if(a!=b){
		cout<<"These numbers are not equal"<<endl;
	}
	if(a<b){
		cout<<a<<" is smaller";
	}else{
			cout<<b<<" is smaller";
		}
    
 
	
	
	return 0;
}
