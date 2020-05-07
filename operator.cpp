#include<iostream>
using namespace std;

int* simpler(int x1,int y1 ){
    static int list[2] ;
    int x,y ;
    x = abs(x1) ;
    y = abs(y1) ;
    
    if(x>y){
    for(int i = x ;i>0 ;i--){
        if(x%i == 0 && y%i == 0){
            x = x/i ;
            y = y/i ;
        }
    }
    }
    else{
        for(int i = y ;i>0 ;i--){
        if(x%i == 0 && y%i == 0){
            x = x/i ;
            y = y/i ;
        }
    }
    }
    if(x1/y1 >= 0){
        list[0] = x ;
        list[1] = y ;
    }
    else{
        list[0] = -x ;
        list[1] = y ;
    }
    return list ;

}

class Rational{
    
public:
        
    Rational(){
        pay = 0 ;
        payda = 1;

        } 
    Rational(int pay,int payda){
        if(payda != 0){
            this->pay = simpler(pay,payda)[0] ;
            this->payda = simpler(pay,payda)[1] ;
        }
        else{
            std::cout << "payda 0 dan farklı olmalıdır : tekrar girin" << std::endl;
            cin>>this->payda ;
        }
    }  
        
    Rational operator+(const Rational &ex){
        
        int newpayda = this->payda * ex.payda ;
        int newpay = (this->pay*ex.payda)+(ex.pay*this->payda) ; 
        /* yeni_sayi.pay = newpay ;
        yeni_sayi.payda = newpayda ; */
        Rational yeni_sayi(newpay,newpayda) ;
        return yeni_sayi ;
    }

    Rational operator-(const Rational &ex){ ///// ampersanti koymayınca da düzgün çalışıyor !! Neden ??
        Rational yeni_sayi ;
        int newpayda = this->payda * ex.payda ;
        int newpay = (this->pay*ex.payda)-(ex.pay*this->payda) ;
        yeni_sayi.pay = newpay ;
        yeni_sayi.payda = newpayda ;
        return yeni_sayi ;
    }

    Rational operator * (Rational &ex){
        Rational yeni_sayi;
        yeni_sayi.pay = this->pay * ex.pay  ;
        yeni_sayi.payda = this->payda * ex.payda;
        return yeni_sayi;
    }
    Rational operator / (Rational &ex){
        Rational yeni_sayi;
        yeni_sayi.pay = this->pay * ex.payda  ;
        yeni_sayi.payda = this->payda * ex.pay;
        return yeni_sayi;
    }

    void getinfo_kesirli(){
        cout << pay<< "/" << payda<<" \n";
    }
    void getinfo_virgullu(){
        float a = pay*(0.1*10)/payda*(0.1*10) ;
        cout<<a<<" \n"  ;
    }

private:

    int pay ;
    int payda;
    
};





int main() {
 
 
Rational r1(2,1);
Rational r2(1,2);
Rational r10(1,2);
r1.getinfo_kesirli();
r2.getinfo_kesirli();
Rational r3 ,r4,r5;

r3 = r1 - r2 - r10 ;
r4 = r1*r2 ;
r5 = r1/r2 ;
r3.getinfo_kesirli();
r3.getinfo_virgullu();
r1.getinfo_kesirli();
r2.getinfo_kesirli();
r4.getinfo_kesirli();
r5.getinfo_kesirli();
r5.getinfo_virgullu();

 
    return 0;
}