#include <bits/stdc++.h>

using namespace std;

class TrieNode 
{
    public:
    TrieNode *children[4];
    int count;
    int length;

    TrieNode() {
        count = 0;
        length = 0;
        for (int i = 0; i < 4; i++) {
            children[i] = NULL;
        }
    }
};

class Trie 
{
    public:
    TrieNode *root;

    Trie() {
        root = new TrieNode();
    }

    void insert(string s) {
        TrieNode *node = root;
        for (int i = 0; i < s.length(); i++) {
            switch (s[i]) {
                case 'T':
                    s[i] = 'D';
                    break;
                case 'G':
                    s[i] = 'B';
                    break;
            }

            if (node -> children[s[i] - 65] == NULL) {
                node -> children[s[i] - 65] = new TrieNode();
            }
            node -> children[s[i] - 65] -> count++;
            node = node -> children[s[i] - 65];
        }
    }

    void findLength(TrieNode *node) {
        bool found = false;
        for (int i = 0; i < 4; i++) {
            if (node -> children[i]) {
                if (node -> children[i] -> count >= 2) {
                    found = true;
                    findLength(node -> children[i]);
                }
            }
        }

        if (!found) {
            node -> length = 1;
            return;
        }

        for (int i = 0; i < 4; i++) {
            if (node -> children[i]) {                
                if (node -> children[i] -> length >= node -> length) {
                    node -> length = node -> children[i] -> length + 1;
                }
            }
        }
    }

    void search(TrieNode *node) {
        int max = 0;
        int maxindex = -1;

        for (int i = 0; i < 4; i++) {
            if (node -> children[i]) {
                if (node -> children[i] -> length > max) {
                    max = node -> children[i] -> length;
                    maxindex = i;
                }
            }
        }

        if (maxindex == -1) {
            if (node -> count == 0) {
                cout << "No repetitions found!";
            } else {
                cout << " " << node -> count;
            }
            return;
        }
        char c;
        c = ((char)(maxindex + 65));
        switch(c) {
            case 'B':
                c = 'G';
                break;
            case 'D':
                c = 'T';
                break;
        }
        cout << c;
        node = node -> children[maxindex];
        search(node);
    }
};

int main() {
    int n, q;
    cin >> n;
    Trie *trie[101];
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        trie[i] = new Trie();

        for (int j = 0; j < s.length(); j++) {
            trie[i] -> insert(s.substr(j));
        }
        trie[i] -> findLength(trie[i] -> root);
    }
   
    for (int i = 0; i < n; i++) {
        trie[i] -> search(trie[i] -> root);
        cout << endl;
    }
}