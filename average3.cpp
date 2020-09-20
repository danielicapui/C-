#include<stdio.h>
#include<iostream>
#include <iostream>
#include <iomanip>
using namespace std;
float entrada(float r)
{
    double r;
    cin >>r;
    return r;
}

float volume(float r)
{
    float v, pi=3.14159;
    v=pi*r*r*r*(4.0/3);
    return v;
    
}
void saida(float v)
{
    
    cout<<"VOLUME = "<<v<<fixed<<setprecision(3)<<endl;
    
       
}

int main(void)
{
    float r;
    r=volume(entrada(float(r)));
    saida(r);

    return 0; 
}
