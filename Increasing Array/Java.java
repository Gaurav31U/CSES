import java.util.Scanner;
import java.util.ArrayList;
public class Java {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Integer n = scanner.nextInt(); 
        Long ans=0L;
        int last=-1;
        for(int i=0;i<n;i++){
            Integer val=scanner.nextInt();
            if(last==-1)last=val;
            if(last>val)ans=ans+last-val;
            else last=val;
        }
        System.out.println(ans);
        scanner.close();
    }
}
