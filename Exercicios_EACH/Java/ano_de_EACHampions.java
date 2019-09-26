import java.util.Scanner;
	public class Ex3{
		public static void main (String args[]){
			
			Scanner leitor = new Scanner(System.in);
			
			int ano = leitor.nextInt();
			while(ano >= 0){
			
				if(ano % 4 == 0){
					System.out.println("Eh ano de EACHampions");
				}
				else if(ano < 2008){
					System.out.println("Ano invalido");
				}
				else if(ano == 2012 ){
					System.out.println("Nao eh ano de EACHampions");
				}
				else{
					System.out.println("Nao eh ano de EACHampions");
				}
				
			}
		}
	}