//
//  main.cpp
//  PriorityQueueProblem_HWK4
//
//  Created by raulyg on 11/29/15.
//  Copyright (c) 2015 raulyg. All rights reserved.
//


/*
 * C++ Program to Implement Priority Queue
 */

#include "Header.h"
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    cout << "Tanny Airlines Priority Queue" << endl;
    cout << " " << endl;
    char name[20];
    int choice, priority;
    PriorityQueue boardingQ;
    do
    {
        cout << "1.Enter Passangers and Info\n";
        cout << "2.Display Passangers and Priority\n";
        cout << "3.Quit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        cin.ignore();
        switch(choice)
        {
            case 1:
                cout << "Enter the name of the passanger to be added into the queue: " << endl;
                cin.getline(name, 20);
                cout << "Enter the persons priority: \n1: Platinum \n2: Gold \n3: Silver \n4: Iron " << endl;
                cin >> priority;
                boardingQ.insert(name, priority);
                break;
            case 2:
                boardingQ.display();
                break;                
            case 3:
                break;
            default :
                cout << "Wrong choice\n";
        }
    }
    while(choice != 3);
    
    system("Pause");
    return 0;
}

