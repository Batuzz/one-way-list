#include "ListElement.hpp"

class OneWayList {
public:
    void print();
    void unshift(int element);
    void push(int element);
    void add(int element_index_number, int number);
    void shift();
    void pop();
private:
    ListElement* first_element;
    ListElement* last_element;
};
