import java.util.Scanner;
import java.util.ArrayList;
public class Java {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next(); 
        int ans=0;
        for(int i=0;i<s.length();){
            char ch=s.charAt(i);
            int c=0;
            while(i<s.length() && ch==s.charAt(i)){
                i++;
                c++;
            }
            ans=Math.max(ans,c);
        }
        System.out.println(ans);
        scanner.close();
    }
}
