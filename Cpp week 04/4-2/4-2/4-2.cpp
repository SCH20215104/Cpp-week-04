#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    char c;
    Node* left = NULL;
    Node* right = NULL;
};

void inorder(Node* node) {
    if (node->left != NULL) {
        inorder(node->left);
    }

    cout << node->c;

    if (node->right != NULL) {
        inorder(node->right);
    }
}

void postorder(Node* node) {
    if (node->left != NULL) {
        postorder(node->left);
    }

    if (node->right != NULL) {
        postorder(node->right);
    }

    cout << node->c;
}

int main(void) {
    int N;
    vector<Node> node(26);
    Node* root;

    cin >> N;

    for (int i = 0; i < 9; i++) {
        char parent, left, right;

        cin >> parent >> left >> right;
        node[parent - '0'].c = parent;

        if (left != '.') {
            node[parent - '0'].left = &node[left - '0'];
        }
        if (right != '.') {
            node[parent - '0'].right = &node[right - '0'];
        }
    }

    root = &node[0];

    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;

    return 0;
}