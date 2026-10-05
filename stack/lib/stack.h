#include <iostream>
#include <vector>

class Stack {
  public:
    void push(int value);
    void pop();
    int top();
    bool empty();
    int size();

  private:
    std::vector<int> data;
};