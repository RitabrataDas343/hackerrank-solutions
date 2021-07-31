import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int k = 1;
            long sum = a;
            for (int j = 0; j < n; j++){
                sum = sum + k * b;
                System.out.print(sum + " ");
                k = k * 2;
            }
            System.out.println();
        }
        in.close();
    }
}
