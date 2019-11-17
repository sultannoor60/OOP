
/*2.28 (Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer
into its digits and prints them separated by three spaces each. [Hint: Use the integer division and
modulus operators.] For example, if the user types in 42339, the program should print:*/

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
