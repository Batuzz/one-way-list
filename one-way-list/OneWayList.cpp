#include "OneWayList.hpp"
#include <iostream>

void OneWayList::print() {
    ListElement* tmp_element = this->first_element;
    while(tmp_element) {
        std::cout << tmp_element->value << std::endl;
        tmp_element = tmp_element->get_next_element();
    }
}

void OneWayList::unshift(int number) {
    ListElement* new_element = new ListElement(number);
    if (!this->first_element) {
        this->first_element = new_element;
        this->last_element = new_element;
    } else {
        new_element->set_next_element(this->first_element);
        this->first_element = new_element;
    }
}

void OneWayList::push(int number) {
    ListElement* new_element = new ListElement(number);
    if (!this->first_element) {
        this->first_element = new_element;
        this->last_element = new_element;
    } else {
        this->last_element->set_next_element(new_element);
        this->last_element = new_element;
    }
}

void OneWayList::add(int element_index_number, int number) {
    ListElement* tmp_element = this->first_element;
    int i = 0;
    while(tmp_element) {
        if (i == element_index_number) break;
        tmp_element = tmp_element->get_next_element();
        i++;
    }
    
    ListElement* new_element = new ListElement(number);
    new_element->set_next_element(tmp_element->get_next_element());
    tmp_element->set_next_element(new_element);
}

void OneWayList::pop() {
    ListElement* tmp_element = this->first_element;
    while(tmp_element) {
        if (tmp_element->get_next_element() == this->last_element) break;
        tmp_element = tmp_element->get_next_element();
    }
    this->last_element = tmp_element;
    tmp_element->set_next_element(nullptr);
}

void OneWayList::shift() {
    this->first_element = this->first_element->get_next_element();
}
