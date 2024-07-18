import java.util.*;

class program261 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name:");
        String name = sobj.nextLine();

        char Arr[]=name.toCharArray();  //inbulid methods

        int i=0;
        System.out.println("Array length is:"+Arr.length);      //legth property
        System.out.println("String length is:"+name.length);    //length Method
    }
}