class Solution {
public:
    string interpret(string command) {
        string temp="";
        for(int i=0; i<command.size(); i++){
            if(command[i]=='G'){
                temp.push_back('G');
            }
            else if(command[i]=='('){
                if(command[i+1]==')'){
                    temp.push_back('o');
                }
                else{
                    temp.push_back('a');
                    temp.push_back('l');
                }
            }  
        }
        return temp;

    }
};
