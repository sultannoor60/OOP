2.16 (Arithmetic) Write a program that asks the user to enter two numbers, obtains the two
numbers from the user and prints the sum, product, difference, and quotient of the two numbers.



#include<iostream>
using namespace std;
main(){
	int a,b,sum,pro,dif;
	float quo;
	cout<<"enter two numbers: ";
	cin>>a;cin>>b;
	sum=a+b;
	cout<<"sum: "<<sum<<endl;
	pro=a*b;
	cout<<"product: "<<pro<<endl;
	dif=a-b;
	cout<<"difference: "<<dif<<endl;
	quo=(a/b);
	cout<<"quotient: "<<quo<<endl;
    
 
	
	
	return 0;
}
