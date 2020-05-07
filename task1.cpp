#include <iostream>
using namespace std;
class Date {
public:

 Date()
 {
 cout << "default ctor called\n" ; //Default Constructor
 day = 0 ;
 month = 0 ;
 year = 0 ;
 }
 Date(int d, int m, int y )
 {
 cout << "ctor with argument called\n" ; //Constructor
 day = d ;
 month = m ;
 year = y ;
 }

 Date(const Date& other) // Copy Constructor
 {
 cout << "copy ctor called\n" ;
 day=other.day;
 month=other.month;
 year=other.year;
 }

 Date& operator=(const Date& other) // Assignment operator
 {
 cout << "assignment operator called\n" ;
 day=other.day;
 month=other.month;
 year=other.year;
 return *this;
 }
 void PrintDate()
 {
 cout<<"Date: "<<day<<"."<<month<<"."<<year<<endl;
 }
private:

 int day;
 int month;
 int year;

};
// end class //
int main()
{
 Date anyday ; //Default Constructor
 anyday.PrintDate();

 Date today(14,4,2020); //Constructor
 today.PrintDate();
 Date yourday(today); //Copy Constructor
 yourday.PrintDate();

 anyday=yourday; //Assignment Operator
 anyday.PrintDate();
 return 0;
}
