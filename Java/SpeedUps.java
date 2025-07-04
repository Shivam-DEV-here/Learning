import java.util.*;

class SpeedUps{
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);

       System.out.println("3 day Quantity =");
       int a = sc.nextInt();
       int aaa = a*3;
       

       
       System.out.println(" 24h Quantity =");
       int b = sc.nextInt();

       System.out.println("15h Quantity =");
       int c = sc.nextInt();
       int cc = c*15;
       int ccc = cc/24;

       System.out.println("8h Quantity =");
       int d = sc.nextInt();
       int dd = d*8;
       int ddd = dd/24;

       System.out.println("3h Quantity =");
       int e = sc.nextInt();
       int ee = e*3;
       int eee = ee/24;

       System.out.println("1h Quantity =");
       int f = sc.nextInt();
       int fff = f/24;

       System.out.println("30min day Quantity =");
       int g = sc.nextInt();
       int gg = g/2;
       int ggg = gg/24;

       System.out.println("15min Quantity =");
       int h = sc.nextInt();
       int hh = h*4;
       int hhh = hh/24;
       
       System.out.println("10min Quantity =");
       int i = sc.nextInt();
       int ii = i*15;
       int iii = ii/24;

       
       int zzz = aaa + b + ccc + ddd + eee + fff + ggg + hhh + iii;


       System.out.println(zzz);
       



    }
}