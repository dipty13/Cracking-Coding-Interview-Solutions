/*
 * 1.1
 * Implement an algorithm to determine if a string
 * has all unique characters. What if you can not use additional data structures?
 */
package Chapter1;

import java.util.Scanner;

/**
 *
 * @author Dipty
 */
public class One {
    public static void main(String[] args) {
        String input;
        boolean flag = true;
        Scanner in = new Scanner(System.in);
        input = in.next();
        boolean[] m = new boolean[256]; 
        for(int i=0;i<input.length();i++)
        {
            int c = input.charAt(i);
            if(m[c])
            {
                flag = false;
                break;
            }else{
                m[c] = true;
            }
        }
        
        if(flag)
        {
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
        
    }
    
}
