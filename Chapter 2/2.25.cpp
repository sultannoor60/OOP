2.25 (Multiples) Write a program that reads in two integers and determines and prints if the first
is a multiple of the second.


#include<iostream>
using namespace std;
main(){
	int a,b,mod;
	cout<<"enter two numbers: ";
	cin>>a;
	cin>>b;
	mod=a%b;
	if(mod==0){
		cout<<a<<" is a factor of second "<<b<<endl;
	}else{
			cout<<b<<" is not a factor of second "<<a<<endl;
	}
	
	
	return 0;
}
