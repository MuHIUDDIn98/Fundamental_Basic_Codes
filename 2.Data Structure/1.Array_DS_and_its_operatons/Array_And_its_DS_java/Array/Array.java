public class Array {
     
    public static void main(String args[]){

    int[] arr = new int[5];

    String[] catagory ={"phone","Accessories","home appliance"};
    //2D matrix
    int rows = 3;
     int cols = 3;
    int table[][] = new int[rows][cols];
    
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    int[] arr2 = {1,2,3,4,5};

    for(int i=0; i<arr2.length; i++){

        System.out.println(arr2[i]);
    }
    //declearing array in heap
    String[] s = new String[5];
    s = new String[] {"shihab","reja","subrata","Rayhan"};   
    
    String[] stringArray = new String[10];//creating array  in heap
    stringArray = new String[] {"Amit","Rayhan","saikat","anik"}; //initialization of array
    for(int i=0; i<3; i++){
        System.out.println(s[i]);
    }

    for(int i=0; i<3; i++){
        System.out.println(stringArray[i]);
    }

    }
}
