#include <stdio.h> 
#include <locale.h>
#include <stdlib.h>
#include <Windows.h>

/* Esse programa serve para o usuario calcular algumas coisas uteis para sua vida, como rendimendo na poupan�a, imposto de renda, etc */

int main(){
	
	
	
	setlocale(LC_ALL, "Portuguese");

	
	int op; 
	float baseIR, IR, mes, total_consorcio, mes_consorcio, ano, txpoup, vlrpoup, rend; 

	printf("Bem vindo a Caulculadora F�cil!\n\n");  // Inicializa��o do programa
	
	printf("Aperte ENTER para come�ar.\n");
	
	getchar();
	
	system("cls"); 
	
	
	do{
		
			printf("\nEscolha uma das op��es para c�culo."); // listagem de op��es de ferramentas para o usu�rio 
			printf("\n1 - Calcular Imposto de Renda.");
			printf("\n2 - Calcular Cons�rcio Pessoal.");
			printf("\n3 - Calcular rendimento na Pupan�a.\n");
			scanf("%d", &op);
			
			if(op != 1 && op != 2 && op != 3){
				printf("\nOp��o inv�lida, por favor, digite uma op��o v�lida...\n");
			}
			
	Sleep(1900);

	system("cls"); 
						
	} while (op != 1 && op != 2 && op != 3);	
	
		
	system("cls"); 
	
	switch(op){
		
		case 1:                                       // primeiro caso, calcular o IP atualizado 2023
			printf("\nCalcular Imposto de Renda.");  
			printf("\nInforme a base de c�lculo:");
			scanf("%f", &baseIR);
			
			if (baseIR < 1903.99){
				printf("\nVoc� est� isento(a) de pargar IR!\n");
				break;
			}
			if (baseIR > 1903,99 && baseIR < 2826.65){
				printf("\nSua al�quota � de 7,5%%");
				IR = baseIR * 7.5; 
				IR = IR * 0.01;
				printf("\nO valor a se pargar ao IR � de: R$%3.2f\n", IR);
			}	
			if (baseIR > 2826.65 && baseIR < 3751.05){
				printf("\nSua al�quota � de 15%%");
				IR = baseIR * 15.0;
				IR = IR * 0.01;
				printf("\nO valor a se pagar ao IR � de: R$%3.2f\n", IR); 
			}
			if (baseIR > 3751.05 && baseIR < 4664.68){
				printf("\nSua al�quota � de 22,5%%");
				IR = baseIR * 22.5;
				IR = IR * 0.01;
				printf("\nO valor a se pagar ao IR � de: R$%3.2f\n", IR);
			}
			if (baseIR > 4664.68){
				printf("\nSua al�quota � de 27,5%%");
				IR = baseIR * 27.5;
				IR = IR * 0.01;
				printf("\nO valor a se pagar ao IR � de:R$%3.2f\n", IR);
			}
	system("pause");
	
			break;		
			
		case 2:                                      // segundo caso, calcular consorcio pessoal 
			printf("\nCalcular Cons�rcio Pessoal.");
			printf("\nDigite o valor total que deseja acumular:");
			scanf("%f", &total_consorcio);
	
	system("cls");
			
			printf("\nAgora digite quanto deseja guardar por m�s:");
			scanf("%f", &mes_consorcio); 
			
			mes = total_consorcio / mes_consorcio; 
			ano = mes / 12; 
			
			printf("\nGuardando um total de R$%3.2f por m�s, voc� levar� %3.1f m�s(eses) para completar o valor desejado.", mes_consorcio, mes);
			printf("\nIsso equivale a %3.1f anos.", ano);
			printf("\n\nValor desejado: %2.2f\n", total_consorcio);
	
	system("pause");
	
			break;
				
		case 3:                                    // terceiro caso, calcular rendimento na poupan�a 
			printf("\nCalcular Rendimento da Poupan�a.");
			printf("\nInforme a taxa de rendimento da poupan�a A.A."); 
			scanf("%f", &txpoup);
			
			printf("\nAgora informe a quantia depositada em poupan�a.");
			scanf("%f", &vlrpoup);
			
			rend = vlrpoup * txpoup; 
			rend = rend * 0.01;
			
			printf("\nO seu rendimento na poupan�a � de R$%3.2f ao fim de um ano.\n", rend); 
	
	system("pause"); 
			
			break; 	
			
	}
	
}

