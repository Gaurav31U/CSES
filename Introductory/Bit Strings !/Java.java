import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Java {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int n = Integer.parseInt(be.readLine());
            long ans=1;
            long val=2;
            long md=1e9+7;
            while(n>0){
                if(n%2==1){
                    ans=(ans*val)%md;
                    n--;
                }else{
                    val=(val*val)%md;
                    n>>=1;
                }
            }
            System.out.println(ans);
            br.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}