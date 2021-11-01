

class NumberDemo extends ArrayX
{
    
    public NumberDemo(int iValue) {
        super(iValue);
        
    }

    public int Add()
    {
        int iSum = 0, iCnt = 0;
        for(iCnt = 0; iCnt< Arr.length;iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}