import java.util.Scanner;
import java.util.ArrayList;
public class Java {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt(); 
        int ans=n;
        for(int i=1;i<n;i++){
            int val=scanner.nextInt();
            ans=ans^val;
            ans=ans^i;
        }
        System.out.println(ans);
        scanner.close();
    }
}
