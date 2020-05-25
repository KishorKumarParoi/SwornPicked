// 27-03-20
import java.math.BigInteger;
import java.util.Scanner;

public class UVa_Product {
    public static void main(String []args){

        Scanner cin = new Scanner(System.in);
        while(cin.hasNext()){

            BigInteger a,b;
            a = cin.nextBigInteger();
            b = cin.nextBigInteger();

            System.out.println(a.multiply(b));
        }
    }
}
