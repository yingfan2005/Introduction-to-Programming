#include<stdio.h>
int main()
{
	float salario_minimo,Porcentagem1=0.7,Porcentagem2=0.01,quantidade_energia,custo_kw,custo_consumo,custo_desconto,Porcentagem3=1-0.1;
	scanf("%f%f",&salario_minimo,&quantidade_energia);
	custo_kw=Porcentagem1*salario_minimo*Porcentagem2;
	custo_consumo=custo_kw*quantidade_energia;
	custo_desconto=custo_consumo*Porcentagem3;
	printf("Custo por kW: R$ %.2f\n",custo_kw);
	printf("Custo do consumo: R$ %.2f\n",custo_consumo);
	printf("Custo com desconto: R$ %.2f\n",custo_desconto);
	return 0;
}

	
