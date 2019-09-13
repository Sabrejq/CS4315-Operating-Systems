//
// Created by Juilo Quintero on 11/21/18.
//

#ifndef LASTHW_LINKEDINVENTORY_H
#define LASTHW_LINKEDINVENTORY_H

#include "Inventory.h"

class list:Inventory {
private:

    struct node
    {
    public:
        Inventory data;
        node *next;
    };
    node *head, *tail;

public:
    list()
    {
        head= nullptr;
        tail= nullptr;
    }


    void createNode(Inventory value);
    void takePart(int serial);
    int getCount(struct node* head);
    void display();

};
#endif //LASTHW_LINKEDINVENTORY_H
