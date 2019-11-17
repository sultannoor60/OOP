#include<iostream>
using namespace std;
main(){
	int a,b,c,sum,avg,pro;
	cout<<"Input three different integers : ";
	cin>>a;cin>>b;cin>>c;
	sum=a+b+c;
	cout<<"Sum is "<<sum<<endl;
	avg=sum/3;
	cout<<"Average is "<<avg<<endl;
	pro=a*b*c;
	cout<<"Product is "<<pro<<endl;
	if(a<b & a<c){
		cout<<"Smallest is "<<a<<endl;
	}else if(b<a & b<c){
		cout<<"Smallest is "<<b<<endl;
	}else if(c<a & c<b){
		cout<<"Smallest is "<<c<<endl;
	}
	if(a>b & a>c){
		cout<<"Largest is "<<a;
	}else if(b>a & b>c){
		cout<<"Largest is "<<b;
	}else if(c>a & c>b){
		cout<<"Largest is "<<c;
	}
	
	
	
	
	return 0;
}
