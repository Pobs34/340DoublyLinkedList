#ifndef INC_340DOUBLYLINKEDLIST_NODE_H
#define INC_340DOUBLYLINKEDLIST_NODE_H


#include <string>

// declared node with public and private elements.
class Node {
private:
    std::string word;
    Node* next;
    Node* prev;

public:
    Node(std::string w = "");
    std::string getWord() const;
    void setWord(const std::string& w);
    Node* getNext() const;
    void setNext(Node* n);
    Node* getPrev() const;
    void setPrev(Node* p);

    // declaration of operators
    bool operator==(const Node& other) const;
    bool operator>(const Node& other) const;
    bool operator<(const Node& other) const;
    bool operator>=(const Node& other) const;
    bool operator<=(const Node& other) const;
    bool operator!=(const Node& other) const;


    bool operator==(const std::string& rhs) const;
    bool operator!=(const std::string& rhs) const;
    bool operator>(const std::string& rhs) const;
    bool operator<(const std::string& rhs) const;
    bool operator>=(const std::string& rhs) const;
    bool operator<=(const std::string& rhs) const;
};


bool operator==(const std::string& lhs, const Node& rhs);
bool operator!=(const std::string& lhs, const Node& rhs);
bool operator>(const std::string& lhs, const Node& rhs);
bool operator<(const std::string& lhs, const Node& rhs);
bool operator>=(const std::string& lhs, const Node& rhs);
bool operator<=(const std::string& lhs, const Node& rhs);
#endif