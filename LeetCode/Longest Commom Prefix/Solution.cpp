class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";
        if(strs.size() == 0)
            return pre;

        int index = 0;
        for(char c : strs[0])
        {
            for(int i = 1; i < strs.size(); i++)
            {
                if(index >= strs[i].size() || c != strs[i].at(index))
                    return pre;
            }
            pre += c;
            index++;
        }

        return pre;
    }
};
