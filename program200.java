import java.util.*;

class Arithematic {
    public int iNo1;
    public int iNo2;

    public Arithematic(int A, int B) {
        iNo1 = A;
        iNo2 = B;
    }
}

class program200 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;
        int iAns = 0;

        System.out.println("Enter first number:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Second number:");
        iValue2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue1, iValue2);
        iAns = aobj.Addition();

        System.out.println("Addition is :" + iAns);
    }

}
