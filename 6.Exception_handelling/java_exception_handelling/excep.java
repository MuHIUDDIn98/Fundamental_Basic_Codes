

public class excep {
    public static void main(String args[]){
        try{

            int x = 10/0;
            System.out.println(x);
        }
        catch(Exception e){
            e.printStackTrace();
        }
        finally{
            System.out.println("Finally block executed");
        }
    }    
}
