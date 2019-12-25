#include<iostream>
using namespace std;
int gcd(int m, int n) { 
   if (n == 0) 
      return m; 
 return gcd(n, m % n);   } 
main() { 
int a,b;
   cout<<"PLZ Enter a number: "<<endl;
   cin>>a;
   cout<<"PLZ Enter second number: "<<endl;
   cin>>b; 
 cout<<"GCD of "<< a <<" and "<< b <<" is: "<< gcd(a,b); }   

