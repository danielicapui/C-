#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string  empregado;
    double salario,vendas,total;
    cin >>empregado;
    cin >>salario>>vendas;
    total=salario+vendas*0.15;
    cout <<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}
