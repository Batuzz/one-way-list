#include "ListElement.hpp"

ListElement::ListElement(int number) {
    this->value = number;
    this->next_element = nullptr;
}

ListElement* ListElement::get_next_element() {
    return this->next_element;
}

void ListElement::set_next_element(ListElement* next_element) {
    this->next_element = next_element;
}
