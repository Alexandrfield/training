#ifndef NODE_H_ 
#define NODE_H_ 

#include "stdfx.h"
#include "Attributes.h"
#include "Content.h"

class Node
{
    std::shared_ptr<Attributes> attributes_;
    std::shared_ptr<Content> content_;

    std::vector<std::shared_ptr<Node>> children;

public:
    Node();
    Node(std::shared_ptr<Attributes> attributes, std::shared_ptr< Content> content);

    std::shared_ptr<Content> getContent();
    std::shared_ptr<Attributes> getAtributes();

    void addChildren(std::shared_ptr<Node>);
    int getCountChildren();
    std::shared_ptr<Node> getChildren(int i);

};

#endif  // NODE_H_
