//Binary Search Tree- In java
//Insert, Traversal(Inporder, Preorder, Postorder), Search, CountLeaf, CountParent, CountAllNodes

import java.util.*;

class Node
{
    public int data;
    public Node lchild;
    public Node rchild;

    Node(int Value)
    {
        this.data = Value;
        this.lchild = null;
        this.rchild = null;
    }
}

class BSTree
{
    private Node root;

    public BSTree()
    {
        this.root = null;
    }
    
    private Node insert(Node root, int value)
    {
        if(root == null)
        {
            root = new Node(value);
            return root;
        }

        if(value > root.data)
        {
            root.rchild = insert(root.rchild, value);
        }
        else if(value < root.data)
        {
            root.lchild = insert(root.lchild, value);
        }
        return root;
    }

    public void Insert(int value)
    {
        root = insert(root, value);
    }

    private void inorderTraversal(Node root)
    {
        if(root != null)
        {
            inorderTraversal(root.lchild);
            System.out.println(root.data + " ");
            inorderTraversal(root.rchild);
        }
    }

    public void Inorder()
    {
        inorderTraversal(this.root);
        System.out.println();
    }

    private void preorderTraversal(Node root)
    {
        if(root != null)
        {
            System.out.println(root.data + " ");
            preorderTraversal(root.lchild);
            preorderTraversal(root.rchild);
        }
    }

    public void Preorder()
    {
        preorderTraversal(this.root);
        System.out.println();
    }

    private void postorderTraversal(Node root)
    {
        if(root != null)
        {
            postorderTraversal(root.lchild);
            System.out.println(root.data + " ");
            postorderTraversal(root.rchild);
        }        
    }

    public void Postorder()
    {
        postorderTraversal(this.root);
        System.out.println();
    }

    private boolean searchRec(Node root, int value)
    {
        boolean bflag = false;
        if(root == null)
        {
            return bflag;
        }
        
        while(root != null)
        {
            if(value == root.data)
            {
                bflag = true;
                break;
            }
            else if(value > root.data)
            {
                root = root.rchild;
            }
            else if(value < root.data)
            {
                root = root.lchild;
            }
        }

        return bflag;        
    }

    public boolean Search(int value)
    {
        return searchRec(this.root, value);
    }


    private int countLeafNodes(Node root)
    {
        if(root == null)
        {
            return 0;
        }
        else if(root.lchild == null && root.rchild == null)
        {
            return 1;
        }
        else
        {
            return countLeafNodes(root.lchild) + countLeafNodes(root.rchild);
        }
    }

    public int CountLeaf()
    {
        return countLeafNodes(this.root);
    }

    private int countParentNodes(Node root)
    {
        int count = 0;
        if (root == null) 
        {
            return 0;
        }    
        if (root.lchild != null || root.rchild != null) 
        {
            count++;
        }

        return count + countParentNodes(root.lchild) + countParentNodes(root.rchild);
    }

    public int CountParent()
    {
        return countParentNodes(this.root);
    }

    private int countAllNodes(Node root)
    {
        int count = 0;
        if (root == null) 
        {
            return 0;
        }   
        else
        {
            return 1 + countAllNodes(root.lchild) + countAllNodes(root.rchild);
        }
    }

    public int CountAllNodes()
    {
        return countAllNodes(this.root);
    }
}


class program569
{
    public static void main(String args[])
    {
        BSTree bstobj = new BSTree();
        boolean bRet = false;
        int iRet = 0;

        bstobj.Insert(10);
        bstobj.Insert(25);
        bstobj.Insert(68);
        bstobj.Insert(5);
        bstobj.Insert(98);
        bstobj.Insert(75);
        bstobj.Insert(52);
        bstobj.Insert(48);
        bstobj.Insert(12);
        bstobj.Insert(30);

        System.out.println("Inorder Traversal: ");
        bstobj.Inorder();

        System.out.println("Preorder Traversal: ");
        bstobj.Preorder();

        System.out.println("Postorder Traversal: ");
        bstobj.Postorder();

        bRet = bstobj.Search(75);
        if(bRet == true)
        {
            System.out.println("Element is present\n");
        }
        else
        {
            System.out.println("Element is not present\n");
        }

        iRet = bstobj.CountLeaf();
        System.out.println("Leaf Nodes are: "+iRet);

        iRet = bstobj.CountParent();
        System.out.println("Parent Nodes are: "+iRet);

        iRet = bstobj.CountAllNodes();
        System.out.println("Count of All Nodes are: "+iRet);
    }

}