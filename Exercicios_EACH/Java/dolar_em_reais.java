import java.util.Scanner;
public class PrimeiroProjeto{
	public static void main(String args[]){
		
		Scanner leitor = new Scanner(System.in);
		
		System.out.println("Digite o valor em dolares:");
		int dolares = leitor.nextInt();
		
		System.out.println("Digite o valor do dolar:");
		double valordolar = leitor.nextDouble();
		
		double reais = dolares * valordolar;
		System.out.println(dolares+" dolares e igual a "+reais+" reais.");
		
	}
}