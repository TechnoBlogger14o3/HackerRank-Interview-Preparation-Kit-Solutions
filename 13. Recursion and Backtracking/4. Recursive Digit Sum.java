import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String f = s.next();
        int n1 = s.nextInt();
        int n0=0;
        char[] c = f.toCharArray();
        for(char i:c){
            n0+=Character.getNumericValue(i);
            n0%=9;
        }
        int n = 9;
        if(((n0%n)*(n1%n))%n==0)
            System.out.println(n);
        else
            System.out.println(((n0%n)*(n1%n))%n);

    }

}
