/*  1.4
*   Write a method to decide if two strings are anagrams or not.
*/
package Chapter1;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author Dipty
 */
public class Four {
    
    boolean isAnagram(String s1,String s2)
    {
       char[] c1 = s1.toCharArray();
       char[] c2 = s2.toCharArray();
       Arrays.sort(c1);
       Arrays.sort(c2);
       
        String a = new String (c1);
        String b = new String (c2);
        //System.out.println(a+" "+b);
        return a.equals(b);
    }
    public static void main(String[] args) {  
         String input1,input2;
        Scanner in = new Scanner(System.in);
        input1 = in.nextLine();
        input2 = in.nextLine();
        Four t = new Four();
        System.out.println(t.isAnagram(input1,input2));
    }
    
}
