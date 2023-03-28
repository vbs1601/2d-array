class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0;
        int m=matrix.size();
        int n=matrix[0].size();
        int e=m*n-1;
        int mid;
       // int row=mid/n;
       // int col=mid%n;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            int elt=matrix[mid/n][mid%n];
            if(elt==target)
               return true;

            else if(elt>target)

                e=mid-1;

            else
            
                s=mid+1;
            
            //return false;
        }
        return false;
        
    }
};
