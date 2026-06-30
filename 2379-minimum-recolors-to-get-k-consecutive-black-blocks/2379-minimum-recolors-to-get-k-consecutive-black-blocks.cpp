class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int c=0;
        int ans;
        for(int i=0; i<k; i++){
            if(blocks[i]=='W') c++;
        }
        ans = c;
        for(int j=k; j<blocks.size(); j++){
            if(blocks[j]=='W') c++;
            if(blocks[j-k]=='W') c--;
            ans = min(ans, c);
        }
        return ans;
    }
};