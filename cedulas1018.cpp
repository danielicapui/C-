#include<iostream>
#include <iostream>
#include <iomanip>
#include <list>
#include<vector>

using namespace std;


int entrada()
{
    int n;
    cin >>n;
    return n;
}
vector<int> processamento(int n)
{
    int n100,n50,n20,n10,n5,n2,n1,y;

    n100=n/100;
    y=(n%100);

    n50=y/50 ;
    y = (y%50);

    n20=y/20;

    y =(y%20);

    n10=y/10;
    y = (y%10);

    n5=y/5;
    y = (y%5);

    n2=y/2;

    y = (y%2);
    n1=y/1;
    //auto vetNotas = notas({n1,50,20,10,5,2,1}, valor);


    return {n,n100, n50, n20, n10, n5, n2, n1};

}
void saida(vector<int>& vec)
{

    cout << vec[0]<<"\n";
    cout << vec[1] << " nota(s) de R$ 100,00\n";
    cout << vec[2] << " nota(s) de R$ 50,00\n";
    cout << vec[3] << " nota(s) de R$ 20,00\n";
    cout << vec[4] << " nota(s) de R$ 10,00\n";
    cout << vec[5] << " nota(s) de R$ 5,00\n";
    cout << vec[6]<< " nota(s) de R$ 2,00\n";
    cout << vec[7] << " nota(s) de R$ 1,00\n";
}
int main()
{
      int n = entrada();
      vector<int> lista = processamento(n);
      saida(lista);

      return 0;
}

