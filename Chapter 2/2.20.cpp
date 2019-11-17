
2.20 (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of
a circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value
3.14159 for π. Do all calculations in output statements.

#include<iostream>
using namespace std;
main(){
	float rad,dia,cirf,area;
	cout<<"Input radius: ";
	cin>>rad;
	dia=rad*rad;
	cout<<"Formula(Diameter=r^2)"<<endl;
	cout<<"\tDiameter= "<<dia<<endl;	
	const float pi=3.14159;
	cirf=2*pi*rad;
	cout<<"Formula(Circumference=2pr"<<endl;
	cout<<"\tCircumference= "<<cirf<<endl;
	area=pi*rad*rad;
	cout<<"Formula(Area=pr^2)"<<endl;
	cout<<"\tArea= "<<area<<endl;
	
	
	return 0;
}
