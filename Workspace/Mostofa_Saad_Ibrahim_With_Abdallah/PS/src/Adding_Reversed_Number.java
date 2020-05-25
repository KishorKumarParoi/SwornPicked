// 27-03-20
import java.math.BigInteger;
import java.util.Scanner;

public class Adding_Reversed_Number {
    public static void main(String []args){

        int tc;
        BigInteger a,b,sum;
        StringBuffer sb;

        Scanner cin = new Scanner(System.in);
        tc = cin.nextInt();

        while(tc>0){

            sb = new StringBuffer(cin.next());
            sb = sb.reverse();
            a = new BigInteger(sb.toString());
            sb = new StringBuffer(cin.next());
            sb = sb.reverse();
            b = new BigInteger(sb.toString());

            sum = a.add(b);
            sb = new StringBuffer(sum.toString());
            sb = sb.reverse();
            sum = new BigInteger(sb.toString());

            System.out.println(sum);
            tc--;
       }
    }
}
