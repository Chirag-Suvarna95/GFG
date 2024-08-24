class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
        int i=0;
        if(str[i]==NULL)return str;
        
        int frequency[255]={};  //={} initializes it with 0
        //Using ASCII
        /*Contains 0 if character is unsused, 1 if used*/
        /*Each character has its own index*/
   
        string ansStr;
        while(str[i]!=NULL)
        {
            if(frequency[str[i]]==0)
            {
                ansStr+=str[i];
                frequency[str[i]]=1;
                
            }
            i++;
        }
        return ansStr;
    }
};