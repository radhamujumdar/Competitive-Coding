class Solution {
public:
    int value(char t){
        if(t=='I')
            return 1;
        if(t=='V')
            return 5;
        if(t=='X')
            return 10;
        if(t=='L')
            return 50;
        if(t=='C')
            return 100;
        if(t=='D')
            return 500;
        if(t=='M')
            return 1000;

        return 0;
    }
      int romanToInt(string s) {
        int res=0;
        for(int i=0;s[i]!='\0';i++)
        {
            int s1=value(s[i]);
            if(i+1<s.length()){
            int s2=value(s[i+1]);
             if(s1>=s2)
                res+=s1;
            else{
                res+=s2-s1;
                i++;
            }
            }
            else
                res+=s1;
        }
        return res;
    }
};
