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
            for(int i=0;i<n;i++){
                int a = Integer.parseInt(br.readLine());
                int b = Integer.parseInt(br.readLine());
                if((a+b)%3!=0 || 2*a<b || a>2*b){
                    System.out.println("NO");
                }else{
                    System.out.println("YES");
                }
            }
            br.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}