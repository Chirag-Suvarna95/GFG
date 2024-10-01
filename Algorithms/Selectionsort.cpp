     for(int j=0;j<n;j++)
       {
           if(arr[i]<arr[j])
           {
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }