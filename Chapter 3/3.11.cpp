#include <iostream>
#include <string>
using namespace std;
class MotorVehicle {

public:

   MotorVehicle(string a, string b, int c ) {
      setMake( a );
      setFuelType( b );
      setYearOfManufacture( c );
   }

   void setMake( string a ) {
      make = m;
   }

   void setFuelType( string a ) {
      fuelType = a;
   }

   void setYearOfManufacture( int a ) {
      yearOfManufacture = a;
   }

   void setColor( string a ) {
      color = a;
   }

   void setEngineCapacity( int a ) {
      engineCapacity = a;
   }

   string getMake() const {
      return make;
   }

   string getFuelType() const {
      return fuelType;
   }

   int getYearOfManufacture() const {
      return yearOfManufacture;
   }

   string getColor() const {
      return color;
   }

   int getEngineCapacity() const {
      return engineCapacity;
   }

   void displayCarDetails() const {
   cout << "CAR DETAILS"
         << "\nMake:                " << make
         << "\nFuel type:           " << fuelType
         << "\nYear of manufacture: " << yearOfManufacture
         << "\nColor:               " << color
         << "\nEngine capacity:     " << engineCapacity
         << endl;
   }

private:

   string make;
   string fuelType;
   int yearOfManufacture;
   string color;
   int engineCapacity;
};
main(){
   MotorVehicle ms("prado","petrol",2004){
      cout<<"enter car colour: ";
      int a;
      cin>>a;
      setColor( a );
      displayCarDetails();
   }
      
      
