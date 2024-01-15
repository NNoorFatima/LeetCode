#include <stack>
class Solution {
public:
    bool isValid(string expr) {
        stack<char> brackets;
        int len = expr.length();
        for (int i = 0; i < len; i++) {
            if (brackets.empty() == 1) {
                brackets.push(expr[i]);
            } 
            else if (brackets.top() == '(' && expr[i] == ')' ||brackets.top() == '[' && expr[i] == ']' ||brackets.top() == '{' && expr[i] == '}')
            {
                brackets.pop();
            } 
            else
            {
                brackets.push(expr[i]);
            }
        }

        if (brackets.empty() == 1)
            return 1;
        return 0;
    }
};