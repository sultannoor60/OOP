#include<iostream>
using namespace std;

main(){
		int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,bin;
	cout<<"ENTER BINARY VALUE (NOT MORE THAN 10-BITS): ";
	cin>>a;
	
	b = (a % 10000000000)/1000000000;
	c = (a % 1000000000)/100000000;
	d = (a % 100000000)/10000000;
	e = (a % 10000000)/1000000;
	f = (a % 1000000)/100000;
    g = (a % 100000)/10000;
    h = (a % 10000)/1000;
    i = (a % 1000)/100;
    j = (a % 100)/10;
    k = a % 10;
    
    cout<<"YOU ENTERED: "<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k<<endl;
    bin=(b*512)+(c*256)+(d*128)+(e*64)+(f*32)+(g*16),(h*8),(i*4),(j*2),(k*1);
    cout<<"DECIMAL VALUE IS: "<<bin<<endl;
    
}
