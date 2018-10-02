#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <stack>
#include <list>

using namespace std;

queue <pair<string, int>> q;

struct Node {
    int val;
    Node *next, *prev;

    Node(int _val) {
        val = _val;
        next = nullptr;
        prev = nullptr;
    }
};

struct LinkedList {
public:
    Node *head, *tail;

    LinkedList() {
        head = tail = nullptr;
    }

    void insert(int x) {
        auto node = new Node(x);
        if (head == nullptr) {
            head = node;
            tail = node;
            return;
        } else {
            head -> prev = node;
            node -> next = head;
            head = node;
        }
    }

    void deleteFirst() {
        head = head -> next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
    }

    void deleteLast() {
        tail = tail -> prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }
    }

    void del(int x) {
        auto cur = head;
        while (cur && cur -> val != x) {
            cur = cur -> next;
        }
        if (!cur) return;
        if (cur == head) deleteFirst();
        else
            if (cur == tail) deleteLast();
            else {
                cur -> next -> prev = cur -> prev;
                cur -> prev -> next = cur -> next;
            }
    }

    void print() {
        auto cur = head;
        while (cur) {
            if (cur != head) cout << " ";
            cout << (cur -> val);
            cur = cur -> next;
        }
        cout << "\n";
    }
};

void solve(int test_case) {
    int n, x;
    string s;
    auto linkedList = new LinkedList();
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (s == "insert") {
            cin >> x;
            linkedList -> insert(x);
        }
        if (s == "delete") {
            cin >> x;
            linkedList -> del(x);
        }
        if (s == "deleteFirst") {
            linkedList -> deleteFirst();
        }
        if (s == "deleteLast") {
            linkedList -> deleteLast();
        }
    }
    linkedList -> print();

    exit(0);
}

int main() {
    int test_case = 0;
    while (++test_case) {
        solve(test_case);
    }
}