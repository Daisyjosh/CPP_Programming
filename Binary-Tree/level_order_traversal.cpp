#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node{
    int data;
    Node* left = NULL;
    Node* right = NULL;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

vector<vector<int>> levelOrder(Node* root)
{
    if (!root) return {};

    queue<Node*> q;
    q.push(root);

    vector<vector<int>> result;

    while(!q.empty())
    {
        int levelsize = q.size();
        vector <int> level;

        for(int i = 0; i < levelsize; i++)
        {
            Node* node = q.front();
            q.pop();

            level.push_back(node->data);

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);   
        }
        result.push_back(level);
    }
    return result;

}

int main()
{
    Node* root =  new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<vector<int>> output = levelOrder(root);
    for(int i = 0; i < output.size(); i++)
    {
        for(int j = 0; j < output[i].size(); j++)
        {
            cout << output[i][j];
        }
    }
    return 0;
}