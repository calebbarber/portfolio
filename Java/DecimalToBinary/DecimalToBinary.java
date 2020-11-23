import java.util.Scanner;

public class DecimalToBinary {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		
		System.out.print("Enter decimal number: ");
		n = sc.nextInt();
		System.out.print("Binary representation of " + n + ": ");
		System.out.println(Integer.toBinaryString(n));
	}
}
