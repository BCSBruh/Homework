class A2p2 {
	public static void main(String[] args) {
		int command = Integer.parseInt(args[0]);
		int width = 1, height = 1, area = 1, min = 5, max = 100, count1 = 1, count2 = 0;
		
		do {
			width = (int)Math.floor(Math.random()*(max-min+1)+min);
			height = (int)Math.floor(Math.random()*(max-min+1)+min);
			area = width * height;
			
			if (area >= 2022) {
				System.out.println("Large random rectangle " + count1 + ":");
				System.out.println("width: " + width + "; height: " + height + "; area: " + area + ".");
				count1++;
			}else {
				count2++;
			}//End of if-else
		}while (count1 <= command);
		
		System.out.print("Number of discarded small rectangles is " + count2 + ".");
		
	}//End of main
}// End of class