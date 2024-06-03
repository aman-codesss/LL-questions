#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }


};
void insertAtHeat(Node* &head, int d){
        Node* temp = new Node(d);
        temp->next= head;
        head =  temp;
    }
void print(Node* &head){
        Node* temp = head;
        while(temp!= nullptr){

        cout<<temp->data<<" ";
        temp = temp->next;
        }
        cout<<endl;

    }
void printVector(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}



bool checkPali(vector<int> arr){
    int s= 0;
    int e = arr.size()-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;

}

int main(){
    Node* a = new Node(10);
    Node* head = a;
    print(head);
    insertAtHeat(head,20);
    insertAtHeat(head,20);
    insertAtHeat(head,10);
    print(head);
    
    //creating a vector:
    vector<int> v ;
    Node* temp = head;
    while(temp!=nullptr){
    v.push_back(temp->data);
    temp = temp->next;}


    // printVector(arr);
    cout<<checkPali(v);
    

}