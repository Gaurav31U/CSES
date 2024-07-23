import java.util.Scanner;
import java.util.ArrayList;
public class Java {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Integer n = scanner.nextInt(); 
        scanner.close();
        StringBuilder arr = new StringBuilder();
        if(n==2 || n==3){
            System.out.println("NO SOLUTION");
        }else if(n==4){
            System.out.println("2 4 1 3");
        }else{
            for(int i=n;i>=1;i-=2){
                arr.append(i).append(" ");
            }
            for(int i=n-1;i>=1;i-=2){
                arr.append(i).append(" ");
            }
            System.out.print(arr.toString());
        }
    }
}
