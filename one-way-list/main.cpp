#include <iostream>
#include "OneWayList.hpp"


/**
 * Singly linked list based on integer values.
 * @author Bartosz Studnik
 */
int main(int argc, const char * argv[]) {
    OneWayList* list = new OneWayList();
    list->push(5);
    list->push(6);
    list->push(7);
    list->push(8);
    
    list->unshift(0);
    list->add(1, 1);
    list->shift();
    list->pop();
    
    list->push(99);
    
    list->print();
    return 0;
}
