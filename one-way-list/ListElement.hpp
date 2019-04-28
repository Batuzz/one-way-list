class ListElement {
public:
    ListElement(int);
    int value;
    void set_next_element(ListElement*);
    ListElement* get_next_element();
private:
    ListElement* next_element;
};
