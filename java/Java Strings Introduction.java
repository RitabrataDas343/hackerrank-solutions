import java.io.*;
import java.util.*;

public class Solution {
    
    static String capitalize(String a){
        return a.substring(0,1).toUpperCase() + a.substring(1);
    }

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        sc.close();
        
        System.out.println(A.length() + B.length());
        System.out.println((A.compareTo(B) > 0) ? "Yes" : "No");
        System.out.println(capitalize(A) + " " + capitalize(B));
    }
}



