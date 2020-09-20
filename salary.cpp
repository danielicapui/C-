#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int  a,b;
    float c,salary;
    cin >>a>>b>>c;
    salary=b*c;
    cout <<"NUMBER = "<<a<<endl;
    cout <<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;
    return 0;
}
