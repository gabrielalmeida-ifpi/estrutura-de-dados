#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 

Aluno lista[30];
int maximo = 30;
int quant_alunos = 0;

void incluirDesordenado(Aluno e){
	int maximo = 30;

	if (quant_alunos < maximo) {
		lista[quant_alunos] = e;
		cout<<"Digite a matrícula: ";
		cin>>e.mat;

		cout<<"Digite o nome do aluno: ";
		cin>>e.nome;

		quant_alunos++;
	}
	else {
		cout<<"Foi atingido o número máximo de alunos.";
	}
}

//retorna a posicao do elemento procurado
int procura(int mat){
	int i = 0;
	while (i < maximo) {
		if (lista[i].mat == mat) {
			return i;
		}
	}

	cout<<"Matrícula não encontrada.";
	return 0;
	
}

//recebe a posicao e imprime o elemento na tela
void mostrar(int pos){
	cout<<"Matrícula: "<<lista[pos].mat;
	cout<<"Nome: "<<lista[pos].nome;
}

//mostra TODOS os elementos da lista
void mostra(){
	int i = 0;
	while (lista[i].mat != 0)
	{
		cout<<"Matrícula: "<<lista[i].mat;
		cout<<"Nome: "<<lista[i].nome;
	}
		
}

//estrategia 1: colocar o ultimo elemento da lista na posicao do elemento removido
void remover00(int mat){
	int pos_alvo = procura(mat);
	int ult_posicao = maximo - 1;

	lista[pos_alvo] = lista[ult_posicao];

	quant_alunos--;
}

//estrategia 2: mover TODOS os elementos que estao APOS  o elemento que deve ser removido UMA POSICAO A FRENTE.
void remover01(){
}

main(){
	int cont;
	int mat;

   	do {
      	printf("\n\n1 - Incluir Desordenado ");
      	printf("\n2 - Procurar ");
      	printf("\n3 - Mostrar Único ");
      	printf("\n4 - Mostrar Todos ");
      	printf("\n5 - Remover00 ");
      	printf("\n0 - Encerrar ");
      	printf("\nDigite a Opcao Desejada: ");
      	scanf("%d",&cont);

        switch(cont) {
         	case 1:
			 	Aluno* novo_aluno = new Aluno();
			 	incluirDesordenado(*novo_aluno); 	
				break;
         	case 2:
			 	printf("Digite uma matrícula para procurar: ");
			 	cin>>mat;
				int pos_alvo = procura(mat);
				cout<<"Nome:"<<lista[pos_alvo].nome;
				break;
         	case 3:
				int pos;
				printf("Digite uma posição para procurar: ");
				cin>>pos;
				mostrar(pos); 
				break;
         	case 4:
				mostra(); 
				break;

         	case 5:
				printf("Digite uma matrícula para remover: ");
				cin>>mat;
				remover00(mat);
				break;
				}
				
				} while (cont != 0);		
}
	

	
	
	

