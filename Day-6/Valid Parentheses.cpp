#include <stack>
#include <string>

class Solution {
public:
    bool isValid(const std::string& s) {
        std::stack<char> stack;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else {
                if (stack.empty()) {
                    return false;
                }
                if (c == ')' && stack.top() == '(') {
                    stack.pop();
                } else if (c == ']' && stack.top() == '[') {
                    stack.pop();
                } else if (c == '}' && stack.top() == '{') {
                    stack.pop();
                } else {
                    return false;
                }
            }
        }
        return stack.empty();
    }
};
