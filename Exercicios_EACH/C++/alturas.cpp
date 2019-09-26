#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n,i;
	float altura;
	
	printf("\tAltas Pesquisas\n");
		
	printf("Quantidade de entrevistados:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Digite uma altura:");
		scanf("%f",&altura);
	}                                      //como coloco as alturas em ordem decresente?
	
	
	system("PAUSE");
	return 0;	
}
