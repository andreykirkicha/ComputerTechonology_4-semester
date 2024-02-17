/*
  Изменится ли время работы, если указать коллекции её первоначальный размер.
  Попробуйте измерить.
 */
// package my.java.collection;
import java.util.*;

/**
 *
 * @author mipt
 */

public class JavaCollection 
{
    public static Integer numA = 0;
    
    public static void p(String s){System.out.println(s);}
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        ArrayList<String> alist = new ArrayList();
        alist.add("a1");
        alist.add("ac1");
        alist.add("abbb1");
        alist.add("aaa1");
        alist.add("avcxz1");
        alist.add("aqqaqaw");
        p("Размер alist "+ alist.size());

        alist.forEach(
         (s) -> 
            {
                for (char c : s.toCharArray()) if (c == 'a') numA++;
            }
                      );  
        p(numA.toString());
    }
    
}
