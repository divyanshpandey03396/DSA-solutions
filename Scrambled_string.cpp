class Solution {
public:
    unordered_map<string,bool> mp;
    bool solve(string s1,string s2)
    {
        if(s1.compare(s2)==0)
            return true;
        if(s1.length()<=1)
            return false;
        bool flag = false;
        int n = s1.length();
        if(mp.find(s1+" "+s2)!=mp.end())
            return mp[s1+" "+s2];
        for(int i=1;i<=n-1;i++)
        {
            bool condn1 = solve(s1.substr(0,i),s2.substr(n-i)) && solve(s1.substr(i),s2.substr(0,n-i));
            bool condn2 = solve(s1.substr(0,i),s2.substr(0,i)) && solve(s1.substr(i),s2.substr(i));
            if(condn1||condn2)
            {
                flag = true;
                break;
            }
            
        }
        
        return mp[s1+" "+s2] = flag;
    }
    bool isScramble(string s1, string s2) {
        if(s1.length()!=s2.length())
            return false;
        if(s1 ==s2)
            return true;
        return solve(s1,s2);
        
    }
};