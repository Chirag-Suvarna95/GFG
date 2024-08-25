
class Solution {
    public int rowWithMax1s(int arr[][]) {
        // code here
        int n= arr.length;
        int m= arr[0].length;
        int maxrow=-1;
        int j=m-1;
        for(int i=0;i<n;i++){
            while(j>=0 && arr[i][j]==1){
                j--;
                maxrow=i;
            }
        }
        return maxrow;
    }
}