#include <iostream>

using namespace std;
class Date {

public:

   Date( int a, int b, int c ) {
      setMonth( a );
      setDay( b );
      setYear( c );
   }

   void setMonth( int a ) {
      month = a;
      if ( a < 1 ) month = 1;
      if ( a > 12 ) month = 1;
   }

   void setDay( int a ) {
      day = a;
   }

   void setYear( int a ) {
      year = a;
   }

   int getMonth() const {
      return month;
   }

   int getDay() const {
      return day;
   }

   int getYear() const {
      return year;
   }

   void displayDate() const {
      cout << month << '/' << day << '/' << year << endl;
   }

private:

   int month;
   int day;
   int year;
};


int main() {

   Date date( 11, 8, 1983 );

   cout << "initial date is: ";
   date.displayDate();

   date.setMonth( 13 );

   cout << "modified date is: ";
   date.displayDate();

   return 0;
}
