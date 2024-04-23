#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data= data1;
        next = nullptr;
    }
};

void traversal(Node* N){
    while(N!=nullptr){
        cout << N->data << " " ;
        N = N->next;
    }
    cout << endl;
}

int lengthofll(Node* n){
    int c=0;
    while(n!=NULL){
        c++;
        n=n->next;
    }
    return c;
}

int searchElement(Node* n,int key){
    while(n){
        if(n->data==key){
            return 1;
        }
        n=n->next;
    }
    return 0;

}

int main(){
    vector<int> v = {1,2,3,4,5};
    Node* head = new Node(v[0]);
    Node* mover = head;
    //cout << head << endl;
    for (int i = 1; i < v.size(); i++)
    {
        Node* temp = new Node(v[i]);
        mover->next = temp;
        mover = temp;

    }
    int count = lengthofll(head);
    cout << count << endl;
    //cout << searchElement(head,8) << endl;
    //traversal(head);

}