import java.util.*;

class swith{
    public static void main(String args[]){

        System.out.println("please press only 1 or 2 or 3");

        Scanner sc = new Scanner(System.in);
        int button = sc.nextInt();

        
        switch (button) {

            case 1 : System.out.println("Chocolate");
            break;

            case 2 : System.out.println("Mooncake");
            break;
            
            case 3 : System.out.println("JalJeera");
            break;

            default : System.out.println("Monkey press only 1 2 or 3");
        }
    }

}