#include <iostream>
using namespace std;

template<typename T>
class Stack{
private:
    T* array;
    int size;
    int t;
public:
    Stack(int max){
        t=-1;
        size=max;
        array=new T[max];
    };
    bool Empty(){
        return t==-1;
    };
    void Push(T value){
        if(t+1>=size){
            cout<<"fulled"<<endl;
        }
        else{
            t++;
            array[t]=value;
        }
    }
    T Pop(){
        if(Empty()){
            return -1;
        }
        else{
            return array[t--];
        }
    };
    T top(){
        if(Empty()){
            return -1;
        }
        else{
            return array[t];
        }
    }

};
bool priority(char x,char y){
    if(x=='*'||x=='/'){
        return true;
    }
    else if(x=='+'||x=='-'){
        if(y=='*'||y=='/'){
            return false;
        }
        else   
            return true;
    }
    else{
        cout<<"an error";
        return -1;
    }
}
int operating(int x,int y,char a){
    if(a=='*'){
        return x*y;
    }
    else if(a=='/'){
        return x/y;
    }
    else if(a=='+'){
        return x+y;
    }
    else if(a=='-'){
        return x-y;
    }
    else{
        cout<<"an error";
        return -1;
    }
}

int main(){
    Stack<int> s1(5);
    Stack<char> s2(4);
    cout<<"stacks created well"<<endl;
    char ch[9];
    cin>>ch;
    cout<<ch<<"right?";
    for(int i=8;i>=0;i--){
        if(i%2==0){
            int value=(int)ch[i]-48;
            s1.Push(value);
        }
        else{
            s2.Push(ch[i]);
        }
    }//여기까지는 원하는 대로 됨.
    Stack<char> op(3);
    Stack<int> value(3);
    int result=0;
    cout<<s1.top()<<"is pushed on value"<<endl;
    value.Push(s1.Pop());
    cout<<s2.top()<<"is pushed on op"<<endl;
    while(!s1.Empty()){
        op.Push(s2.Pop());
        value.Push(s1.Pop());
        if(priority(op.top(),s2.top())){
            int x=value.Pop();
            result=operating(x,value.Pop(),op.Pop());
            cout<<"current result is"<<result<<endl;
            value.Push(result);
        }
        else{
            op.Push(s2.Pop());
            cout<<"current result is"<<result<<endl;
        }
    }

    
}