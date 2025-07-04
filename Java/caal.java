import java.util.*;
class caal{
    public static void main(String args[]){


        System.out.println("Please press two numbers to Calculate");
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        System.out.println("Please select only 1 or 2 or 3 or 4 or 5");
        System.out.println("2 for subraction");




        int z = sc.nextInt();

        switch (z){

            case 1 : System.out.println(x+y);
            break;

            case 2 : System.out.println(x-y);
            break;

            case 3 : System.out.println(x*y);
            break;

            case 4 : if(y==0){
                System.out.println("ops, not defined");
            } else {System.out.println(x/y);
            }
            break;

            case 5 : System.out.println(x%y);
            break;
            default : System.out.println("ops wrong choise");
        }
    }
}