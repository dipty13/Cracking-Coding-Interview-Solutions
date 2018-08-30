package Chapter1;

import java.util.Scanner;

/*1.2
 * Write code to reverse a C-Style String.
 * (C-String means that “abcd” is represented as five characters, including the null character.)
 */

/**
 *
 * @author Dipty
 */
public class Two {
    String reverseString(String s)
    {
        int i = 0, j = s.length() - 1;
        if(s.isEmpty())
        {
            return s;
        }
        char[] str = s.toCharArray();
        while(i < j)
        {
            char tmp = str[i];
            str[i] = str[j];
            str[j] = tmp;
            i++;j--;
            
        }
        return new String(str);
    }
    public static void main(String[] args) {  
         String input;
        Scanner in = new Scanner(System.in);
        input = in.nextLine();
        Two t = new Two();
        System.out.println(t.reverseString(input));
    }
}
