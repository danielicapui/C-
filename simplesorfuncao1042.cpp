#include<iostream>
#include <iostream>
#include <iomanip>
#include <list>
#include<vector>

using namespace std;


vector<int> entrada()
{
    int a,b,c;
    cin >>a>>b>>c;
    return {a,b,c};
}
vector<int> processamento(vector<int>& vec)
{
    int a=vec[0],b=vec[1],c=vec[2];
    if(a < b && a < c){

        if(b < c){
            return {a,b,c,vec[0],vec[1],vec[2]};
        }else{
            return {a,c,b,vec[0],vec[1],vec[2]};
        }
    }
    if(b < a && b < c){

        if(a < c){
           return {b,a,c,vec[0],vec[1],vec[2]};
        }else{
            return {b,c,a,vec[0],vec[1],vec[2]};
        }
    }
    if(c < b && c < a){

        if(b < a){
            return {c,b,a,vec[0],vec[1],vec[2]};
        }else{
            return {c,a,b,vec[0],vec[1],vec[2]};
        }
    }

}

void saida(vector<int>& vec)
{

    cout << vec[0] << endl << vec[1]<< endl << vec[2] << endl << endl;
    cout << vec[3] << endl << vec[4] << endl << vec[5] << endl;
}

int main()
{
      vector<int>n = entrada();
      vector<int> lista = processamento(n);
      saida(lista);

      return 0;
}
