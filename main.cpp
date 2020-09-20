
#include<iostream>
//tentei converter o codigo que fiz em python
using namespace std;
int main(void){
    double r, v, pi=3.14159; // variaveis
    cin>> r; //leitura
    v= pi* r * r * r * (4.0/3); //função para o volume dada
    printf("VOLUME = %.3lf\n", v); //imprime
    return 0; //returno
}
