#include "lib/stack.h"
int main() {
    Stack myStack;
    std::cout << "Empty: " << myStack.empty() << '\n';
    myStack.push(100);
    myStack.push(200);
    myStack.push(300);
    std::cout << "Top: " << myStack.top() << '\n';
    myStack.pop();
    std::cout << "Top: " << myStack.top() << '\n';
    std::cout << "Size: " << myStack.size() << '\n';
    std::cout << "Empty: " << myStack.empty() << '\n';
    return 0;
}