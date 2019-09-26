import java.util.Scanner;
	public class Ex1{
		public static void main(String args[]){
			
			Scanner leitor = new Scanner(System.in);

			double p = leitor.nextDouble();
			double h = leitor.nextDouble();
			
			double imc = p/h * 1/h;
			System.out.println("Seu IMC e igual a "+imc);
	
	}
}