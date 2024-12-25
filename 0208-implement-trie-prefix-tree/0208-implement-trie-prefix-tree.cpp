class Trie {
public:
    class TrieNode {
    public:
        // char ch;
        bool mark = false;
        unordered_map<char, TrieNode*> next;
    };
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        auto curr = root;
        for(auto &ch: word) {
            if(curr -> next[ch] == nullptr) {
                curr -> next[ch] = new TrieNode(); 
            }
            curr = curr -> next[ch];
        }
        curr -> mark = true;
    }
    
    bool search(string word, bool is_prefix_search = false) {
        auto curr = root;
        for(auto &ch: word) {
            if(curr -> next[ch] == nullptr) {
                return false;
            }
            curr = curr -> next[ch];
        }
        return is_prefix_search || (curr && curr-> mark);
    }
    
    bool startsWith(string prefix) {
        return search(prefix, true);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */