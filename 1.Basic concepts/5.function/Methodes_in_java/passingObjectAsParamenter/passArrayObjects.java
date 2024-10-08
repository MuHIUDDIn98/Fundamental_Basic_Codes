import java.util.*;
import java.lang.*;
public class passArrayObjects {

    static void update(int index ,int value ,int A[]){
        A[index] = value;
    }
    public static void main(String args[]){


        int A[] = {1,2,3,4,5};


        for(int x:A){

            System.out.print(x);
        }
        System.out.println("------------------");

        for(int i= 0;i<A.length;i++){

            System.out.print(A[i]+ " ");

        }

        update(2,300,A);

        System.out.println("------------------");

        for(int i= 0;i<A.length;i++){

            System.out.print(A[i]+ " ");

        }


    }
}
