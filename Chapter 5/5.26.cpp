#include<iostream>
using namespace std;
main(){
for ( unsigned int i{1}; i <= 2; i++ ){
 cout << i << " : ";
 for ( unsigned int j{1}; j <= 3; j++ ){
 for ( unsigned int k{4}; k >= 2 ; k-- ) {
 cout << k;}
 cout << "-" << j << endl;
 }}cout << endl;}
/*
1 : 432-1
432-2
432-3
2 : 432-1
432-2
432-3*/
