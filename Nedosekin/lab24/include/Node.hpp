#ifndef NODE_HPP
#define NODE_HPP
class Node
{
    char token;
    Node *left = nullptr;
    Node *right = nullptr;
public:
    Node() = default;
    ~Node() = default;
    Node(const char data);
    Node(const char data, Node *_left, Node *_right);
    char get_token() const;
    Node* get_left() const;
    Node* get_right() const;
    void set_left(Node* node);
    void set_right(Node* node);
    void rewrite_node(Node* temp_node);
};
#include "../src/Node.cpp"
#endif// NODE_HPP