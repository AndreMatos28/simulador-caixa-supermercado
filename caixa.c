// André Nunes de Matos

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (){
	 setlocale(LC_ALL, "Portuguese");

	int contA = 1, contB, contC, cod, quant [10] = {0};
	float total [10], pagar = 0, pago = 0, valorF = 0, troco, ver, descont;
	float precoUni [10] = {5.50, 7.25, 4.99, 2.15, 3.20, 6.45, 13.50, 12.10, 2.89, 6.45};
	char nome [55];
	char prod [10][17] = {"Arro", "feijão", "Açucar", "Sal", "leite", "Macarrão", "Erva-mate", "Café", "Farinha de Trigo", "Ervilha"};



	printf(" Nome do cliente: ");
   	gets(nome);
	fflush(stdin);


	printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
	scanf("%i", &cod);

//----------------------------------------------------------------------------------------
	while (cod != 0){ //condição de saida do sistema{

		if(cod==1){ //contador de vendas de produtos
				quant[0]++;
				printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
				scanf("%i", &cod);
		}else if(cod==2){
				quant[1]++;
				printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
				scanf("%i", &cod);
		}else if(cod==3){
				quant[2]++;
				printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
				scanf("%i", &cod);
		}else if(cod==4){
				quant[3]++;
				printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
				scanf("%i", &cod);
		}else if(cod==5){
				quant[4]++;
				printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
				scanf("%i", &cod);
		}else if(cod==6){
				quant[5]++;
				printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
				scanf("%i", &cod);
		}else if(cod==7){
				quant[6]++;
				printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
				scanf("%i", &cod);
		}else if(cod==8){
				quant[7]++;
				printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
				scanf("%i", &cod);
		}else if(cod==9){
				quant[8]++;
				printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
				scanf("%i", &cod);
		}else if(cod==10){
				quant[9]++;
				printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
				scanf("%i", &cod);
		}else{
		printf("\n\n 1 = Arro, 2 = feijão, 3 = Açucar, 4 = Sal, 5 = leite, 6 = Macarrão, 7 = Erva-mate, 8 = Café, 9 = Farinha de Trigo, 10 = Ervilha \n 0 = Se desejar sair \n Digite o Código: " );
		scanf("%i", &cod);
	}

//----------------------------------------------------------------------------------------
	}


	system("cls"); // resetar tela
	printf("\n\t\t\tMERCADO DO MARQUES  ");
	printf("\n Cliente: %s",nome);
	printf("\n -------------------------------------------------------------------------");
	printf("\n Cód. \tQtd \tProduto\t\t\tPreçoUnitário\t\tTotal");
//----------------------------------------------------------------------------------------
// loop que imprime cada linha com total de quantidades por produto, valor unitário e valor total

	for(contC=0;contC<10;contC++){
        if (quant[contC]>0){
        total[contC]=quant[contC]*precoUni[contC];
        printf("\n %i  \t%i \t%-18s \tR$ %.2f \t\tR$ %.2f", contA, quant[contC],prod[contC],precoUni[contC], total[contC]);
       }
        contA++	;
	}
//----------------------------------------------------------------------------------------
//calculadora do total a pagar sem desconto
	for(contB=0;contB<10;contB++){
		pagar = pagar+total[contB];
	}
//----------------------------------------------------------------------------------------
//calculadora de desconto 5% - 10% - 15%
	if(pagar>=20 && pagar<30){
			descont= pagar*0.05;
		}else if(pagar>=30 && pagar<50){
			descont= pagar*0.10;
		}else if(pagar>=50){
			descont= pagar*0.15;
		}

//----------------------------------------------------------------------------------------
	printf(" ");
	printf("\n\n");
	printf("\n -------------------------------------------------------------------------");
	printf("\n \t\t\t\t\t\tTotal: \t\tR$ %.2f", pagar);
	printf("\n \t\t\t\t\t\tDesconto: \tR$ %-6.2f", descont);
	printf("\n \t\t\t\t\t\tValor Final: \tR$ %-6.2f", valorF=pagar-descont); //calculo para o valor final aplicando o desconto
	printf("\n\n");
	printf("\n -------------------------------------------------------------------------");

	printf("\n Valor pago pelo cliente: ");
	scanf("%f", &pago);

	printf("\n \t\t\t\t\t\tPago: \tR$ %-6.2f", pago);
	printf("\n \t\t\t\t\t\tTroco: \tR$ %-6.2f", troco=pago-valorF);	// calculo do troco do cliente

	getch();
	return 0;
}

