#include<bits/stdc++.h>
using namespace std;
#define SPACE 10

// Class for Node In tree
class TreeNode{
    public:
        int value;
        TreeNode* left;
        TreeNode* right;

        TreeNode(){
            value = 0;
            left=NULL;
            right=NULL;
        }

        
        TreeNode(int v){
            value = v;
            left=NULL;
            right=NULL;
        }
};


// Class for Adding Nodes and Perform Activity
class BST{
    public:
    TreeNode * root;

    BST(){
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

    void insertNode(TreeNode* new_node){
        if(root == NULL){
            root = new_node;
            cout<<"Node inserted as root node"<<endl;
        }
        else{
            TreeNode* temp = root;

            while (temp!=NULL)
            {
                /* code */
                if(new_node->value == temp->value){
                    cout<<"Node Already Exist"<<endl;
                    return;
                }

                /* if node value less than temp value and left of temp left is also null then we
                can insert node to left*/
                else if((new_node->value<temp->value)&&(temp->left == NULL)){
                    temp->left = new_node;
                    cout<<"Value Inserted to the left"<<endl;
                    break;
                }
                /* if node value less than temp value but temp left is not null then we
                will do this*/
                else if(new_node->value > temp->value){
                    temp->left=new_node;
                }


                else if((new_node->value > temp->value)&&(temp->right == NULL)){
                    temp->right = new_node;
                    cout<<"Value Inserted to the right"<<endl;
                    break;
                }
                else if(new_node->value > temp->value){
                    temp->right=new_node;
                }
                else{
                    temp = temp->right;
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

    void print2D(TreeNode * r, int space){
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

     void printTree(TreeNode * r){
        if(r==NULL) // Base case  1
            return;
        printTree(r->right); // Process right child first 3 
        // cout<<endl;
        cout<<r->value<<" "; // 6
        printTree(r->left); // Process left child  7
        cout<<endl;
        }

    void printPreorder(TreeNode* r)    // (Root,left,right)
    {
        if(r==NULL){
            return;
        }
        cout<<r->value<<" ";
        printPreorder(r->left);
        printPreorder(r->right);
    }


    void printInorder(TreeNode* r)    // (left,Root,right)
    {
        if(r==NULL){
            return;
        }
        printInorder(r->left);
        cout<<r->value<<" ";
        printInorder(r->right);
    }


    void printPostOrder(TreeNode* r) 
    {
        if(r==NULL){
            return;
        }
        printPostOrder(r->left);
        printPostOrder(r->right);
        cout<<r->value<<" ";
    }

    TreeNode* iterativesearch(int val){
        if(root==NULL){
            return root;
        }
        else{
            TreeNode *temp = root;
            while(temp!=NULL){
                if(val == temp->value){
                    return root;
                }

                else if(val < temp->value){
                    temp = temp->left;
                }

                else if(val > temp->value){
                    temp = temp->right;
                }
            }
        }
        return NULL;
    }


    int height(TreeNode* r){
        if(r==NULL){
            return -1;
        }
        else{
            int lheight = height(r->left);
            int rheight = height(r->right);

            if(lheight>rheight)
                return (lheight+1);
            else return (rheight+1);
        }
    }
    // BFS
    void printGivenLevel(TreeNode *r,int level){
        if(r==NULL){
            return;
        }
        else if(level == 0){
            cout<<r->value<<" ";
        }
        else{
            printGivenLevel(r->left,level-1);
            printGivenLevel(r->right,level-1);
        }
    }

    void printLevelOrderBFS(TreeNode *r){
        int h = height(r);
        for(int i=0;i<h;i++){
            printGivenLevel(r,i);
        }
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

    switch(option){
        case 0:
            break;

        case 1:
            cout<<"INSERT"<<endl;
            cout<<"Enter VALUE of TREE NODE to INSERT in BST: ";
            cin>>value;
            new_node->value=value;
            obj.root= obj.insertRecursive(obj.root,new_node);
            // obj.insertNode(new_node);
            cout<<endl;
            break;
        
        case 2:
            int val;
            cout<<"SEARCH"<<endl;
            cout<<"Enter Number Want to search"<<endl;
            cin>>val;
            new_node =  obj.iterativesearch(val);
            if(new_node!=NULL){
                cout<<"Value found"<<endl;
            }
            else{
                cout<<"Value Not found"<<endl;
            }
            break;

        case 3:
            cout<<"DELETE"<<endl;
            break;

        case 4:
            // cout<<"PRINT 2D:"<<endl;
            // obj.print2D(obj.root, 5);
            cout<<endl;
            obj.printTree(obj.root);
            cout<<"Pre-Order"<<endl;
            obj.printPreorder(obj.root);
            cout<<endl;

            cout<<"In-Order"<<endl;
            obj.printInorder(obj.root);
            cout<<endl;

            cout<<"Post-Order"<<endl;
            obj.printPostOrder(obj.root);
            cout<<endl;
            // cout<<"Print Level Order BFS:\n";
            // obj.printPreorder(obj.root);


            cout<<"LevelOrderBFS"<<endl;
            obj.printLevelOrderBFS(obj.root);
            cout<<endl;
            break;

        case 5:
            int height;
            cout<<"TREE HEIGHT : ";
            //   cout<<<<endl;
            height = obj.height(obj.root);
            cout<<height<<endl;
            break;

        case 6:
            system("cls");
            break;


        default:
        cout<<"Enter Proper Option number"<<endl;
        }

    }while(option != 0);

    // return 0;
}