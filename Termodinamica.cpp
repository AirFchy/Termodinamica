#include <stdio.h>
//#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
float R, Q, qmin, massa, c, deltat, tinicial, tfinal, Ql, l, K, A, e, h, tau, pressao, deltav, vinicial, vfinal, deltau, uinicial, ufinal, deltah, hinicial, hfinal;
int calculo, calculo_r, cont=0, i=0;

printf("\n____________ Termodinamica ____________\n");
printf("\n  (Sistema Internacional de Unidades)\n");
printf("\n\n------------ Menu ------------\n\n");
//conversao de escalas [1]
printf("1 - Transferencia de Escalas Termometricas\n\n");
printf("2 - Calor Sensivel\n\n");
printf("3 - Calor Latente\n\n");
printf("4 - Transferencia de Calor - Parede Plana (Lei de Fourier)\n\n"); 
printf("5 - Transferencia de Calor - Fluxo Fluido (Lei de Newton)\n\n");
printf("6 - Trabalho sob Pressao Constante\n\n");
printf("7 - Energia Interna\n\n");
printf("8 - Entalpia\n\n");
printf("9 - Transferencia de Calor por Resistencias Associadas:\n");
printf("\n\nDigite o numero da Equacao que deseja calcular:  \n");
scanf("%d", &calculo);

//Para scanf
//{
//%s=pra string
//%d ou %i = pra numeros inteiros [no printf]
//%d=somente numeros inteiros no scanf
//%i=numeros decimais, octais e hexadecimais no scanf
//%f=pra float
//}

while(calculo==2)
{
	printf("Calor Sensivel\n\n\n");
	//Q=m*c*ΔT
	printf("\nDigite o valor da Massa (em gramas):  ");
	scanf("%f", &massa);
	printf("\nDigite o valor do calor especifico da substancia (em cal/g°C):  ");
	scanf("%f", &c);
	printf("\nDigite o valor da Temperatura Inicial (em °C ou K): ");
	scanf("%f", &tinicial);
	printf("\nDigite o valor da Temperatura Final (em °C ou K): ");
	scanf("%f", &tfinal);
	deltat=tfinal-tinicial;
	Q=massa*c*deltat;
	printf("\n\n\nO valor da Quantidade de Calor Sensivel e %4.4f cal", Q);
	calculo=0;
		//printf("\nDigite 0 para sair ou qualquer outro numero para continuar\n");
		//scanf("%d", &calculo);
		//printf("%d", &calculo);
		//if(calculo=!0)
		//{
		  //  calculo=2;
		//}
		//else
        //{

		    //calculo=0;
		//}
		
}
while(calculo==3)
{
	printf("Calor Latente\n\n\n");
	//Ql=m*L
	printf("\nDigite o valor da massa (em gramas): ");
	scanf("%f", &massa);
	printf("\nDigite o valor da Constante de proporcionalidade (em cal/g): ");
	scanf("%f", &l);
	Ql=massa*l;
	printf("\n\n\nO valor da Quantidade de Calor Latente e %4.4f cal", Ql);
}

