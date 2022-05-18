#include <iostream>
#include <vector>
using namespace std;
struct Node{
    Node* parent;
    int data;
    vector<Node*> chi;
    Node(int n):data(n){
        parent=NULL;
    };
};
class Tree{
public:
    Node* root;
    vector<Node*> all;
    int acc;
public:
    Tree(){
        root=new Node(1);
        all.push_back(root);
        acc=0;
    }
    int find(int key){
        for(int i=0;i<all.size();i++){
            if(key==all[i]->data){
                return i;
            }
        }
            return -1;
    }
    void insertNode(int a,int b){
        int key=find(a);
        if (key==-1){
            cout<<"not found"<<endl;
        }
        else{
            Node* newNode=new Node(b);
            newNode->parent=all[key];
            all[key]->chi.push_back(newNode);
            all.push_back(newNode);
        }        
    }
    void cstart(int n){
        counting(all[find(n)]);
    }
    void counting(Node* node){
        if(node!=root){
            acc++;
            counting(node->parent);
        }
        else{
            cout<<acc<<endl;
            acc=0;
            return;
        }
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
    for(int i=0;i<M;i++){
        int x;
        cin>>x;
        t1.cstart(x);
    }
}