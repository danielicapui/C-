#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int n,h=3600,m=60;
    cin >>n;
    cout<<n/h << ":" << (n%h)/m << ":" <<n%m <<endl;
    return 0;
}
