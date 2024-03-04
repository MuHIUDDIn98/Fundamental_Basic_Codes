public class Array {
     
    public static void main(String args[]){
    int rows = 3;
     int cols = 3;
    String[] s = new String[5];
    String[] stringArray = new String[10];//creating array 
    int table[][] = new int[rows][cols];

    s = new String[] {"shihab","reja","subrata","Rayhan"};   
    
    stringArray = new String[] {"Amit","Rayhan","saikat","anik"}; //initialization of array
    for(int i=0; i<3; i++){
        System.out.println(s[i]);
    }

    for(int i=0; i<3; i++){
        System.out.println(stringArray[i]);
    }

    }
}
