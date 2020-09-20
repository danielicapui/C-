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
string processamento(int a)
{
    if(a==61)
    {
        return "Brasilia";
    }
    else if(a==71)
    {
        return "Salvador";
    }
    else if(a==11)
    {
        return "Sao Paulo";
    }
    else if(a==21)
    {
        return "Rio de Janeiro";
    }
    else if(a==32)
    {
        return "Juiz de Fora";
    }
    else if(a==19)
    {
        return "Campinas";
    }
    else if(a==27)
    {
        return "Vitoria";
    }
    else if(a==31)
    {
        return "Belo Horizonte";
    }
    else{
        return "DDD nao cadastrado";
    }

}
void saida(string pais)
{

    cout<<pais<<endl;
}
int main()
{
      int ddd = entrada();
      string pais = processamento(ddd);
      saida(pais);

      return 0;
}

