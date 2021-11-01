import java.util.*;

class Addition_numbers
{
    public int Addition(int i, int j)
    {
        int iResult = 0;
        iResult = i + j;
        return iResult;
    }
}

class Program4_Add
{
    
    public static void main(String str[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        System.out.println("ENter 1st number:");
        iNo1 = sobj.nextInt();
        System.out.println("ENter 2nd number:");
        iNo2 = sobj.nextInt();

        Addition_numbers aobj = new Addition_numbers();
        iAns = aobj.Addition(iNo1, iNo2);
        
        System.out.println("Addition is: " + iAns);

        

    }
}