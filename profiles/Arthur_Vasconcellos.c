/*
* Solicite do usuário dois inteiros, de 1 a 9.
* Crie uma matriz com duas dimensões, sendo a primeira dimensão do tamanho do primeiro valor dado
* pelo usuário, e a segunda dimensão do tamanho do segundo valor dado pelo usuário. 
* Solicite valor a valor de todos os elementos de sua matriz multidimensional,
* e no fim imprima toda a matriz de fácil leitura.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{	

int i, j, x, y; // Declaração das variáveis necessárias.

printf("Digite quantas linhas voce quer na sua matriz: \n");
scanf("%d", &x);
printf("Digite quantas colunas voce quer na sua matriz: \n");
scanf("%d", &y);

int matriz[x][y]; //Matriz recebe as quantidades declaradas pelo usuário (x e y).


/*Teremos 2 for nessa estrutura, um indicando a linha(i) e o outro a coluna (j).
Enquanto i e j forem menor do que a quantidade de linhas e colunas, o for efetuará o loop.
No loop, pedimos um numero informado pelo usuario, que irá ser recebido e armazenado
nas posições de i e j. Será executado for dentro do for e quando todas as
condições forem satisfeitas, o for irá acabar, resultando na matriz final.*/
for (i=0; i<x; i++)
{
  for (j=0; j<y; j++)
  {
  	
  	// Coloquei i + 1 e j + 1 pois a matriz computacional começa com 0 e normalmente 
  	// começamos pela linha 1 e coluna 1.
  	printf("Digite o numero na linha %d e coluna %d: \n", i+1, j+1);
	scanf("%d", &matriz[i][j]);
  }
}

printf("\n > Matriz resultante: \n\n");

// Cópia da função anterior, mas agora para exibir na tela.
for (i=0; i<x; i++)
{
  for (j=0; j<y; j++)
  {
  	printf("\t%d ", matriz[i][j]);
  }
  printf("\n");
}

return 0;

}
