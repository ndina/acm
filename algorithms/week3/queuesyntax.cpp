#include <iostream>

using namespace std;

template<typename T>
class Node {
    public:
    T data;
    Node *next;
    Node *prev;
    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

template<typename T>
class Queue {
    public:
    Node<T> *head, *tail;
    int sz;
    Queue() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    }

    void push_back(T data) {
        Node<T> *node = new Node<T>(data);
        if (head == NULL) {
            head = node;
            tail = node;
        } else {
            // cout << data << " ";
            node->prev = tail;
            tail->next = node;
            tail = node;
        }
        sz++;
    }

    void push_front(T data) {
        Node<T> *node = new Node<T>(data);
        if (head == NULL) {
            tail = node;
            head = node;
        } else {
            node->next = head;
            head->prev = node;
            head = node;
        }
    }

    void pop_front() {
        if (head != NULL) {
            head = head->next;
            sz--;
        }
    }

    void pop_back() {
        if (tail != NULL) {
            tail = tail->prev;
            sz--;
        }
    }

    T first() {
        return head->data;
    }

    T last() {
        return tail->data;
    }

    void print() {
        Node<T> *node = head;
        while (node != NULL) {
            cout << node->data << " ";
            node = node->next;
        }
    }
};

int main() {
    Queue<int> *queue = new Queue<int>();
    queue->push_back(1);
    queue->push_back(2);
    queue->push_front(3);
    queue->push_front(4);
    queue->print();
    return 0;
}