class Solution {
public:
   vector<int> twoSum(vector<int> arr,int target){
        for(int i=0;i<arr.size();i++)
        {
            int num=arr[i];
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]+arr[j]==target){
                vector<int> solu{i,j};
                return solu;
               }
            }
        }
       vector<int> solu;
      return solu;

    }
};
