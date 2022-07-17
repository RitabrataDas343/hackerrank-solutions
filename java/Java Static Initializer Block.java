import java.util.*;

class Solution {
    static Scanner scanner = new Scanner(System.in);
    static int B = scanner.nextInt();
    static int H = scanner.nextInt();
    static boolean flag = true;
    static{
        try{
            if (B <= 0 || H <= 0){
                flag = false;
                throw new Exception("Breadth and height must be positive");
            }
        } catch (Exception e){
            System.out.println(e);
        }
    };
    public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
	}//end of main
}//end of class

