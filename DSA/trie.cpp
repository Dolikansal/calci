#include<iostream>
#include<string>
using namespace std;

class trinode {
    public:
    trinode *child[26];
    bool is_end;
    
    trinode() {
        for(int i = 0; i < 26; i++) {
            child[i] = NULL;
        }
        is_end = false;
    }
};

class trie {
    trinode *root;
    
    public:
    trie() {
        root = new trinode();
    }

    // Insert
    void insert(string word) {
        trinode *node = root;
        for(char c : word) {
            int index = c - 'a';
            if(node->child[index] == NULL) {
                node->child[index] = new trinode();
            }
            node = node->child[index];
        }
        node->is_end = true;
    }

    // Search
    bool search(string word) {
        trinode *node = root;
        for(char c : word) {
            int index = c - 'a';
            if(node->child[index] == NULL) {
                return false;
            }
            node = node->child[index];
        }
        return node->is_end;
    }

    bool isempty(trinode *node) {
        for(int i = 0; i < 26; i++) {
            if(node->child[i] != NULL) {
                return false;
            }
        }
        return true;
    }

    // Deletion
    bool delet(trinode *node, string word, int depth) {
        if (depth == word.size()) {
            if (node->is_end == false) {
                return false;
            }
            node->is_end = false;
            return isempty(node);
        }

        int index = word[depth] - 'a';
        if (node->child[index] == NULL) {
            return false;
        }

        bool delet_child = delet(node->child[index], word, depth + 1);
        
        if (delet_child) {
            delete node->child[index];  
            node->child[index] = NULL;
            return !node->is_end && isempty(node);
        }
        return false;
    }

    void deleteword(string word) {
        delet(root, word, 0);
    }
};

int main() {
    trie *tree = new trie();
    tree->insert("apple");
    tree->insert("apprnd");
    tree->insert("monday");
    tree->deleteword("apple");
    cout << "search result: " << tree->search("apple") << endl;
    return 0;
}
