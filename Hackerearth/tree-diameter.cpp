#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node * left, * right;
};

Node * newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->right = node->left = 0;
    return node;
}

void insertNode(Node* root, string s, int data) {
    int n = s.length();

    for(int i=0;i<n;i++) {
        if(s[i] == 'L') {
            if(root -> left) root = root->left;
            else {
                Node* temp = newNode(0);
                root->left = temp;
                root = temp;
            }
        } else {
            if(root -> right) root = root->right;
            else {
                Node* temp = newNode(0);
                root->right = temp;
                root = temp;
        }
    }


    return ;
}

int main() {
    int t, x;
    cin>>t>>x;
    Node* root = newNode(x);
    t-=1
    while(t) {
        string s;
        cin>>s;
        int data;
        cin>>data;

        insertNode(root, s, data);
    }

    return 0;
}
