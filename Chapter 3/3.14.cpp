 #include<iostream>
 #include<string>
using namespace std;
class employee {

string firstnam,lastnam;
int f;

public:
employee(string a, string b, int c){
firstnam=a;
lastnam=b;
f=c;
}
out(){
cout<<firstnam;
cout<<lastnam;
cout<<f;

}

};

main(){
employee emp("sultan", "noor", 100);
emp.out();
}




