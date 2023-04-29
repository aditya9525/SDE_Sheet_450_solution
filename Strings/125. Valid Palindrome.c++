// * First we remove all the spacil charector ans space.
// * After that convert all Uppercase to LowerCase.
// * Then check palindrom valid or not.

class Solution {
private:
    bool isValidCharector(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        else{
            return 0;
        }
    }

    char toConvertLowerCase(char ch){
        char temp;
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }

    bool isValidPalindrome(string str){
        int s=0;
        int e=str.size()-1;
        while(s<=e){
            if(str[s]==str[e]){
                s++; 
                e--;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        string temp="";

        for(int i=0; i<s.size(); i++){
            if(isValidCharector(s[i]))
            temp.push_back(s[i]);
        }

        for(int i=0; i<temp.size(); i++){
            temp[i]=toConvertLowerCase(temp[i]);
        }

        return isValidPalindrome(temp);
    }
};
