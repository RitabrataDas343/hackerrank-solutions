import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int i = 0;
        while(scanner.hasNext()){
            i++;
            String myString = scanner.nextLine(); 
            System.out.println(i + " " + myString);
        }
        scanner.close();
    }
}
