#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int c1,n1,c2,n2;
    float price1,price2,t1,t2,t;
    cin >>c1>>n1>>price1;
    cin >>c2>>n2>>price2;
    t1=n1*price1;
    t2=n2*price2;
    t=t1+t2;
    cout<<"VALOR A PAGAR = R$ "<<fixed<<setprecision(2)<<t<<endl;
    return 0;
}
