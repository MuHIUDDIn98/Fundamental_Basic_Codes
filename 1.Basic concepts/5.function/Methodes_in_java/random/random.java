package random;
public class random {

    public static void main(String args[]){
        int max = 100;
        int min = 0;
        int i;
        for(i=0;i<100; i++){
             int  rand = (int)(Math.random()* (max - min + 1)) + min;
            System.out.print((rand)+" ");

        }
        
    }
    
}
