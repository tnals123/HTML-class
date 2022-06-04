#include<iostream>
using namespace std;
class Queue{
private:
    int size;
    int* arr;
    int front;
    int rear;
public:
    Queue(int n){
        size=n;
        arr=new int[size];
        front=0;
        rear=0;
        arr[0]=-1;
    }
    bool empty(){
        if(front==rear){
          return true;  
        }
        return false;
    }
    void enqueue(int value){
        if(front+rear==size){
            return;
        }
        else{    
            rear=(rear+1)%size;
            arr[rear]=value;
        }
    }
   int dequeue(){
       if(empty()){
           return -1;
       }
       front=(front+1)%size;
       if(front==0){
           return arr[size-1];
       }
       return arr[front-1];
   }
   int fronts(){
       if(front>=size){
           return arr[0];
       }
       return arr[front+1];
   }
    void frontPlus(int m){
        if(front>=(size-1)){
            arr[0]+=m;
            return;
        }
        arr[front+1]+=m;
        
    }
};

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N;
        cin>>N;
        Queue q1(N+1);
        Queue q2(N+1);
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            q1.enqueue(x);
        }
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            q2.enqueue(x);
        }
        int p1=0,p2=0;
        for(int i=0;i<N;i++){
            if(q1.fronts()>q2.fronts()){
                int dif=q1.fronts()-q2.fronts();
                p1++;
                q1.dequeue();
                q2.dequeue();
                q2.frontPlus(dif);
                cout<<"Round"<<i+1<<" P1 "<<dif<<endl;
            }
            else if(q1.fronts()==q2.fronts()){
                q1.dequeue();
                q2.dequeue();
                cout<<"Round"<<i+1<<" Draw "<<endl;
            }
            else{
                int dif=q2.fronts()-q1.fronts();
                p2++;
                q1.dequeue();
                q2.dequeue();
                q1.frontPlus(dif);
                cout<<"Round"<<i+1<<" P2 "<<dif<<endl;
            }
        
        }
        if(p1>p2){
            cout<<"Winner P1"<<endl;
        }
        else if(p1==p2){
            cout<<"Draw"<<endl;
        }
        else{
            cout<<"Winner P2"<<endl;
        }
        
    }

}