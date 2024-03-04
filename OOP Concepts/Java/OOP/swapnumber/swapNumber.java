public class swapNumber {
    int s;
    int t;
    public static void swapa(int a, int b){
        //pass by value
        int temp = a;
        a = b;
        b = temp;

    }
    public static void swapa(swapNumber p){
        int temp = p.s;
        p.s = p.t;
        p.t = temp;

    }

    public static void main(String[] args){
        swapNumber sw = new swapNumber();
        sw.s = 20;
        sw.t = 30;
        swapa(sw.s, sw.t); // pass by value 
        System.out.println("pass by value s :"+(sw.s));
        System.out.println("pass by value t :"+(sw.t));
        swapa(sw); //pass by referance
        System.out.println("pass by value s :"+(sw.s));
        System.out.println("pass by value t :"+(sw.t));

    }
}
