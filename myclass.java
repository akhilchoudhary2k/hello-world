//java file
import java.util.Scanner;

class myclass
{
	public static void main(String args[])
	{
		System.out.println("Hello there :)");
		Scanner sc = new Scanner(System.in);
		System.out.print("What is your name : ");
		String name = sc.nextLine();
		System.out.println("Hello " + name +" this is a basic java file");
	}
}