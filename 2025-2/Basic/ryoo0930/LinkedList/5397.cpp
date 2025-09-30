#include <bits/stdc++.h>

using namespace std;

void fast_io() { ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }


class Node {
    public:
        char value;
        Node* prev;
        Node* next;

        Node(char value = '\0') { this->value = value; this->prev = nullptr; this->next = nullptr; }
};
class LinkedList {
    private:
        Node* head;
        Node* tail;
    public:
        LinkedList() {
            head = new Node(); tail = new Node();
            head->next = tail; tail->prev = head;
        }
        Node* getHead() { return this->head; }
        Node* getTail() { return this->tail; }
        void insertNode(Node* nextNode, char val) {
            Node* prevNode = nextNode->prev;
            Node* newNode = new Node(val);

            prevNode->next = newNode;
            newNode->prev = prevNode;
            nextNode->prev = newNode;
            newNode->next = nextNode;
        }
        void eraseNode(Node* targetNode) {
            if(targetNode == head || targetNode == tail) return;
            Node* prevNode = targetNode->prev;
            Node* nextNode = targetNode->next;

            prevNode->next = nextNode;
            nextNode->prev = prevNode;
            delete targetNode;
        }
        void printList() {
            for(Node* current = head->next; current != tail; current = current->next) {
                cout << current->value;
            }
            cout << '\n';
        }
};


int main()
{
    fast_io();
    int testCase = 0; cin >> testCase;
    while(testCase--) {
        string operation; cin >> operation;
        LinkedList l;
        Node* cursor = l.getTail();
        for(int i = 0; i < operation.size(); i++) {
            if(operation[i] == '<') { if(cursor->prev != l.getHead()) { cursor = cursor->prev; } continue; }
            if(operation[i] == '>') { if(cursor != l.getTail()) { cursor = cursor->next; } continue; }
            if(operation[i] == '-') { if(cursor->prev != l.getHead()) { Node* targetNode = cursor->prev; l.eraseNode(targetNode); } continue; }
            l.insertNode(cursor, operation[i]);
        }
        l.printList();
    }

    return 0;
}

