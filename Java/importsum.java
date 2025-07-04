import java.net.SocketTimeoutException;
import java.util.*;
class importsum{
    public static void main(String args[]){

        // importing sum by user

        System.out.println("Please press two numbers to add");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        int sum = a + b;
        System.out.print("here is your sum :)     ");
        System.out.println(sum);




    }
}