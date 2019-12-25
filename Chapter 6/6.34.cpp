#include<iostream>
using namespace std;
numb(int a){
	int b=20;
	if(a<b){
		cout<<"too low";
	}else if(a>b){
		cout<<"too high";}}
main(){
	y:
	cout<<"I have a number between 1 and 1000\nCan you guess my number?\nPlease type your first guess.\n";
	int a;
	cout<<"Enter a number:";
	cin>>a;
		while(a!=20){
		numb(a);
	cout<<"\nEnter a number:";
	cin>>a;}
		cout<<" Excellent! You guessed the number!";
		cout<<"\ndo you want to play again Y/N";
		char c;
		if(c=='y'||c=='Y'){
			goto y;
		}else{
			exit(0);}}

