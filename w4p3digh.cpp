#include <iostream>
using namespace std;

class Queue{
private:
    int* arr;
    int front;
    int rear;
    int capacity;
public:
    Queue(int size){
        capacity=size+1;
        arr=new int[capacity];
        front=0;
        rear=0;
    }
    bool empty(){
        return rear==front;
    }
    void enqueue(int e){
        if(size()==capacity-1){
            cout<<"max!"<<endl;
            return; 
        }
        else{
            rear=(rear+1)%capacity;
            arr[rear]=e;
           
        }
    }
    int size(){
        if (empty()){
            return 0;
        }
        else if(front<rear){
            return rear-front;
        }
        else{
            return capacity-front+rear;
        }
    }
    int dequeue(){
        if(empty()){
            return -1;
        }
        int tmp=arr[front+1];
        arr[front+1]=-1;          //비워줘야 하는 배열에 -1넣음.
        if(front==(capacity-1)){
            front=0;
        }
        else{
            front++;
        }
        return tmp;
    }
    void frontCg(int x){
        arr[(front+2)%(capacity-1)]=arr[(front+2)%(capacity-1)]+x;
    }
    int fronts(){
        return arr[front+1];
    }
};
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
    int N;
    cin>>N;
    Queue p1(N);    
    Queue p2(N);
    int s1=0,s2=0;
    for(int i=0;i<N;i++){
        int k;
        cin>>k;
        p1.enqueue(k);
    }
    for(int i=0;i<N;i++){
        int k;
        cin>>k;
        p2.enqueue(k);
    }
    for(int i=0;i<N;i++){
        cout<<"Round"<<i+1<<" ";
        if(p1.fronts()>p2.fronts()){
            int tmp=p1.fronts()-p2.fronts();
            p1.frontCg(tmp);
            s1++;
        }
        else if(p1.fronts()==p2.fronts()){

        }
        else{
            int tmp=p2.fronts()-p1.fronts();
            p2.frontCg(tmp);
            s2++;
        }
        p1.dequeue();
        p2.dequeue();
        cout<<s1<<":"<<s2<<endl;
    }
    if(s1>s2){
        cout<<"Winner P1"<<endl;
    }
    else if(s1==s2){
        cout<<"Draw"<<endl;
    }
    else{
    cout<<"Winner P2"<<endl;
    }
    }
}