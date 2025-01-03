#include<bits/stdc++.h>
using namespace std;
#define SPACE 10

class TreeNode {
  public:
    int value;
    TreeNode * left;
    TreeNode * right;

    TreeNode(){
      value=0;
      left=NULL;
      right=NULL;
    }

    TreeNode(int v){
      value=v;
      left=NULL;
      right=NULL;
    }
};

class BST {
  public:
    TreeNode * root;
    BST() {
      root=NULL;
    }

    bool isTreeEmpty(){
      if(root==NULL){
        return true;
        }
        else{
          return false;
          }
    }

    void insertNode(TreeNode * new_node){
      if(root==NULL){
        root=new_node;
        cout<<"Value Inserted as root node!"<<endl;
      }else{

        TreeNode * temp=root;

        while (temp != NULL){
          if(new_node->value==temp->value){
            cout<<"Value Already exist," <<
              "Insert another value!"<<endl;
              return;

          /* if node value less than temp value and left of temp left is also null then we
            can insert node to left*/
          } else if((new_node->value < temp->value) && (temp->left==NULL)) {
            temp->left=new_node;
            cout<<"Value Inserted to the left!"<<endl;
            break;

            /* if node value less than temp value but temp left is not null then we
            will do this*/
          } else if(new_node->value < temp->value) {
            temp=temp->left;

          } else if((new_node->value > temp->value) && (temp->right==NULL)) {
            temp->right=new_node;
            cout<<"Value Inserted to the right!"<<endl;
            break;


          } else {
            temp=temp->right;
          }
        }
      }
    }
      TreeNode* insertRecursive(TreeNode *r, TreeNode *new_node)
    {
      if(r==NULL)
      {
        r=new_node;
        cout <<"Insertion successful"<<endl;
        return r;
      }
    
      if(new_node->value < r->value)
      {
        r->left=insertRecursive(r->left,new_node);
      }
      else if(new_node->value > r->value)  
      {
        r->right=insertRecursive(r->right,new_node);
      }
      else
      {
          cout<<"No duplicate values allowed!"<<endl;
          return r; 
      }
      return r;
    }

    void print2D(TreeNode * r, int space) {
      if(r==NULL) // Base case  1
        return;
      space += SPACE; // Increase distance between levels   2
      print2D(r->right, space); // Process right child first 3 
      cout<<endl;
      for(int i=SPACE; i < space; i++) // 5 
        cout<<" "; // 5.1  
      cout<<r->value<<"\n"; // 6
      print2D(r->left, space); // Process left child  7
    }

    void printPreorder(TreeNode * r) //(current node, Left, Right) 
    {
      if(r==NULL)
        return;
      /* first print data of node */
      cout<<r->value<<" ";
      /* then recur on left sutree */
      printPreorder(r->left);
      /* now recur on right subtree */
      printPreorder(r->right);
    }

    void printInorder(TreeNode * r) //  (Left, current node, Right)
    {
      if(r==NULL)
        return;
      /* first recur on left child */
      printInorder(r->left);
      /* then print the data of node */
      cout<<r->value<<" ";
      /* now recur on right child */
      printInorder(r->right);
    }
    void printPostorder(TreeNode * r) //(Left, Right, Root)
    {
      if(r==NULL)
        return;
      // first recur on left subtree 
      printPostorder(r->left);
      // then recur on right subtree 
      printPostorder(r->right);
      // now deal with the node 
      cout<<r->value<<" ";
    }

    TreeNode * iterativeSearch(int v) {
      if(root==NULL) {
        return root;
      } else {
        TreeNode * temp=root;
        while (temp != NULL) {
          if(v==temp->value) {
            return temp;
          } else if(v < temp->value) {
            temp=temp->left;
          } else {
            temp=temp->right;
          }
        }
        return NULL;
      }
  }

  TreeNode * recursiveSearch(TreeNode * r, int value) {
    if(r==NULL || r->value==value)
      return r;

    else if(value < r->value)
      return recursiveSearch(r->left, value);

    else
      return recursiveSearch(r->right, value);
  }

