#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int a,b,c;
    cin >>a>>b>>c;
    if(a < b && a < c){

        if(b < c){
            cout << a << endl << b<< endl << c << endl << endl;
        }else{
            cout << a << endl << c << endl << b << endl << endl;
        }
    }
    if(b < a && b < c){

        if(a < c){
            cout << b << endl << a << endl << c << endl << endl;
        }else{
            cout << b << endl << c << endl << a << endl << endl;
        }
    }
    if(c < b && c < a){

        if(b < a){
            cout << c << endl << b << endl << a << endl << endl;
        }else{
            cout << c << endl << a << endl << b << endl << endl;
        }
    }
    cout << a << endl << b << endl << c << endl;
    return 0;
}
