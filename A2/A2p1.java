import java.util.Scanner;

class A2p1 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		int n = 0, user = 0;
		int size = args.length;
		
		for (int i = 0; i < size; i++) {
			int command = Integer.parseInt(args[i]);
			n += command;
		}//End of for loop
		
		user = 0;
		
		while (input.hasNextInt()) {
			user = input.nextInt();
			n = n + user;
		}
		
		System.out.print("The sum is " + n + ".");
		
		//System.out.print(n); Debug
	}
}