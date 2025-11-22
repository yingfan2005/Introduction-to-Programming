#include<stdio.h>
void converteEmNotasMoedas(int valor,int nota[4])
{
    nota[0]=(valor/100);
    nota[1]=((valor%100)/50);
    nota[2]=(((valor%100)-50)/10);
    nota[3]=(((valor%100)-50)%10);
}
int main()
{
    int valor,i;
    scanf("%d",&valor);
    int nota[4]={0};
    converteEmNotasMoedas(valor,nota);
    printf("NOTAS DE 100 = %d\n",nota[0]);
    printf("NOTAS DE 50 = %d\n",nota[1]);
    printf("NOTAS DE 10 = %d\n",nota[2]);
    printf("MOEDAS DE 1 = %d\n",nota[3]);
    return 0;
}