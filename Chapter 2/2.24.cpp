#include<iostream>
using namespace std;
main(){
	int a,bb,sum,nn;
	for(int i;i<=2;i++){
	cout<<"enter a number: ";
	cin>>a;
	bb=a%2;
	if(bb==1){
		cout<<"this number is odd"<<endl;
	}else{
		cout<<"this number is even"<<endl;
	}
	sum=sum+a;
}
   cout<<sum<<endl;
	nn=sum%2;
	if(nn==1){
		cout<<"sum is odd"<<endl;
	}else{
		cout<<"sum is even"<<endl;
	}
	
	
	return 0;
}
