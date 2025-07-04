class sta11{
    public static void main(String args[]){

        int x = 5;

        for(int i=1; i<=x; i++){

            int y = x-i;

            for(int j=1; j<=y; j++){
                System.out.print(" ");
            }
            for(int j=1; j<=x; j++){
                System.out.print("*");
            } System.out.println();
        }
    }
}