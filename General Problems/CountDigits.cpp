class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int n=log10(N) + 1;
        int rem,count=0;
        int Num=N;
        for(int i=0;i<n;i++)
        {
            rem=Num%10;
            if(rem != 0 && N%rem==0) //Divide by zero error
            {
                count++;
            }
            Num=Num/10;
            
        }
        return count;
    }
};