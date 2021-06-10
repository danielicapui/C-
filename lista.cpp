#include <iostream>
#include <cmath>
#include <iomanip>
void numerosEspecias(int n1,int n2,int n3)
{
	if(n1>=0)
	{
    	std::cout<<sqrt(n1)<<std::endl;
	}
	else
	{
		std::cout<<pow(n1,2)<<std::endl;
	}
	if (n2>10 && n2<100)
	{
		std::cout<<"Número entre 10 e 100. Intervalo permitido."<<std::endl;
	}
	//como nenhum else for descrito não irei fazer
	if (n3<n2)
	{
		std::cout<<n2-n3<<std::endl;
	}
	else
	{
		std::cout<<n2+n3<<std::endl;
	}
}
void numerosMaior(int n1, int n2)
{
	if(n1>n2)
	{
		std::cout<<n1+n2<<std::endl;
	}
	else
	{
		std::cout<<n1-n2<<std::endl;
		//acho que é o valor desejado
		std::cout<<n2-n1<<std::endl;
	}
}
class Vendedor
{
	public:
	 	int numero;
	 	double salario_fixo;
	 	int total_vendas;
	 	double salario_total;
     	Vendedor(int n,double salario,double vendas)
     	{
     		numero=n;
     		salario_fixo=salario;
     		total_vendas=vendas;
     		salario_total=salarioTotal();
     	}
     	double salarioTotal()
     	{
     		double comissao;
     		if (total_vendas<=10000)
     		{
     		   comissao=total_vendas*0.03;
     		   salario_total=salario_fixo+comissao;
     		   return salario_total;
     		}
     		else
     		{
     		 	comissao=10000*0.03+(total_vendas-10000)*0.05;
     		 	salario_total=salario_fixo+comissao;
     		 	return salario_total;
     		}
     	}
     	void mostrarDados()
     	{
     		//como não pediu para formatar os dados não irei
     		std::cout<<"numero:"<<numero<<std::endl;
     		std::cout<<"total de vendas:"<<total_vendas<<std::endl;
     		std::cout<<"salario fixo:"<<std::fixed<<std::setprecision(2)<<salario_fixo<<std::endl;
     		std::cout<<"salario total:"<<std::setprecision(2)<<salario_total<<std::endl;
     	}
};
 
 bool maior(int n1,int n2)
 {
 	if(n1>n2)
 	   return true;
 	else
 		return false;
 }
 int maiorNumero(int n1,int n2,int n3)
 {
 	if(maior(n1,n2))
 	{
 	   if(maior(n1,n3))
 	   {
 	   	return n1;
 	   }
 	   else
 	   {
 	   	return n3;
 	   }
 	}
 	else
 	{
 		if(maior(n2,n3))
 		{
 		 return n2;
 		}
 		else
 		{
 			return n3;
 		}
 	}
 }
 	
int main(int argc, char *argv[])
{
	int n1,n2,n3;
	//questão 1
	std::cout<<"digite os três números da questão 1:"<<std::endl;
	std::cin>>n1>>n2>>n3;
	numerosEspecias(n1,n2,n3);
	//questão 2
	int num1,num2;
	std::cout<<"digite os 2 números da questão 2:"<<std::endl;
	std::cin>>num1>>num2;
	numerosMaior(num1,num2);
	//questão 3
	int numero,vendas;
	double salario_fixo;
    std::cout<<"Digite numero,salario fixo e vendas,respectivamente:"<<std::endl;	std::cin>>numero>>salario_fixo>>vendas;
	Vendedor vendedor(numero,salario_fixo,vendas);
	vendedor.mostrarDados();
	//questão 4
	int a,b,c;
	std::cout<<"Digite os 3 numeros da questão 4:"<<std::endl;
	std::cin>>a>>b>>c;
	std::cout<<maiorNumero(a,b,c)<<std::endl;
	return 0;
}