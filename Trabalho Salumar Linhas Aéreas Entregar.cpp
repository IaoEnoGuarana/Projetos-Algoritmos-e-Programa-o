/*Salumar Linhas A�reas

Aluno: Ian Enes de Almeida Souza
Matr�cula: UC19106349
Disciplina: Algoritmos e Programa��o
Professora: Joyce Siqueira

Tive dificuldades para entender arrays. S� consegui usar vetores em alguns casos e n�o consegui usar matrizes.
O trabalho est� incompleto.

Tenho chance de fazer a recupera��o professora?*/


#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>


int main();
void voltar1();
void reserv_passagem();

int qtde_assento, volt_menu1, cont_id_passagem;
char destino [30];
float preco_passagem;

int main (){
	
	int menu, cont_menu, i, qtde_pessoa, qtde_menor_idade, qtde_assento, volt_menu_criar_voo, preco_total, id_reserva[200], reserva, i_r, poltrona_reservada [200];
	char ds = 'd', vetor [200], destino [30]; //[30] buffer para string n�o ser nula
	float preco_passagem;
	
	
	setlocale(LC_ALL,"");
	
	system ("cls");
	
	printf ("|Menu Criar Voo|");
	printf ("\nQual o nome do destino?\n\n");
	scanf ("%s", &destino);
	
	printf ("Qual a quantidade de assentos do avi�o?\n\n\t|M�nimo: 90 |\n\t|M�ximo: 200|\n\nQuantidade de assentos --> ");
	scanf ("%d", &qtde_assento);
	
	while (qtde_assento < 90 || qtde_assento > 200){
		system ("cls");
		printf ("\n\nLimite excedido. Por favor tente novamente\n\n");
		
		printf ("Qual a quantidade de assentos do avi�o?\n\n\t|M�nimo: 90 |\n\t|M�ximo: 200|\n\nQuantidade de assentos --> ");
		scanf ("%d", &qtde_assento);
	}
	
	
	for (i = 0; i < qtde_assento; i++){
		
		vetor [i] = ds;
		
		printf ("%d %c\t", i + 1, vetor[i]);
		
	}
	
	
		
	printf ("\n\nQual ser� o pre�o da passagem? ");
	scanf ("%f", &preco_passagem);
	
	while (preco_passagem < 0){
		printf ("\nPre�o inv�lido. Por favor tente novamente\n");
		printf ("\n\nQual ser� o pre�o da passagem? ");
		scanf ("%f", &preco_passagem);
	}
	printf ("O destino �: %s\n\nA quantidade de assentos �: %d\n\nO pre�o da passagem �: %.2fR$\n\n\t Para ir ao menu principal aperte qualquer tecla...\n\n", destino, qtde_assento, preco_passagem);
	volt_menu1 = getch() - 48;
	system ("cls");

	do{
	

	
	printf ("\t\t\t\t\t\     |Selecione a op��o que deseja|\n");
	printf ("|--------------------------------------------| 1. Verificar Voo           |--------------------------------------------|\n");
	printf ("|--------------------------------------------| 2. Efetuar Reserva         |--------------------------------------------|\n");
	printf ("|--------------------------------------------| 3. Cancelar Reserva        |--------------------------------------------|\n");
	printf ("|--------------------------------------------| 4. Confirmar Reserva       |--------------------------------------------|\n");
	printf ("|--------------------------------------------| 5. Sair do Programa        |--------------------------------------------|\n");
		
		
		menu = getch() - 48;	


	if (menu == 1 || menu == 2 || menu == 3 || menu == 4 || menu == 5){
	switch (menu){
		
		case 1:
			system ("cls");
			printf ("Menu Verificar Voo"); // Colocar vari�vel verificar voo
			break;
		case 2:
			system ("cls");
			printf ("Ol�, voc� escolheu a op��o Reservar Passagem.\n\n");
	
			printf ("\n\nQuantidade de assentos dispon�veis: %d\n\n", qtde_assento);
			
			printf ("Deseja reservar passagem para quantas pessoas? ");
			scanf ("%d", &qtde_pessoa);
			
	
			while (qtde_pessoa  < 1 || qtde_pessoa > qtde_assento){
				
		
				printf ("\n\n\nQuantidade inv�lida. Por favor tente novamente.\n\n");
				printf ("Quantidade de assentos dispon�veis: %d\n\n", qtde_assento);
				printf ("Deseja reservar passagem para quantas pessoas? ");
				scanf ("%d", &qtde_pessoa); // colocar vari�vel efetuar reserva
			}
			
			printf ("\nQuantas dessas pessoas tem menos de 5 anos?");
			scanf ("%d", &qtde_menor_idade);
	
			while (qtde_menor_idade < 0 || qtde_menor_idade > qtde_pessoa){
				printf ("\nImposs�vel, tente novamente.\n");
				printf ("\nQuantas dessas pessoas tem menos de 5 anos?");
				scanf ("%d", &qtde_menor_idade);
			}
			
			if (qtde_menor_idade < 0){
			preco_total = preco_passagem * qtde_pessoa;
		}
			else if(qtde_menor_idade > 0){
			preco_total = (preco_passagem / 2 * qtde_menor_idade) + preco_passagem * (qtde_pessoa - qtde_menor_idade);	
			}
			
			id_reserva[i]++;
			
			for (i = 0; i < qtde_pessoa; i++){
				printf ("\nDigite a poltrona do passageiro %d: ", i + 1);
				scanf ("%d", &poltrona_reservada[i]);
			}
			
			for (i = 0; i < qtde_pessoa; i++){
				printf ("----------------------------------------------------\nA poltrona do passageiro %d �: poltrona %d \n", i + 1, poltrona_reservada[i]);
			}
			
		
			printf ("\n\nN�mero de passagens: %d  \n", qtde_pessoa);
			printf ("Pre�o total: %d R$\n", preco_total);
			printf ("Destino: %s\n", destino);
			printf ("ID da reserva: %d\n\n", id_reserva);
			
			
			system ("pause");
			system ("cls");
				
			break;
			
		case 3:
			system ("cls");
			printf ("Ol�, voc� escolheu a op��o Cancelar Reserva.\n\n");
			
			printf ("\nDigite o ID da reserva que deseja cancelar:\n");
			scanf ("%d", &reserva);
			
			printf("\n id 1: %d\nid 2: %d\nid 3: %d\nid 4: %d\nid 5: %d\n", id_reserva[0],id_reserva[1],id_reserva[2],id_reserva[3],id_reserva[4]);
			if ( id_reserva[0] == reserva){
				id_reserva [0]= 0;
				
				printf ("Reserva cancelada com sucesso: ");
			}
			else if ( id_reserva[1] == reserva){
				id_reserva [1]= 0;
				
				printf ("Reserva cancelada com sucesso: ");
			}
			else if (id_reserva[2] == reserva){
				id_reserva [2]= 0;
				
				printf ("Reserva cancelada com sucesso: ");
			}
			else if (id_reserva[3] == reserva){
				id_reserva [3]= 0;
				
				printf ("Reserva cancelada com sucesso: ");
			}
			else if  (id_reserva[0] == reserva){
				id_reserva [4]= 0;
				
				printf ("Reserva cancelada com sucesso: ");
			}
			
			else printf ("\nN�o h� reserva para cancelar");
			
			system ("pause");
			system ("cls");
			
			break;
		case 4:
			printf ("Menu Confirmar Reserva"); // colocar variavel confirmar reserva
			break;
			
		default: 
			printf ("\n\t\t At� logo! \n\n|Pressione qualquer tecla para encerrar o programa|\n");
			menu == 5;
	}
}
	else {
		system ("cls");
		printf ("\n\t|Op��o inv�lida. Tente novamente|");

}
	
	
} while (menu >0 && menu <5);
	
	

	return 0;
	
}

