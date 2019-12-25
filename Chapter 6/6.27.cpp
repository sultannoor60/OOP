#include<iostream>
using namespace std;
mini(float a, float b, float c){
	int min=0;
	if (a<b && a<c){
		min=a;
		cout<<a<<"  is Minimum number"<<endl;
	}
	else if(b<a && b<c){
                                      min=b;
		cout<<b<<" Is minimum number"<<endl;}
	else{
                                 min=c;
		cout<<c<<" is minimum number"<<endl;}}
main(){
	float a,b,c;
	cout<<"plz Enter first number: "<<endl;
	cin>>c;
	cout<<"plz Enter second number: "<<endl;
	cin>>b;
	cout<<"plz Enter third number: "<<endl;
	cin>>c
	mini(a,b,c);}

