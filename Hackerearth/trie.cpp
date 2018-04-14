#include<bits/stdc++.h>
using namespace std;

struct TrieNode {
    bool isEnd;
    TrieNode* arr[26];
};

struct TrieNode* newNode () {

    TrieNode* node = new TrieNode;
    node->isEnd = false;

    for(int i=0;i<26;i++)
        node ->arr[i] = NULL;

    return node;
}

void trieInsert(string s, TrieNode *root) {
    TrieNode *currNode = root;

    for(int i=0, n=s.length(); i<n; i++) {
        int ind = s[i] - 'a';
        TrieNode* nextNode;

        if(!currNode->arr[ind]) {
            nextNode = newNode();
            currNode->arr[ind] = nextNode;
        }

        currNode = currNode->arr[ind];
    }

    currNode->isEnd = true;
}

int dfs(TrieNode *node) {
    int count = 0;

    if(node->isEnd)
        count++;

    for(int i=0; i<26; i++) {
        if(!node->arr[i]) {
            count += dfs(node->arr[i]);
        }
    }

    return count;
}

int trieSearch(TrieNode *root, string s)
{
    int count = 0;
    TrieNode *currNode = root;

    for(int i=0,n=s.length(); i<n; i++) {
        int ind = s[i]-'a';
        cout<<"Checking for letter "<<s[i]<<endl;
        if(!currNode->arr[ind])
            return -1;
        cout<<"Node is !null"<<endl;
        currNode = currNode->arr[ind];
        cout<<"Done\n";
    }

    cout<<"Passing to dfs func now";
    count = dfs(currNode);
    return count;
}

int main() {

    TrieNode *root = newNode();

    int n;
    cin>>n;
    while(n--) {
        cout<<"Enter new string\n";
        string s;
        cin>>s;
        trieInsert(s, root);
    }

    string s;
    cin>>s;
    int present = trieSearch(root, s);
    cout<<present<<endl;
    return 0;
}
