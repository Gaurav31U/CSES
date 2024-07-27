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
            for(int i=1;i<=n;i++){
                long ans=0;
                ans=1l+(i-1)*(i-2)/2;
                ans=ans*(i-1)*(i+4);
                System.out.println(ans);
            }
            br.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}