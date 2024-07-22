import java.util.Scanner;
public class Java {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong(); 
        scanner.close(); 

        StringBuilder output = new StringBuilder();
        output.append(n);
        while (n != 1) {
            if (n % 2 == 1) {
                n = n * 3 + 1;
            } else {
                n = n / 2;
            }
            output.append(" ").append(n);
        }
        System.out.println(output.toString());
    }
}
