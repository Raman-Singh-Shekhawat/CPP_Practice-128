// 145. Code : Find sum of nodes: Given a generic tree, find and return the sum of all nodes present in the given tree.

/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

int sumOfNodes(TreeNode<int> *root)
{

    int sum = root->data;

    for (int i = 0; i < root->children.size(); i++)
    {

        sum += sumOfNodes(root->children[i]);
    }

    return sum;
}