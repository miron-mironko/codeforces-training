#include "stack.h"
void Stack::push(int value) { data.push_back(value); }
void Stack::pop() {
    if (!data.empty()) {
        data.pop_back();
    }
}
int Stack::top() { return data.back(); }
bool Stack::empty() { return data.empty(); }
int Stack::size() { return data.size(); }