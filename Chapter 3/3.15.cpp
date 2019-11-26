#include <iostream>
#include <string>

class HeartRates {

public:

   HeartRates( std::string fn, std::string ln, int bd, int bm, int by ) {
      setFirstName( fn );
      setLastName( ln );
      setBirthDay( bd );
      setBirthMonth( bm );
      setBirthYear( by );
   }

   void setFirstName( std::string fn ) {
      firstName = fn;
   }

   void setLastName( std::string ln ) {
      lastName = ln;
   }

   void setBirthDay( int bd ) {
      birthDay = bd;
   }

   void setBirthMonth( int bm ) {
      birthMonth = bm;
   }

   void setBirthYear( int by ) {
      birthYear = by;
   }

   std::string getFirstName() const {
      return firstName;
   }

   std::string getLastName() const {
      return lastName;
   }

   int getBirthDay() const {
      return birthDay;
   }

   int getBirthMonth() const {
      return birthMonth;
   }

   int getBirthYear() const {
      return birthYear;
   }

   int calculateAge( int cd, int cm, int cy ) {

      int age{ cy - birthYear };

      if ( cm < birthMonth )
         age = age - 1;

      if ( cm == birthMonth )
         if ( cd < birthDay )
            age = age - 1;

      return age;
   }

   int calculateMaximumHeartRate( int cd, int cm, int cy ) {
      return 220 - calculateAge( cd, cm, cy );
   }

   void displayTargetHeartRate( int cd, int cm, int cy ) {
      std::cout << calculateMaximumHeartRate( cd, cm, cy ) * 0.5 << " - "
         << calculateMaximumHeartRate( cd, cm, cy ) * 0.85;
   }

private:

   std::string firstName;
   std::string lastName;
   int birthDay;
   int birthMonth;
   int birthYear;
};

using namespace std;

int main() {

   int bDay, bMonth, bYear;
   int cDay, cMonth, cYear;

   string fName, lName;

   cout << "Current date (dd mm yyyy): ";
   cin >> cDay >> cMonth >> cYear;

   cout << "\nPerson's Name (First Last): ";
   cin >> fName >> lName;

   cout << "Date of birth (dd mm yyyy): ";
   cin >> bDay >> bMonth >> bYear;

   HeartRates heartRates( fName, lName, bDay, bMonth, bYear );

   cout << "\nName: "
      << heartRates.getFirstName() << ' '
      << heartRates.getLastName()
      << "\nBirth date: "
      << heartRates.getBirthDay() << '.'
      << heartRates.getBirthMonth() << '.'
      << heartRates.getBirthYear()
      << "\nAge: "
      << heartRates.calculateAge( cDay, cMonth, cYear )
      << " years\nMaximum heart rate: "
      << heartRates.calculateMaximumHeartRate( cDay, cMonth, cYear )
      << " bpm\nTarget-heart-rate: ";
   heartRates.displayTargetHeartRate( cDay, cMonth, cYear );
   cout << " bpm" << endl;

   return 0;
}
