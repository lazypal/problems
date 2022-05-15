/**
 * @rohit
 */
class Solution {
public:
    bool isValid(string str) {
        if(str.length() %2 == 1) return false;
	
        stack<char> s;
        for(char c: str) {
            if(c == '(' || c == '{' || c == '[') {
                s.push(c);
            } else {
                if(s.empty()) return false;
                if(c == ')') {
                    if(s.top() != '(') return false;
                    // cout << s.top() << " ";
                    s.pop();
                } else if(c == '}') {
                    if(s.top() != '{') return false;
                    // cout << s.top() << " ";
                    s.pop();
                } else {
                    if(s.top() != '[') return false;
                    // cout << s.top() << " ";
                    s.pop();
                }
            }
        }

        if(!s.empty()) return false;

        return true;
    }
};