class sta14{
    public static void main(String args[]){

     int x = 4;
    
    
    
        for(int i=1; i<=x; i++){

         int y = x-i;

            for(int j=1; j<=y; j++){
             System.out.print(" ");
            }
            for(int j=1; j<=i; j++){
             System.out.print("*");
            }
            for(int j=2; j<=i; j++){
             System.out.print("*");
            }System.out.println();

        }
        for(int i=x; i>=1; i--){

             int y = x-i;
   
               for(int j=1; j<=y; j++){
                System.out.print(" ");
               }
               for(int j=1; j<=i; j++){
                System.out.print("*");
               }
               for(int j=2; j<=i; j++){
                System.out.print("*");
               }System.out.println();
   
        }
    }
}