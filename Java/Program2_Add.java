import java.util.*;

class  Program2_Add{
    public static void main(String str[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0, iNo2 = 0, iAns = 0;
        System.out.println("ENter 1st number:");
        iNo1 = sobj.nextInt();
        System.out.println("ENter 2nd number:");
        iNo2 = sobj.nextInt();

        iAns = iNo1 + iNo2;
        System.out.println("Addition is: " + iAns);
        sobj.close();
    }
}


