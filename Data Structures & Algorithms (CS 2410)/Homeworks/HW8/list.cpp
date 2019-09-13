//
// Created by Juilo Quintero on 11/21/18.
//

#include <iostream>
#include "Inventory.h"
#include "list.h"
using namespace std;

void list:: createNode(Inventory value)
{
    node *temp=new node;
    temp->data=value;
    temp->next= nullptr;

    if(head==nullptr)
    {
        head=temp;
        tail=temp;
        temp=nullptr;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}

void list :: display()
{
    node *temp= new node;
    temp=head;
    int currentNode = 1;

    while(temp!= nullptr)
    {
        cout <<"------------------------------------------------------------------------------\n";
        cout << "Part Number: " <<currentNode <<endl;
        cout << "==========="<< endl;
        cout << "The serial number is: "<< temp->data.getSerial()<<endl;
        cout << "The lot number is: "<< temp->data.getLot()<<endl;
        cout << "The Manufacture date: "<< temp->data.getManufact()<<endl;
        cout <<"------------------------------------------------------------------------------\n";
        temp=temp->next;
        currentNode ++;
    }
}

void list:: takePart(int serial)
{
    node *current= new node;

    node *previous= new node;

    current=head;

    for(int i=1; i< getCount(head);i++)
    {
        previous=current;
        current=current->next;

        if(current->data.getSerial() == serial)
        {
            previous->next=current->next;
            break;
        }
        previous->next=current->next;
    }

}


int list :: getCount(struct node *head)
{
    int count = 0;  // Initialize count

    struct node* current = head;  // Initialize current

    while (current != nullptr)
    {
        count++;
        current = current->next;
    }
    return count;
}