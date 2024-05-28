import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class arraylist {

    public static void main(String args[]) {

        ArrayList<String> a = new ArrayList<String>();
        a.add("anik");
        a.add("ashik");
        a.add("sakib");
        a.add("israt");
        //geting arrayList element by index
        System.out.println(a.get(0));

        for (int i = 0; i < a.size(); i++) {

            System.out.println(a.get(i));

        }

        System.out.println("..... printing using for each loop...........");

        for (String val : a) {

            System.out.println(val);
        }

        System.out.println("......checking element exits in arraylist..........");
        System.out.println(a.contains("anik"));
        System.out.println(a.contains("rakib"));

        System.out.println("................");

        String[] name = { "shihab", "reja", "subrata", "Rayhan" };

        //converting name array into array list
        List<String> nameArrayList = Arrays.asList(name);


        System.out.println("Checking Arrray elements exits in my Array");
        System.out.println(nameArrayList.contains("Rakib"));
        System.out.println(nameArrayList.contains("subrata"));

    }

}
