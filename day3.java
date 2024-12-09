public class day3 {
    public static void main(String[]args){
        int dice = 6;
        if (dice<=6) {
            System.out.println("not yatzy");
        }
        else{
            System.out.println("yatzy");
        }
        dice = dice+1;
        for (int i = 1; i <= 2; i++) {
            System.out.println("Outer: " + i); // Executes 2 times
            
            // Inner loop
            for (int j = 1; j <= 3; j++) {
              System.out.println(" Inner: " + j); // Executes 6 times (2 * 3)
            }
          } 
    }
}
