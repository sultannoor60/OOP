
2.23 (Largest and Smallest Integers) Write a program that reads in five integers and determines
and prints the largest and the smallest integers in the group. Use only the programming techniques
you learned in this chapter







#include<iostream>
using namespace std;
main(){
	int a;
	int smallest;
	int largest=0;
	for(int i=1;i<=5;i++){
	cout<<"Enter number: ";
	cin>>a;
	if(largest<a){
		largest=a;
	}else{
	      if(smallest>a){
		smallest=a;
	}
}
}
	cout<<"Largest number entered = "<<largest<<endl;
	cout<<"smallest number entered = "<<smallest<<endl;

	
	return 0;
}
