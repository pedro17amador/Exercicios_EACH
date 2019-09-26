import java.util.Scanner;
class teste{
	public static void main(String args[]){
		
		Scanner in = new Scanner(System.in);
		
		int a = in.nextInt();
		int t = in.nextInt();
		int r = in.nextInt();
		
		for(int i=0; i<t; i++){
			System.out.print(a+" ");
			a = r*a;
		}
	}
	
}

