#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num_bact,a,b,c,i;
	
	printf("\tPrograma que classifica bactérias");
	printf("\nDigite o número de bactérias a serem analisadas:");
	scanf("%d",&num_bact);
		
	for(i=0;i<num_bact;i++){
		
		printf("\nA bactéria faz fotossíntese?\n[0]=Sim\n[1]=Não\n");
		scanf("%d",&a);
		
		switch(a){
			case 0:
				printf("Não faz fotossíntesse\n");
			break;
			case 1:
				printf("Faz fotossíntese\n");
			break;
			default:
				printf("Esse número não existe!!!\n");
			break;
		}
	
		printf("\nFormato da bacteria:\n[0]=Esférica\n[1]=Cilíndrica\n[2]=Espiral\n");
		scanf("%d",&b);
		
		switch(b){
			case 0:
				printf("É esférica.\n");
			break;
			case 1:
				printf("É cilíndrica.\n");
			break;
			case 2:
				printf("É espiral.\n");
			break;
			default:
				printf("Esse número não existe!!!\n");
			break;
		}
		
		
		printf("\nNúmero de flagelos:\n[0]= 1 ou nenhum\n[1]= 300 a 500\n[2]= 100 a 200\n");
		scanf("%d",&c);
		
		switch(c){
			case 0:
				printf("Possui 1 ou nenhum flagelo\n");
			break;
			case 1:
				printf("Possui 300 a 500 flagelos\n");
			break;
			case 2:
				printf("Possui 100 a 200 flagelos\n");
			break;
			default:
				printf("Esse número não existe!!!\n");
			break;
		}
		
		if(a==1 && b==0 && c==0){
			printf("Bactéria se encaixa no Grupo 1\n");
		}
		else{
			if(a==1 && b==1 && c==0){
				printf("Bactéria se encaixa no Grupo 1\n");
			}
			else{
				if(a==0 && b==0 && c==1){
					printf("Bactéria se encaixa no Grupo 2\n");
				}
				else{
					if(a==0 && b==2 && c==1){
						printf("Bactéria se encaixa no Grupo 2\n");
					}
					else{
						if(a==0 && b==0 && c==2){
							printf("Bactéria se encaixa no Grupo 3\n");
						}
						else{
							if(a==0 && b==1 && c==2){
								printf("Bactéria se encaixa no Grupo 3\n");
							}
							else{
								if(a==0 && b==2 && c==2){
									printf("Bactéria se encaixa no Grupo 3\n");
								}
								else{
									if(a==1 && b==0 && c==2){
										printf("Bactéria se encaixa no Grupo 3\n");
									}
									else{
										if(a==1 && b==1 && c==2){
											printf("Bactéria se encaixa no Grupo 3\n");
										}
										else{
											if(a==1 && b==2 && c==2){
												printf("Bactéria se encaixa no Grupo 3\n");	
											}
											else{
												printf("Não se encaixa em nenhum dos grupos\n");
											}
										}
									}
								}
							}
						}
					}
				}
			}		 	
		}
	}

}
