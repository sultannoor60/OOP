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
