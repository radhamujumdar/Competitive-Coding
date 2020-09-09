class Solution {
public:
    bool isPalindrome(int x) {
        int y,temp;
        long rev=0;
        temp=x;
        if(x==0)
            return true;
        if(x<0 || x%10==0)
            return false;
        while(x>0)
        {
            y=x%10;
            rev=(rev*10)+y;
            x=x/10;
        }
        if(temp==rev)
            return true;
        else
            return false;
    }
};
