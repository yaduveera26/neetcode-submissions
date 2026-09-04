class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<s.length();i++){
        //     if(s[i]!=t[i]) return false;
        // }
        // return true;

        // map<char,int>m;
        // for(int i=0;i<s.length();i++){
        //     if(m.find(s[i])==m.end()) m[s[i]]=1;
        //     else m[s[i]]++;
        //     if(m.find(t[i])==m.end()) m[t[i]]=-1;
        //     else m[t[i]]--;
        // }
        // for(auto it=m.begin();it!=m.end();it++){
        //     if(it->second != 0) return false;
        // }
        // return true;

        vector<int>v(26,0);
        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        for(auto it:v){
            if(it) return false;
        }
        return true;
    }
};
