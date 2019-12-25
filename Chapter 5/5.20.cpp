#include <iostream>
#include <math.h>
using namespace std;
int main(){
int sd1,sd2,hyp;
cout << "pythagorean triples" << endl;
for(sd1 = 1; sd1 < 500; sd1 ++){
for(sd2 = 1; sd2 < 500; sd2 ++){
for( hyp = 1; hyp < 500; hyp ++){
if(pow(sd1,2) + pow(sd2,2) == pow(hyp,2) && pow(hyp,2) <= 500){
cout << sd1 << " + " << sd2  << " = "  << hyp << endl;
}}}}return 0;}
  
