class stahom1{
    public static void main(String args[]){

        int x = 5;
        for(int i=1; i<=x; i++){

            for(int j=1; j<=x-i; j++){
                System.out.print(" ");
            }
            for(int j=1; j<=i; j++){
                System.out.print(j+" ");
            } System.out.println();

        }
    }

}