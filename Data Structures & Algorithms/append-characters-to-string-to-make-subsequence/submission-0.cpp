class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else{
                i++;
            }
        }
      
        return t.size() - j;
    }
};


# SUBSEQ- we want coding in same order in s.. c,o,d,i,n,g one after another in s..My doubt- we already have ing in s then why we add ding from t.
#  WE HAD TO RETURN MIN NUMBER OF CHARS TO BE ADDED FROM T- thats j-t.length();
#  IF WE HAD TO RETURN APPENDED STRING - s+t.substr(j);
