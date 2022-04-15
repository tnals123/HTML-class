#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

class linkedlist{
private:
    node* head;
    node* tail;
    int listsize;
public:
    linkedlist(){
        head = NULL;
        tail = NULL;
        listsize = 0;
    }
    bool empty(){
        if (listsize == 0){
            return true;
        }
        else{
            return false;
        }
   }
   void append(int data){
       node* newNode = new node;
       newNode ->data = data;
       newNode ->next = NULL;
       if (empty()){
           head = tail = newNode;
       }
       else{
           tail->next = newNode;
           tail = newNode;
       }
       listsize ++;
   }
   void insert(int idx,int data){
       if (empty()){
           append(data);
       }
       else if (idx == 0){
           node* newNode = new node;
           newNode->data = data;
           newNode->next = head;
           head = newNode;
       }
       else if (idx != 0){
           node* newNode = new node;
           newNode->data = data;
           node* curNode = head;
           for (int i = 1; i<idx; i++){
               curNode = curNode->next;
           }
           newNode->next = curNode->next;
           curNode->next = newNode;
           listsize ++;
       }
    

   }
    
};





int main(){
    linkedlist list;
    list.empty();
}