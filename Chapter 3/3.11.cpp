#include<iostream>
#include<string>
using namespace std;
class gradebook{
	private:
	
		string name;
		string course;
	
		public:
			gradebook(string a,string b){
				name=b;
				course=a;
			}
			setName(string a){
					name=a;
			}
	
			getName(){
				cout<<name;
			}
			displaymsg(){
				cout<<"\t\tWELCOME TO OUR PROGRAM\n\n"<<course<<" This course is presented by: "<<name;
			}
};
int main(){
	gradebook book("UMAIR","OOP");
	book.displaymsg();
	string m;
	cout<<"\nENTER CONSTRUCTORS NAME: ";
	cin.sync();
	getline(cin,m);
book.setName(m);
book.getName();
}
