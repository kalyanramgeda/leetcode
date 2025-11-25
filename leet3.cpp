class solution{
    public:
    int Lengthoflongestsubstring(const string& s){
        unordered_map<char,int> last;
        int i=0;
        int maxlen=0;
        for(int j=0;j<(int)s.size();++j){
            char c = s[j];
            if(last.count(c)){
                i=max(i,last[c]+1);
            }
            maxlen = max(maxlen,j-i+1);
            last[c]=j;

        }
        return maxlen;
    }
};