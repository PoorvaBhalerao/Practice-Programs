// //Binary Search Tree
// //Insert, traversal(Inorder, Preorder, Postorder), CountLeaf , Countparent, CountAllnodes

#include <iostream>

using namespace std;

// Definition of the Node structure
struct Node 
{
    int data;
    struct Node* lchild;
    struct Node* rchild;

    Node(int value) 
    {
        data = value;
        lchild = NULL;
        rchild = NULL;
    }
};

class BStree 
{
    private:
        struct Node* Root;

        // Helper functions
        void insert(struct Node** root, int value);
        void inorderTraversal(struct Node* root);
        void preorderTraversal(struct Node* root);
        void postorderTraversal(struct Node* root);
        int countLeafNodes(struct Node* root);
        int countParentNodes(struct Node* root);
        int countAllNodes(struct Node* root);

    public:
        BStree();

        void Insert(int value);
        void Inorder();
        void Preorder();
        void Postorder();
        bool Search(int value);
        int CountLeaf();
        int CountParent();
        int CountAllNodes();
};

BStree::BStree()
{
    Root = NULL;
}

void BStree::insert(struct Node** root, int value) 
{
    if (*root == NULL) 
    {
        *root = new struct Node(value);
    } 
    else if (value < (*root)->data) 
    {
        insert(&((*root)->lchild), value);
    } 
    else if (value > (*root)->data) 
    {
        insert(&((*root)->rchild), value);
    } 
    else 
    {
        cout << "Element already present\n";
    }
}

void BStree::Insert(int value) 
{
    insert(&Root, value);
}

void BStree::inorderTraversal(struct Node* root) 
{
    if (root != NULL) {
        inorderTraversal(root->lchild);
        cout << root->data << " ";
        inorderTraversal(root->rchild);
    }
}

void BStree::Inorder() 
{
    cout << "Inorder Traversal: ";
    inorderTraversal(Root);
    cout << endl;
}

void BStree::preorderTraversal(struct Node* root) 
{
    if (root != NULL) {
        cout << root->data << " ";
        preorderTraversal(root->lchild);
        preorderTraversal(root->rchild);
    }
}

void BStree::Preorder() 
{
    cout << "Preorder Traversal: ";
    preorderTraversal(Root);
    cout << endl;
}

void BStree::postorderTraversal(struct Node* root) 
{
    if (root != NULL) {
        postorderTraversal(root->lchild);
        postorderTraversal(root->rchild);
        cout << root->data << " ";
    }
}

void BStree::Postorder() 
{
    cout << "Postorder Traversal: ";
    postorderTraversal(Root);
    cout << endl;
}

bool BStree::Search(int value) 
{
    struct Node* temp = Root;
    bool flag = false;
    while (temp != NULL)
    {
        if (value == temp->data) 
        {
            flag = true;
            break;
        } 
        else if (value < temp->data) 
        {
            temp = temp->lchild;
        } 
        else 
        {
            temp = temp->rchild;
        }
    }
    return flag;
}

int BStree::countLeafNodes(struct Node* root) 
{
    if (root == NULL) 
    {
        return 0;
    }
    if (root->lchild == NULL && root->rchild == NULL)
    {
        return 1;
    }
    else
    {
        return countLeafNodes(root->lchild) + countLeafNodes(root->rchild);
    }
}

int BStree::CountLeaf() 
{
    return countLeafNodes(Root);
}

int BStree::countParentNodes(struct Node* root) 
{
    int count = 0;
    if (root == NULL) 
    {
        return 0;
    }    
    if (root->lchild != NULL || root->rchild != NULL) 
    {
        count++;
    }

    return count + countParentNodes(root->lchild) + countParentNodes(root->rchild);
}

int BStree::CountParent() 
{
    return countParentNodes(Root);
}

int BStree::countAllNodes(struct Node* root) 
{
    if (root == NULL) 
    {
        return 0;
    }
    else
    {
        return 1 + countAllNodes(root->lchild) + countAllNodes(root->rchild);
    }
}

int BStree::CountAllNodes() 
{
    return countAllNodes(Root);
}

int main() 
{
    BStree *bstobj = new BStree();
    bstobj->Insert(10);
    bstobj->Insert(25);
    bstobj->Insert(68);
    bstobj->Insert(5);
    bstobj->Insert(98);
    bstobj->Insert(75);
    bstobj->Insert(52);
    bstobj->Insert(48);
    bstobj->Insert(12);
    bstobj->Insert(30);

    cout << "Total Nodes: " << bstobj->CountAllNodes() << endl;
    cout << "Leaf Nodes: " << bstobj->CountLeaf() << endl;
    cout << "Parent Nodes: " << bstobj->CountParent() << endl;

    bstobj->Inorder();
    bstobj->Preorder();
    bstobj->Postorder();

    bool bflag = bstobj->Search(50);
    if (bflag == true) 
    {
        cout << "Element is present in the tree" << endl;
    } 
    else 
    {
        cout << "Element is not present in the tree" << endl;
    }

    return 0;
}
