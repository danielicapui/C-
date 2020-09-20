#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double  a,r,n=3.14159;
    cin >>r;
    a=n*r*r;
    cout <<"A = "<<fixed<<setprecision(4)<<a<<endl;
    return 0;
}
