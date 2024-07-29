import java.util.*;

class Employee {
    public int EID;
    public String Ename;
    public String EAddress;
    public int ESalary;

    private static int Counter;

    static {
        Counter = 0;
    }

    public Employee(int A, String B, String C, int D) {
        this.EID = ++Counter;
        this.Ename = B;
        this.EAddress = C;
        this.ESalary = D;
    }

    void DisplayInfo() {
        System.out.println("Name:" + Ename + "Address:" + EAddress + "Salary:" + ESalary);
    }
}

class MarvellousDBMS {
    public MarvellousDBMS() {
        System.out.println("Marvellous DBMS started succesfully.....");
    }

}

class program646 {
    public static void main(String Arg[]) {
        System.out.println("...........Marvellous Database Management System...............");

        MarvellousDBMS mobj = new MarvellousDBMS();

        LinkedList<Employee> lobj = new LinkedList<Employee>();

        Employee eobj1 = new Employee("Sagar", "Pune", 2100000);
        Employee eobj2 = new Employee("Priya", "Mumbai", 11000);

        lobj.add(eobj1);
        lobj.add(eobj2);

        for (Employee eref : lobj) {
            eref.DisplayInfo();
        }

    }

}
