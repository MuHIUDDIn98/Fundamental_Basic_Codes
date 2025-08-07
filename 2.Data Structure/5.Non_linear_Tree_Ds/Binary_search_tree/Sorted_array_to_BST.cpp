 #include<bits/stdc++.h>
 using namespace std;
 
 class Node{
     public:
     int value;
     Node* left;
     Node *right;
 
     Node(int value){
         this->value=value;
         this->right = NULL;
         this->left = NULL;
     }
 };
 

void level_order(Node *root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *f = q.front();
        q.pop();

        cout<<f->value<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}


Node* convert(int a[], int size, int l, int r){

    if(l>r)
        return NULL;
    int mid = (l+r)/2;
    Node * root = new Node(a[mid]);
    Node *leftroot = convert(a,size,l,mid-1);
    Node *rightroot = convert(a,size,mid+1,r);
    root->left = leftroot;
    root->right = rightroot;
    return root;

}



 int main(){

    int n;
    cin>> n;

    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;


    Node *rootNode = convert(a,n,0,n-1);
    level_order(rootNode);
    
 return 0;
 }