while(calculo==4)
{
	printf("Lei de Fourier - Transferencia de Calor [Parede Plana]\n\n\n");
	//q=(K*A*ΔT)/e
	printf("\nDigite o valor da Constante (em W/m.K): ");
	scanf("%f", &K);
	printf("\nDigite o valor da Area (em metros quadrados): ");
	scanf("%f", &A);
	printf("\nDigite o valor da Temperatura Inicial (em °C ou K): ");
	scanf("%f", &tinicial);
	printf("\nDigite o valor da Temperatura Final (em °C ou K): ");
	scanf("%f", &tfinal);
	printf("\nDigite o valor da Espessura (em metros): ");
	scanf("%f", &e);
	deltat=tfinal-tinicial;
	qmin=(K*A*deltat)/e;
	printf("\n\n\nO valor da taxa de Transferencia de calor por Conducao e %4.4f Watts", qmin);
	calculo=0;

}
while(calculo==5)
{
	printf("Lei de Newton - Transferencia de Calor [Fluxo Fluido]\n\n\n");
	//q=h*A*ΔT
	printf("\nDigite o valor da Constante (em W/m^2.K): ");
	scanf("%f", &h);
	printf("\nDigite o valor da Area (em metros): ");
	scanf("%f", &A);
	printf("\nDigite o valor da Temperatura Inicial (em °C ou K): ");
	scanf("%f", &tinicial);
	printf("\nDigite o valor da Temperatura Final (em °C ou K): ");
	scanf("%f", &tfinal);
	deltat=tfinal-tinicial;
	qmin=h*A*deltat;
	printf("\n\n\nO valor do Coeficiente de Conveccao e %4.4f Watts", qmin);
	calculo=0;

}
while(calculo==6)
{
	printf("Trabalho sob Pressao Constante\n\n\n");
	//τ=P*ΔV
	printf("\nDigite o valor da Pressao (em Pascal): ");
	scanf("%f", &pressao);
	printf("\nDigite o valor do Volume inicial (em metro cubico): ");
	scanf("%f", &vinicial);
	printf("\nDigite o valor do Volume final (em metro cubico): ");
	scanf("%f", &vfinal);
	deltav=vfinal-vinicial;
	tau=pressao*deltav;
	printf("\n\n\nO Trabalho realizado foi de %2.4f Joule", tau);
	calculo=0;

}
while(calculo==7)
{
	printf("Energia Interna\n\n\n");
	//ΔU=Q-τ
	printf("\nDigite o valor do Calor (em Joule): ");
	scanf("%f", &Q);
	printf("\nDigite o valor do Trabalho (em Joule/segundo): ");
	scanf("%f", &tau);
	deltau=Q-tau;
	printf("\n\n\nO Valor da Variacao de Energia Interna Interna e igual a %2.4f Watts", Q);
	calculo=0;

}
while(calculo==8)
{
	printf("Entalpia\n\n\n");
	//ΔH=ΔU-τ
	printf("Digite o Valor da Energia Inicial (em Joule): ");
	scanf("%f", &uinicial);
	printf("\nDigite o valor da Energia Final (em Joule): ");
	scanf("%f", &ufinal);
	printf("Digite o valor do Trabalho (em Joule): ");
	scanf("%f", &tau);
	deltau=ufinal-uinicial;
	deltah=deltau-tau;
	printf("\n\n\nO Valor da Variação da Entalpia e igual a %2.4f Joule", deltah);
	calculo=0;



}
while(calculo==9)
{
	printf("Transferencia de Calor por Resistencias Associadas\n\n\n");
	//Resistência Térmica Parede Plana: R=e/(K*A)
	//Resistência Térmica Fluxo: R=1/(h*A)
	//Varias Resistências em Série: q(n)=(ΔT(n))/Rt
	    //Rt=Somatorio das Resistencias
	//Varias Resistências em Paralelo: q(n)=(ΔT(n))/(1/(Rt)
	    //(1/Rt)=Somatorio do Inverso das Resistencias
	printf("1. Resistencia Termica Parede Plana\n\n");
	printf("2. Resistencia Termica Fluxo\n\n");
	printf("3. Varias Resistencias em Serie\n\n");
	printf("4. Varias Resistencias em Paralelo\n\n");
	printf("Digite o numero da Equacao que deseja Calcular:\n");
	scanf("%d", &calculo_r);
	while(calculo_r==1)
	{
		printf("\n\nResistencia Termica Parede Plana\n\n\n");
		//R=e/(K*A)
		printf("\nDigite o valor da Espessura (em metros): ");
		scanf("%f", &e);
		printf("\nDigite o valor da Condutividade Termica (em W/m.K): ");
		scanf("%f", &K);
		printf("\nDigite o valor da Area (em metros quadrados): ");
		scanf("%f", &A);
		R=e/(K*A);
		printf("\n\nO valor da Resistencia e: %2.4f K/W", R);
		calculo=0;
	}
	while(calculo_r==2)
	{
		printf("\n\nResistencia Termica Fluxo\n\n\n");
		//R=1/(h*A)
		printf("\nDigite o valor da Constante (em W/m^2.K) ");
		scanf("%f", &h);
		printf("\nDigite o valor da Area (em metros quadrados): ");
		scanf("%f", &A);
		R=1/(h*A);
		printf("\n\nO valor da Resistencia e: %2.4f K/W", R);
		calculo=0;
	}
	while(calculo_r==3)
	{
	    int num_r;
	    float Rt=0;
		printf("\n\nVarias Resistencias Associadas em Serie\n\n\n");
		//q=(ΔT)/R(n)
		printf("\nDigite o Numero de Resistencias que estao associadas em Serie: ");
		scanf("%d", &num_r);
		float R[num_r];
		Rt=0;
		for(i=1;i<=num_r;i++){
		printf("\n\nInsira o valor da Resistencia (em K/W)\n");
		scanf("%f", &R[i]);
		Rt=Rt+R[i];
		//paralelo: Rt=Rt+(R[i]^-1)
		}
		printf("\nDigite o valor da Temperatura Inicial (em K): ");
		scanf("%f", &tinicial);
		printf("\nDigite o valor da Temperatura Final (em K): ");
		scanf("%f", &tfinal);
		deltat=tfinal-tinicial;
		qmin=deltat/Rt;
		printf("\n\nO valor do q e: %2.4f Watts", qmin);
		calculo=0;
	

	}
while(calculo_r==4)
	{
	    int num_r;
	    float Rt=0;
		printf("\n\nVarias Resistencias Associadas em Paralelo\n\n\n");
		//q=(ΔT)/(1/(R(n)))
		printf("\nDigite o Numero de Resistencias que estao associadas em Paralelo: ");
		scanf("%d", &num_r);
		float R[num_r];
		Rt=0;
		for(i=1;i<=num_r;i++){
		printf("\n\nInsira o valor da Resistencia (em K/W):\n");
		scanf("%f", &R[i]);
		Rt=Rt+(1/(R[i]));
		}
		printf("\nDigite o valor da Temperatura Inicial (em K): ");
		scanf("%f", &tinicial);
		printf("\nDigite o valor da Temperatura Final (em K): ");
		scanf("%f", &tfinal);
		deltat=tfinal-tinicial;
		qmin=deltat/(1/Rt);
		printf("\n\nO valor do q e: %2.4f Watts", qmin);
		calculo=0;
	

	}
}
}