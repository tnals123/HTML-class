#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int e){
        data=e;
        next=NULL;
    };
};

class Stack{
private:
    Node* head;
    int counter;
public:
    Stack(){
        head=NULL;
        counter=0;
    }
    bool Empty(){
        return counter==0;
    }
    int size(){
        return counter;
    }
    int Top(){
        if(Empty()){
            cout<<"0";
            return 0;
        }
        return head->data;
    }
    void Push(int e){
        Node* newNode=new Node(e);
        counter++;
        if(Empty()){
            head=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    };
    int Pop(){
        if(Empty()){
            return -1;
        }
        else{
            Node* tmp=head;
            head=head->next;
            counter--;
            return tmp->data;
        }
    }
};

int main(){
    int T;
    cin>>T;
    string str;
    Stack s1;
    for (int i=0;i<T;i++){
        cin>>str;
        if(str=="Push"){
            int v;
            cin>>v;
            s1.Push(v);
        }
        if(str=="Top"){
            cout<<s1.Top()<<endl;
        }
        if(str=="Pop"){
            cout<<s1.Pop()<<endl;
        }
    }
}


