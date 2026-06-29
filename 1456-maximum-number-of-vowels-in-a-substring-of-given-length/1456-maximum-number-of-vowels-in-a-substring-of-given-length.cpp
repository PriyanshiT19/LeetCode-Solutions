class Solution {
public:
    bool isVowel(char ch){
        return(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    int maxVowels(string s, int k) {
        int c=0;
        int maxc = 0;
        for(int i=0; i<k; i++){
            if(isVowel(s[i])){
                c++;
            }
        }
        maxc = c;
        for(int i=k; i< s.size();i++){
            if(isVowel(s[i])) c++;
            if(isVowel(s[i-k])) c--;
            maxc = max(maxc, c);
        }
        return maxc;
    }
};