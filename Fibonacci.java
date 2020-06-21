

public class Fibonacci {
	
	public static int of (int num) {
		if(num == 1 || num == 2) {
			return 1;
		}
		return of(num-1) + of(num-2);
	}
		
	
	public static void main(String[] args) {
		for(int i=1; i<=12; i++) {
			System.out.println("fib "+i+" = "+Fibonacci.of(i));
		}
	}
}
