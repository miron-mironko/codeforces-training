struct Node {
    int data;
    Node *next;
};
class LinkedList {
  public:
    LinkedList();
    ~LinkedList();
    bool empty();
    void push_front(int value);
    void push_back(int value);

  private:
    Node *head;
};