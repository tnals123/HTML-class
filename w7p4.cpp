//9:40 10:07컴파일 완벽성공
#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int key;
    int data;
    Node* parent;
    vector<Node*> chi;
    Node(int x){
        key=x;
    }
};

class Tree{
private:
    Node* root;
    vector<Node*> all;
    int sum;

public:
    Tree(){
        root=new Node(1);
        all.push_back(root);
        sum=0;
    }
    void insertNode(int p,int k){
        int keyValue=find(p);
        if(keyValue==-1){
            cout<<"parent not found"<<endl;
            return;
        }
        Node* newNode=new Node(k); 
        newNode->parent=all[keyValue];
        all[keyValue]->chi.push_back(newNode);
        all.push_back(newNode);
    }
    void setData(int x,int data){
        int k=find(x);
        if(k==-1){
            cout<<"not found"<<endl;
        }
        else{
            all[k]->data=data;
        }
    }
    int find(int k){
        for(int i=0;i<all.size();i++){
            if(k==all[i]->key){
                return i;
            }
        }
        return -1;
    }
    void preorder(Node* node){
        if(node->chi.empty()){
            sum+=node->data;
            return;
        }
        else{
            sum+=node->data;
            for(Node* n:node->chi){
                preorder(n);
            }
        }
    }
    void run(int i){
        int k=find(i);
        Node* node=all[k];
        preorder(node);
        cout<<sum<<endl;
        sum=0;
    }
};
int main(){
    int N,M;
    cin>>N>>M;
    Tree t1;
    for(int i=0;i<N-1;i++){
        int x,y;
        cin>>x>>y;
        t1.insertNode(x,y);
    }
    for(int i=0;i<N;i++){
        int x,y;
        cin>>x>>y;
        t1.setData(x,y);
    }
    for(int i=0;i<M;i++){
        int x;
        cin>>x;
        t1.run(x);
    }
}