import java.util.*;

class sta13{
    public static void main(String args[]){

        // Scanner sc = new Scanner(System.in);
        // int t = sc.nextInt();
        int x = 5;

        for(int i=1; i<=5; i++){

            for(int j=1; j<=x-i; j++){
                System.out.print(" ");
            }
            for(int j=i; j>=1; j--){
                System.out.print(j);
            }
            for(int j=2; j<=i; j++){
                System.out.print(j);
            }System.out.println();
        }


    }
}