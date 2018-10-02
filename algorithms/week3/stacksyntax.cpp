#include <iostream>

using namespace std;

template<typename T>
class Node {
    public:
    T data;
    Node *next;
    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

template<typename T>
class Stack {
    public:
    Node<T> *top;
    int sz;
    Stack() {
        top = NULL;
        sz = 0;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    } 

    void push(T data) {
        Node<T> *node = new Node<T>(data);
        node->next = top;
        top = node;
        sz++;
    }

    T back() {
        return top->data;
    }

    void pop() {
        if (top != NULL) {
            top = top->next;
            sz--;
        }
    }
};


int main() {
    // Stack<int> *stack = new Stack<int>();
    // stack->push(5);
    // stack->push(6);
    // stack->push(7);
    // stack->push(8);
    // stack->push(9);
    // cout << stack->back(); 
    // stack->pop();
    // cout << stack->back();
    // stack->pop();
    // stack->pop();
    // cout << stack->back();
    Stack<string> *stack = new Stack<string>();
    stack->push("hello");
    stack->push("test");
    stack->push("123");
    cout << stack->back();

    return 0;
}