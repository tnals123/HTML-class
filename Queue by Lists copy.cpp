#include <iostream>
using namespace std;

class Node{
    int elem;
    Node* Next;
    friend class Queue;
};

class Queue{
private:
    Node* front;
    Node* rear;
    int count;
public:
    Queue(){
        Node* dummy=new Node;
        dummy->elem=-1;
        front=dummy;
        rear=dummy;
        count=0;
    }
    bool isEmpty(){
        return count==0;
    }
    int size(){
        return count;
    }
    void enqueue(int e){
        Node* newNode=new Node;
        newNode->elem=e;
        if(isEmpty()){
            front->Next=newNode;
            count++;
            rear=newNode;
        }
        else{
             Node* tmpNode=front;
            for(int i=0;i<count;i++){
                tmpNode=tmpNode->Next;
            }
            tmpNode->Next=newNode;
            rear=newNode;
            count++;
        }
    }
    void fronts(){
        if(isEmpty()){
            cout<<"Empty"<<endl;
        }
        else{
            cout<<front->Next->elem<<endl;
        }
    }
    void rears(){
        if(isEmpty()){
            cout<<"Empty"<<endl;
        }
        else{
            cout<<rear->elem<<endl;
        }
    }
    int dequeue(){
        if(isEmpty()){
            return -1;
        }
        Node* tmp=front->Next;
        front->Next=front->Next->Next;
        count--;
        return tmp->elem;
    }
    void print(){
        if(isEmpty()){
            cout<<"is empty"<<endl;
            return ;
        }
        else{
            Node* tmpNode=front;
            for(int i=0;i<count;i++){
                tmpNode=tmpNode->Next;
                cout<<tmpNode->elem<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int T;
    cin>>T;
    string str;
    Queue q1;
    for(int i=0;i<T;i++){
        cin>>str;
        if(str=="enqueue"){
            int value;
            cin>>value;
            q1.enqueue(value);
        }
        if(str=="print"){
            q1.print();
        }
        if(str=="dequeue"){
            if(q1.isEmpty()){
                cout<<"Empty"<<endl;
            }
            else{
            cout<<q1.dequeue()<<endl;
            }
        }
        if(str=="size"){
            cout<<q1.size()<<endl;
        }
        if(str=="front"){
            q1.fronts();
        }
        if(str=="rear"){
            q1.rears();
        }
        if(str=="isEmpty"){
            if(q1.isEmpty()){
                cout<<"True"<<endl;
            }
            else{
                cout<<"False"<<endl;
            }
        }
    }
}