#include<iostream>
#include <iostream>
#include <iomanip>
#include <list>
#include<vector>

using namespace std;


vector<string> entrada()
{
    string a,b,c;
    cin >>a>>b>>c;
    return {a,b,c};
}
string processamento(vector<string>& vec)
{
    string a=vec[0],b=vec[1],c=vec[2];
    if (a=="vertebrado")
    {
        if(b=="ave")
            {
            if(c=="carnivoro")
                {
                return "aguia";
                }
            if(c=="onivoro")
               {
                return "pomba";
               }
            }
        if(b=="mamifero")
            {
            if(c=="onivoro")
                {
               return "homem";
                }
            if(c=="herbivoro")
                {
                return "vaca";
                }
            }
    }
    if(a=="invertebrado")
    {
        if(b=="inseto")
            {
            if (c=="hematofago")
                {
                return "pulga";
                }
            if(c=="herbivoro")
                {
                return "lagarta";
                }
            }
        if(b=="anelideo")
            {
            if (c=="hematofago")
                {
                return "sanguessuga";
                }
            if (c=="onivoro")
                {
                return "minhoca";
                }
            }
    }
}
void saida(string animal)
{
    cout<< animal <<endl;
}

int main()
{
      vector<string>n = entrada();
      string lista = processamento(n);
      saida(lista);

      return 0;
}
