#include "Node.h"
#include "Attributes.h"


Node::Node(std::shared_ptr<Attributes> attributes, std::shared_ptr<Content> content)
{
    attributes_ = attributes;
    content_ = content;
}

Node::Node()
{
    attributes_ = nullptr;
    content_ = nullptr;
}


std::shared_ptr<Content> Node::getContent()
{
    return content_;
}


std::shared_ptr<Attributes> Node::getAtributes()
{
    return attributes_;
}


void Node::addChildren(std::shared_ptr<Node> newChild)
{
    children.push_back(newChild);
}


int Node::getCountChildren()
{
    return static_cast<int>(children.size());
}


std::shared_ptr<Node> Node::getChildren(int i)
{
    return children[i % static_cast<int>(children.size())];
}