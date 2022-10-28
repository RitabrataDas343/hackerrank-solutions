import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        ArrayList<ArrayList<Integer>> arr = new ArrayList<ArrayList<Integer>>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for(int i = 0; i < n; i++){
            int a = sc.nextInt();
            ArrayList<Integer> ar = new ArrayList<Integer>();
            for(int j = 0; j < a; j++){
                ar.add(sc.nextInt());
            }
            arr.add(ar);
        }
        
        int q = sc.nextInt();
        for(int i = 0; i < q; i++){
            int x = sc.nextInt();
            int y = sc.nextInt();
            if(x > arr.size()){
                System.out.println("ERROR!");
            } else {
                ArrayList<Integer> ar = arr.get(x - 1);
                if(y > ar.size()){
                    System.out.println("ERROR!");
                } else {
                    System.out.println(ar.get(y - 1));                    
                }
            }
        }
        sc.close();
        
    }
}
