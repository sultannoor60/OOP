#include<iostream>
using namespace std;
int qp(int a){
	 if(a >= 90){
      return 4;}
else if( a >= 80){
      return 3;}
   else if(a >= 70){
      return 2;}
   else if(a >= 60){
      return 1;}
   else{
      return 0;}}
 main(){
	int a,ch;
	cout<<"PLZ Enter the no. of students data want to enter:  "<<endl;
	cin>>ch;
	for(int i=0;i<choice;i++){
	cout<<":PLZ Enter the average of students:  "<<endl;
	cin>>a;}
	cout<<"points: "<<qp(a);}

