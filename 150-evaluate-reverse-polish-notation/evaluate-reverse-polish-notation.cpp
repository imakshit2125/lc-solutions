#include <stack>
#include <stdlib.h>
#include <ctype.h>

class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        std::stack<long long> numbers;
        for (int i = 0; i < tokens.size(); ++i) {
            if (tokens[i].size() > 1 || isdigit(tokens[i][0])) {
                numbers.push(::atoi(tokens[i].c_str()));
                continue;
            }
            long long b = numbers.top();
            numbers.pop();
            long long a = numbers.top();
            numbers.pop();
            switch(tokens[i][0]) {
            case '+':
                numbers.push(a + b);
                break;
            case '-':
                numbers.push(a - b);
                break;
            case '*':
                numbers.push(a * b);
                break;
            case '/':
                numbers.push(a / b);
                break;
            default:
                break;
            }
        }
        return numbers.top();
    }
};