class node {
    public int data;
    public node next;

    public node(int iValue) {
        data = No;
        next = null;
    }
}

class SinglyCL {
    public node First;
    public node Last;
    public int iCount;

    public SinglyCL() {
        System.out.println("object of SinglyCL is created sucessfully");
        First = null;
        iCount = 0;

    }

    void Display() {
        System.out.println("Elements of LL are :");

        node temp = First;

        while (temp.next != First) {
            System.out.println("|" + temp.data + "| ->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    int Count() {
        return iCount;
    }

    void InsertFirst(int No) {
        node newn = null;
        node = new node(No);

        if (First == null) {
            First = newn;
        } else {
            newn.next = First;
            Last.next = newn;
            First = newn;
        }
        iCount++;

    }

    void InsertLast(int No) {
        node newn = null;
        node temp = null;
        node = new node(No);

        if (First == null) {
            First = newn;
        } else {
            temp = First;
            while (temp.next != First) {
                temp = temp.next;
            }
            temp.next = newn;
            newn.next = First;
        }
        iCount++;

    }

    void InsertAtPos(int No, int iPos) {
    }

    void DeleteFirst() {
    }

    void DeleteLast() {
    }

    void DeleteAtPos(int No, int iPos) {
    }

}

class program422hw {

    public static void main(String Arg[]) {
        SinglyCL obj = new SinglyCL();
        int iRet = 0;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of elements are:" + iRet);

    }

}