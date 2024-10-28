// //Binary Search Tree - Generic code
// //Insert, traversal(Inorder, Preorder, Postorder), CountLeaf , Countparent, CountAllnodes

#include <iostream>
using namespace std;

// Definition of the Node structure
template <class T>
struct Node 
{
    T data;
    struct Node* lchild;
    struct Node* rchild;

    Node(T value) 
    {
        data = value;
        lchild = NULL;
        rchild = NULL;
    }
};

template <class T>
class BStree 
{
    private:
        struct Node<T>* Root;

        // Helper functions
        void insert(struct Node<T>** root, T value);
        void inorderTraversal(struct Node<T>* root);
        void preorderTraversal(struct Node<T>* root);
        void postorderTraversal(struct Node<T>* root);
        int countLeafNodes(struct Node<T>* root);
        int countParentNodes(struct Node<T>* root);
        int countAllNodes(struct Node<T>* root);

    public:
        BStree();

        void Insert(T value);
        void Inorder();
        void Preorder();
        void Postorder();
        bool Search(T value);
        int CountLeaf();
        int CountParent();
        int CountAllNodes();
};

template <class T>
BStree<T>::BStree()
{
    Root = NULL;
}

template <class T>
void BStree<T>::insert(struct Node<T>** root, T value) 
{
    if (*root == NULL) 
    {
        *root = new struct Node<T>(value);
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

template <class T>
void BStree<T>::Insert(T value) 
{
    insert(&Root, value);
}

template <class T>
void BStree<T>::inorderTraversal(struct Node<T>* root) 
{
    if (root != NULL) {
        inorderTraversal(root->lchild);
        cout << root->data << " ";
        inorderTraversal(root->rchild);
    }
}

template <class T>
void BStree<T>::Inorder() 
{
    cout << "Inorder Traversal: ";
    inorderTraversal(Root);
    cout << endl;
}

template <class T>
void BStree<T>::preorderTraversal(struct Node<T>* root) 
{
    if (root != NULL) {
        cout << root->data << " ";
        preorderTraversal(root->lchild);
        preorderTraversal(root->rchild);
    }
}

template <class T>
void BStree<T>::Preorder() 
{
    cout << "Preorder Traversal: ";
    preorderTraversal(Root);
    cout << endl;
}

template <class T>
void BStree<T>::postorderTraversal(struct Node<T>* root) 
{
    if (root != NULL) {
        postorderTraversal(root->lchild);
        postorderTraversal(root->rchild);
        cout << root->data << " ";
    }
}

template <class T>
void BStree<T>::Postorder() 
{
    cout << "Postorder Traversal: ";
    postorderTraversal(Root);
    cout << endl;
}

template <class T>
bool BStree<T>::Search(T value) 
{
    struct Node<T>* temp = Root;
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

template <class T>
int BStree<T>::countLeafNodes(struct Node<T>* root) 
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

template <class T>
int BStree<T>::CountLeaf() 
{
    return countLeafNodes(Root);
}

template <class T>
int BStree<T>::countParentNodes(struct Node<T>* root) 
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

template <class T>
int BStree<T>::CountParent() 
{
    return countParentNodes(Root);
}

template <class T>
int BStree<T>::countAllNodes(struct Node<T>* root) 
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

template <class T>
int BStree<T>::CountAllNodes() 
{
    return countAllNodes(Root);
}

int main() 
{
    BStree<int> *bstobj = new BStree<int>();
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
