#include <iostream>
using namespace std;
 rev(int l){
 		int rnum=0;
 
	while (l > 0)
	{     rnum += (l%10);
		rnum *= 10;
		l /= 10;}
 
	rnum /= 10;
while (rnum != 0){
cout << rnum%10 << " ";
rnum /= 10;} }
main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;
	rev(num);}

