import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.ArrayList;

public class JavaStack {

    static boolean isBallanced(String paranString)
    {
        List<String>closingParan =  Arrays.asList("}", ")", "]");
        boolean isBallanced = true;
        ArrayList<String> stack = new ArrayList<String>();
        if(paranString.length()>0){
            for(int i = 0;i<paranString.length();i++){
                String paran = paranString.substring(i,i+1); 
                if(stack.size() == 0 && closingParan.contains(paran)){
                    isBallanced=false;
                    break;
                }else{
                    if(paran.equals("{") || paran.equals("(") || paran.equals("[")){
                        stack.add(paran);
                    }else{
                        String stackParan = stack.get(stack.size()-1);
                        if((stackParan.equals("{") && paran.equals("}")) || (stackParan.equals("(") && paran.equals(")") || (stackParan.equals("[") && paran.equals("]")))) {
                            stack.remove(stack.size()-1);
                        }else{
                            isBallanced = false;
                            break;
                        }
                    }
                }
            }  
        }
        if(stack.size()>0) isBallanced = false;
        return isBallanced;    
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            if(isBallanced(sc.nextLine())){
                System.out.println("yes");
            }else{
                System.out.println("no");
            }       
        }
        
    }
}
