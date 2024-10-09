class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        set <int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr1[i]);
        }
        for(int i=0;i<m;i++)
        {
            s.insert(arr2[i]);
        }
        
        vector<int> a(s.begin(), s.end());
        
        return a;
    }
};

/*--------------------Optimal Solution------------------------ */
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
       vector<int> vec;
       int j=0,i=0;
       
       while(i<n && j<m)
       {
           if(arr1[i]<=arr2[j])
           {
               if(vec.size()==0 || vec.back()!=arr1[i])
                   vec.push_back(arr1[i]);
                   
              i++;
           }
           else
               {
                 if(vec.size()==0 || vec.back()!=arr2[j])
                 vec.push_back(arr2[j]);
                 
                 j++;
               } 
       }
       //Remaining elements
       while(i<n)
       {
           if (vec.back() != arr1[i])
             vec.push_back(arr1[i]);
            
            i++; //has to be written outside the if condition
       }
       
       while(j<m)
       {
           if (vec.back() != arr2[j])
             vec.push_back(arr2[j]);
             
            j++;
       }
       
       return vec;
    }
};