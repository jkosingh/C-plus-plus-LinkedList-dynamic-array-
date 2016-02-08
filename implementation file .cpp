#include <iostream>
#include "linkedlist.h"
#include <cstdlib>

using namespace std;

LinkedList::LinkedList()
{
    front=NULL;
    curr=NULL;
    temp=NULL;
}

void LinkedList::insert_beginning(int value)
{
    ListNodePtr n = new ListNode;
    n->next = NULL;
    n->value = value;

    if(front !=NULL)
    {
     curr = front;
        while(curr->next !=NULL)
        {
        curr =curr->next;
        }
        curr->next=n;

    }
    else
    {
        front = n;
    }
}

void LinkedList::remove_value(int val)
{
    ListNodePtr delPtr = NULL;
    temp = front;
    curr = front;
    while(curr != NULL && curr->value != val){
    temp=curr;
    curr=curr->next;
    }
    if(curr == NULL){
        cout<< val <<" was not in the list"<<endl;
        delete delPtr;
    }
    else{
    delPtr=curr;
    curr=curr->next;
    temp->next=curr;
    delete delPtr;
    cout<<"The value "<< val<<" was deleted"<<endl;

    }

}

void LinkedList::Printlist(){
    curr=front;
    while(curr !=NULL)
    {
        cout<<curr->value<<endl;
        curr = curr->next;
    }
}
