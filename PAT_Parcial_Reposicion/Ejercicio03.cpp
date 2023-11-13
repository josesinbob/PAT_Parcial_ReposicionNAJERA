#include "Ejercicio03.h"

Node<int>* Ejercicio03::detectCycle(Node<int>* head)
{
    if (head == nullptr) {
        return nullptr;
    }

    Node<int>* current = head;

    while (current != nullptr) {
        if (current->marked) {
            return current;
        }

        current->marked = true;
        current = current->next;
    }

    return nullptr;
}
