#include<iostream>

using namespace std;

class HeartRates {
private:
  string name ;
  string surname ;
  int day ;
  int month ;
  int year ;
  int age;
public:
  HeartRates (string name,string surname,int day,int month,int year){
    this->name = name ;
    this->surname = surname ;
    this->day = day;
    this->month = month;
    this->year = year ;
    this->age = 0 ;
  }

  int getAge(){
    int day;
    int month ;
    int year ;


    cout<<"gecerli günü,ayı,yılı  sırasıyla giriniz " ;
    cin>>day;
    cin>>month;
    cin>>year ;



    if((this->month * 30 + this->day)<(month*30+day) ){
      age = year - this->year ;
      return age ;
    }
    else{
      age = year-this->year -1 ;
      return age ;
    }

  }

  int getMaxHeartRate(){
      return 220-age ;
  }

  int* getTargetHeartRate(){

      static int range[2] ;
      range[0] = getMaxHeartRate()/2 ;
      range[1] = getMaxHeartRate()*85/100 ;

      return range ;
  }






  void getName(){
    std::cout << "name is : "<< this->name<< '\n';
  }

  void getSurName(){
    std::cout << "surname is : "<< this->surname<< '\n';
  }

  void getDateOfBirth(){
    std::cout << "Birthday is : "<< this->day<<"."<<this->month<<"."<<this->year<< '\n';
  }

  void setName(string name){
    this->name = name ;
  }

  void setSurName(string surname){
    this->surname = surname ;
  }

  void setDateOfBirth(int day,int month,int year){
    this->day = day;
    this->month = month;
    this->year = year ;
  }





};



int main(){
HeartRates nesne1("serkan","eren",8,8,2000) ;
nesne1.getDateOfBirth();
cout<<nesne1.getAge()<<endl ;

cout<< nesne1.getMaxHeartRate()<<endl;

cout << nesne1.getTargetHeartRate()[0]<<"--"<<nesne1.getTargetHeartRate()[1]<<endl;

  return 0 ;
}
