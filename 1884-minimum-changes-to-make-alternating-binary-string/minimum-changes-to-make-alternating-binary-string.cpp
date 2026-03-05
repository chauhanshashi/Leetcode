class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        int t=0;
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            if((s[i]-'0')!=t)count1++;
            else count2++;
            t=(t+1)%2;

        }
        return min(count1,count2);

        
    }
};