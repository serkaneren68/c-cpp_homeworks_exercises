#include <iostream>
#include <string>
using namespace std;
class Car{
public:
 Car() // Default Constructor
 {
   cout<<"def cons --- \n" ;
  brand ="noname" ;
  year = 0 ;
  model = "noname" ;
  engine_v = 0.0 ;
 }
 Car(string brandx, int yearx, string modelx , double engine_vx) //
//Constructor with default arguments
 {
   cout<<"cons ----\n" ;
 brand = brandx ;
 year = yearx ;
 model = modelx;
 engine_v = engine_vx;
 }
 Car(const Car& other) // Copy Constructor
 {
   cout<<"copy---\n";
 brand = other.brand;
 year = other.year;
 model = other.model;
 engine_v = other.engine_v ;
 }
 Car& operator=(const Car& other) // Assignment operator
 {
 cout<<"assign---\n";
 brand = other.brand;
 year = other.year;
 model = other.model;
 engine_v = other.engine_v ;
 return *this ;
}

 void Print()
 {
 cout<<model<<"--"<<brand<<"--"<<year<<"--"<<engine_v <<"\n\n";
 }
private:
 string brand ;
 int year;
 string model;
 double engine_v;
};
int main()
{
Car car1 ;
Car car2("Honda",2020,"ASD",1.6);
Car car3(car2);

car1 = car3 ;

car1.Print();
car2.Print();
car3.Print();



 return 0 ;
}
