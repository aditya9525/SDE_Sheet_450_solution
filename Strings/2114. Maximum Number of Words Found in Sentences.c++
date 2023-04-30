class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        string words;
        int word = 0;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            stringstream ss(s[i]);
            while(ss >> words){
                word++;
            }
            count=max(count, word);
            word=0;
        }
        return count;
    }
};
