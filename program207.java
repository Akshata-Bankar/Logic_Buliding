import java.util.*;

class program207 {
    public static int Differnce(int iNo) {
        int iCnt = 0, iSumF = 0, iSumN = 0;

        for (iCnt = 1; iCnt < iNo; iCnt++) {
            if ((iNo % iCnt) == 0) // Factor
            {
                iSumF = iSumF + iCnt;
            } else// non factor
            {
                iSumN = iSumN + iCnt;
            }
        }
        return iSumN - iSumF;
    }

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        iRet = Differnce(iValue);

        System.out.println("Difference of factors is: " + iRet);
    }
}
