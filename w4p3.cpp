#include <iostream>
using namespace std;

class Queue{
private:
    int* arr;
    int front;//1빠 위치
    int rear;//막빠 위치
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
            return; //꽉차서 추가 불가능
        }
        else{
            if(rear==capacity-1){
                rear=0;
                arr[rear]=e;
            }
            else{
                rear++;
                arr[rear]=e;
            }
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
    int fronts(){
        return arr[front+1];
    }
    int rears(){
        return arr[rear];
    }
    void print(){
        if(empty()){
            cout<<"empty";
        }
        else if(front<rear){
            for(int i=front+1;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            }
        else{
            for(int i=front+1;i<capacity;i++){
                cout<<arr[i]<<" ";
            }
            for (int i=0;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
};
int main(){
    int N,T;
    cin>>N>>T;
    string str;
    Queue q1(N);
    for(int i=0;i<T;i++){
        cin>>str;
        if(str=="enqueue"){
            int E;
            cin>>E;
            q1.enqueue(E);
        }
        if(str=="print"){
            q1.print();
        }
        if(str=="dequeue"){
            cout<<q1.dequeue()<<endl;
        }
        if(str=="size"){
            cout<<q1.size()<<endl;
        }
    }
}