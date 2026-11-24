class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stanum;

        for(const string& st : tokens){
            if(st == "+"){
                int a = stanum.top();
                stanum.pop();
                int b = stanum.top();
                stanum.pop();
                stanum.push(b + a);
            }
            else if(st == "-"){
                int a = stanum.top();
                stanum.pop();
                int b = stanum.top();
                stanum.pop();
                stanum.push(b - a);
            }
            else if(st == "*"){
                int a = stanum.top();
                stanum.pop();
                int b = stanum.top();
                stanum.pop();
                stanum.push(b * a);
            }
            else if(st == "/"){
                int a = stanum.top();
                stanum.pop();
                int b = stanum.top();
                stanum.pop();
                stanum.push(b / a);
            }
            else{
                stanum.push(stoi(st));
            }
        }
        return stanum.top();
    }
};
