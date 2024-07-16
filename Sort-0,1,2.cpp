class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
        // code here 
     int zero=0,one=0,two=0,i,count=0;
     for(i =0; i<n;i++)
     {
         if(a[i]==0)
          zero++;
         else if(a[i]==1)
          one++;
         else if(a[i]==2)
          two++;
         else
          continue;
     }
     for(i=0;i<zero;i++)
     {
         a[count++]=0;
     }
     for(i=0;i<one;i++)
     {
         a[count++]=1;
     }
     for(i=0;i<two;i++)
     {
         a[count++]=2;
     }
    }
};