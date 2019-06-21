import java.util.*

public class JonathanZhangHelloScript {
	public static void main(String[]args) {
		Scanner input = new Scanner(System.in);
		System.out.println("DO YOU WANT HELLO WORLD?");
		System.out.println("Type 1 for yes and 2 for no. Don't type 2 please.");
		int num = input.nextInt();
		if (num == 1) {
			System.out.println("Hello World");
		}
		else if (num == 2) {
			System.out.println("No Hello 4 u");
		}
		else {
			System.out.println("NaN");
		}
	}
}