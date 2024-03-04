public class MethodeCalling {
    public static void main(String[] args){
       MethodeCalling m = new MethodeCalling();
       m.go();
       go1();
       m.go2();
       m.go3();
    }

    public void go(){
        System.out.println("go");
        go1();

    }
    public static void go1(){           //we don't need to create an object
        System.out.println("go1");
    }
    public void go2(){
        System.out.println("go2");
    }
    public void go3(){
        System.out.println("go3");
    }

}
