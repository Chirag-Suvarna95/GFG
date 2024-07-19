    void printNos(int N)
    {
        //Your code here
        int i=0;
        if(N==0)
        return;
        start:
        if(i<N)
        {
            i++;
            cout<<i<<" ";
            goto start;
        }
    }