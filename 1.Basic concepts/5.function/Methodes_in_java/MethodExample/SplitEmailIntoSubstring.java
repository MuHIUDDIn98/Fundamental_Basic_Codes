public class SplitEmailIntoSubstring {

    static String parseName(String email){

        String name = null;
        int index = email.indexOf("@");
        name = email.substring(0,index);
    
        return name;
    }
    
    
    public static void main(String args[]){

       System.out.println(parseName("muhiuddin@gmail.com"));
    }

    
}
