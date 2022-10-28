import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), sum, count = 0, i, j;
        int [] arr = new int[n];
        for(i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        sc.close();
        
        for(i = 0; i < n; i++){
            sum = arr[i];
            if(sum < 0){
                count++;
            }
            for(j = i + 1; j < n; j++){
                sum += arr[j];
                if(sum < 0){
                    count++;
                }
            }
        }
        
        System.out.println(count);
    }
}