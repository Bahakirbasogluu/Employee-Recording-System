#include <iostream>
using namespace std;


class node{
public:

    int data;
    node* next;
    node* prev;

public:
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }

    int getData() const;

    void setData(int data);

    node *getNext() const;

    void setNext(node *next);

    node *getPrev() const;

    void setPrev(node *prev);
};



void insertAtHeadDouble(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head != NULL){
        head->prev =n;
    }

    head =  n;

}

void insertAtTailDouble(node* &head, int val){
    node* n = new node(val);
    node* temp = head;

    if (head == NULL){
        insertAtHeadDouble(head,val);
        return;
    }

    while (temp->next!=NULL){
        temp = temp->next;
    }
    temp->next =n;
    n->prev = temp;
}

void displayDouble(node* &head){
    node* temp = head;

    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteAtHeadDouble(node* &head){

    node* todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}

void deletionDouble(node* &head, int pos){

    if(pos == 1 ){
        deleteAtHeadDouble(head);
        return;
    }

    node* temp = head;
    int count = 1 ;

    while(temp != NULL && count != pos){
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;

    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }

    delete temp;
}

int lengthDouble(node* &head){

    int l = 0 ;
    node* temp =head;
    while (temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

void intersectDouble(node* &head1, node* &head2, int pos){

    node* temp1 = head1;
    pos--;
    while (pos--){
        temp1 = temp1->next;
    }
    node* temp2 = head2;
    while (temp2->next != NULL){
        temp2=temp2->next;
    }
    temp2->next = temp1;
}

int intersectionDouble(node* &head1, node* &head2){

    int l1 = lengthDouble(head1);
    int l2 = lengthDouble(head2);

    int d = 0 ;
    node* ptr1;
    node* ptr2;

    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else {
        d = l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while (d){
        ptr1 = ptr1->next;
        if(ptr1 == NULL){
            return -1;
        }
        d--;
    }

    while (ptr1 != NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}

node* kappendDouble(node* &head, int k){
    node* newHead;
    node* newTail;
    node* tail = head;

    int l = lengthDouble(head);
    k = k % l;
    int count = 1;
    while (tail->next !=NULL){
        if(count == l - k ){
            newTail = tail;
        }
        if (count==l-k+1){
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }

    newTail->next  = NULL;
    tail->next = head;
    return newHead;
}

node* mergeDouble(node* &head1, node* &head2) {

    node *p1 = head1;
    node *p2 = head2;
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;
    while (p1 != NULL && p2 != NULL) {
        if (p1->data < p2->data) {
            p3->next = p1;
            p1 = p1->next;
        }
        else {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1!=NULL){
        p3->next =p1;
        p1=p1->next;
        p3=p3->next;
    }
    while (p2!=NULL){
        p3->next =p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummyNode->next;
}

node* mergeRecursiveDouble(node* &head1, node* &head2){

    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next = mergeRecursiveDouble(head1->next,head2);
    }
    else{
        result=head2;
        result->next = mergeRecursiveDouble(head1,head2->next);
    }
    return result;
}

int node::getData() const {
    return data;
}

void node::setData(int data) {
    node::data = data;
}

node *node::getNext() const {
    return next;
}

void node::setNext(node *next) {
    node::next = next;
}

node *node::getPrev() const {
    return prev;
}

void node::setPrev(node *prev) {
    node::prev = prev;
}