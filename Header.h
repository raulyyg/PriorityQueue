//
//  Header.h
//  PriorityQueueProblem_HWK4
//
//  Created by raulyg on 11/29/15.
//  Copyright (c) 2015 raulyg. All rights reserved.
//

#ifndef PriorityQueueProblem_HWK4_Header_h
#define PriorityQueueProblem_HWK4_Header_h


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>

using namespace std;

class PriorityQueue
{
    struct node
    {
        int priority;
        char name [20];
        struct node *link;
    };
    
    node array[50];
    
private:
    node *front;
    
public:
    PriorityQueue();
    void insert(char *name, int priority);
    void display();
};

    
PriorityQueue:: PriorityQueue()
{
    front = NULL;
}
   
void PriorityQueue:: insert(char *name, int priority)
{
    node *temp, *queue;
    temp = new node;
    strcpy(temp->name, name);
    temp->priority = priority;
    if (front == NULL || priority < front->priority)
    {
        temp->link = front;
        front = temp;
    }
    else
    {
        queue = front;
        while (queue->link != NULL && queue->link->priority <= priority)
            queue = queue->link;
        temp->link = queue->link;
        queue->link = temp;
    }
}


void PriorityQueue:: display()
{
    node *ptr;
    ptr = front;
    if (front == NULL)
        cout << "Queue is empty\n";
    else
    {	cout << "Boarding List:\n";
        cout << "Priority       Name\n";
        while(ptr != NULL)
        {
            cout<<ptr->priority << "                 " << ptr->name << endl;
            ptr = ptr->link;
        }
    }
}

#endif
