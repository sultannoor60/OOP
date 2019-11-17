#include<iostream>
using namespace std;
main(){
	int num = 0;
    int a,b,c,d,e;

    cout << "Please, type a five-digit integer:" << endl;
    cin >> num;

    a = num % 10;
    b = (num % 100)/10;
    c = (num % 1000)/100;
    d = (num % 10000)/1000;
    e = (num % 100000)/10000;
    
    cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<"  "<<e;
	
	
	return 0;
}
