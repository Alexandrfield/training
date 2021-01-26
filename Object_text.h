#ifndef TEXT_H_ 
#define TEXT_H_ 

#include "stdfx.h"
#include "Attributes.h"
#include "Node.h"

class ObjectText : public Node
{
public:
    ObjectText(std::shared_ptr<Attributes> attributes, std::shared_ptr<Content> content);
};

#endif  // TEXT_H_