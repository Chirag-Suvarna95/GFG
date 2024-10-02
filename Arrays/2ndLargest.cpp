//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	  sort(arr,arr+n);
	  int lar=arr[n-1];
	  for(int i=n-2;i>=0;i--)
	  {
	      if(arr[i]<lar)
	      return arr[i];
	  }
	  return -1;
	}
};


//-----------------------Better Solution---------------------------------
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int SLarge=-1;
        int Large=arr[0];
       for(int i=1;i<arr.size();i++)
       {
           if(arr[i]>Large)
           {
               Large=arr[i];
           }
       }
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]>SLarge &&arr[i]<Large)
           {
               SLarge=arr[i];
           }
       }
       return SLarge;
    }
};

//--------------------------Optimal Solution------------------------------
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int SLarge=-1;
        int Large=arr[0];
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i]>Large)
           {
               SLarge=Large;
               Large=arr[i];
               
           }
           else if(arr[i]>SLarge && arr[i]!=Large){
               SLarge=arr[i];
           }
       }
      
       return SLarge;
    }
};