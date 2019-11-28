#include<iostream>
using namespace std;
class sultan{
	private:
	
		string name;
	
		public:
			setName(string a){
					name=a;
			}
	
			getName(){
				cout<<name;
			}
};
int main(){
	sultan sul;
sul.setName("this is how get and set function works !");
sul.getName();
}
