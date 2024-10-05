class Solution {
public:
    string removeOuterParentheses(string s) {
        char open='(';
        char close=')';
        int count=0;
        string ans;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]==open)
           {
            if(count>0) //This is not an outermost string
            ans+=open;

            count++;
           }
           else{
            count--;
            if(count>0) ans+=close;
           }
        }
        return ans;

    }
};