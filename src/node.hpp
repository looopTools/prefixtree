#pragma once

#include <vector>

template<typename KeyType, typename ValueType>
class Node {

    void add_child(const Node<KeyType, ValueType>& node);
    void remove_child(const KeyType& key);
    
    
private:
    
    KeyType _key;
    ValueType _value;
    std::vector<Node<KeyType, ValueType>> _children; 
};

