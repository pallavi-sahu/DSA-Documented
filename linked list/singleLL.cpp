#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;

      Node(int data){
        this->data = data;
        this->next = NULL;
      }


};

void insertathead(Node* &head, int data){
   Node* temp = new Node(data);
   temp->next = head;
   head = temp;

}

int main(){
    Node* node1 = new Node();
    cout << node1->data <<endl;
    cout << node1->next << endl;
}