  int height(TreeNode * r) {
    if(r==NULL)
      return -1;
    else {
      /* compute the height of each subtree */
      int lheight=height(r->left);
      int rheight=height(r->right);

      /* use the larger one */
      if(lheight > rheight)
        return (lheight + 1);
      else return (rheight + 1);
    }
  }

  /* Print nodes at a given level */
  void printGivenLevel(TreeNode * r, int level) {
    if(r==NULL)
      return;
    else if(level==0)
      cout<<r->value<<" ";
    else // level > 0  
    {
      printGivenLevel(r->left, level - 1);
      printGivenLevel(r->right, level - 1);
    }
  }
  void printLevelOrderBFS(TreeNode * r) {
    int h=height(r);
    for(int i=0; i <= h; i++)
      printGivenLevel(r, i);
  }

  TreeNode * minValueNode(TreeNode * node) {
    TreeNode * current=node;
    /* loop down to find the leftmost leaf */
    while (current->left != NULL) {
      current=current->left;
    }
    return current;
  }

  TreeNode * deleteNode(TreeNode * r, int v) {
    // base case 
    if(r==NULL) {
      return NULL;
    }
    // If the key to be deleted is smaller than the root's key, 
    // then it lies in left subtree 
    else if(v < r->value) {
      r->left=deleteNode(r->left, v);
    }
    // If the key to be deleted is greater than the root's key, 
    // then it lies in right subtree 
    else if(v > r->value) {
      r->right=deleteNode(r->right, v);
    }
    // ifkey is same as root's key, then This is the node to be deleted 
    else {
      // node with only one child or no child 
      if(r->left==NULL) {
        TreeNode * temp=r->right;
        delete r;
        return temp;
      } else if(r->right==NULL) {
        TreeNode * temp=r->left;
        delete r;
        return temp;
      } else {
        // node with two children: Get the inorder successor (smallest 
        // in the right subtree) 
        TreeNode * temp=minValueNode(r->right);
        // Copy the inorder successor's content to this node 
        r->value=temp->value;
        // Delete the inorder successor 
        r->right=deleteNode(r->right, temp->value);
        //deleteNode(r->right, temp->value); 
      }
    }
    return r;
  }

};


int main() {
  BST obj;
  int option, value;

  do{
      cout<<"What operation do you want to perform?"<<"Select Option number. Enter 0 to exit."<<endl;
      cout<<"1. Insert Node"<<endl;
      cout<<"2. Search Node"<<endl;
      cout<<"3. Delete Node"<<endl;
      cout<<"4. Print/Traversal BST values"<<endl;
      cout<<"5. Height of Tree"<<endl;
      cout<<"6. Clear Screen"<<endl;
      cout<<"0. Exit Program"<<endl;

    cin>>option;
    //
    TreeNode* new_node =new TreeNode();

    switch (option) {

        case 0:

            break;

        case 1:
            cout <<"INSERT"<<endl;
            cout<<"Enter VALUE of TREE NODE to INSERT in BST: ";
            cin>>value;
            new_node->value=value;
            // obj.root= obj.insertRecursive(obj.root,new_node);
            obj.insertNode(new_node);
            cout<<endl;
            break;
        
        case 2:
            cout<<"SEARCH"<<endl;
            break;

        case 3:
            cout<<"DELETE"<<endl;
            break;

        case 4:
            cout<<"PRINT 2D:"<<endl;
            obj.print2D(obj.root, 5);

        cout<<endl;
            cout<<"Print Level Order BFS:\n";
            //   obj.printLevelOrderBFS(obj.root);
            cout<<endl;
            break;

        case 5:
            cout<<"TREE HEIGHT"<<endl;
            //   cout<<<<endl;
            break;

        case 6:
            system("cls");
            break;


        default:
            cout<<"Enter Proper Option number"<<endl;
            }

    }while (option != 0);

    return 0;
}