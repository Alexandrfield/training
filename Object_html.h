#ifndef HTML_H_ 
#define HTML_H_ 

#include "stdfx.h"
#include "Attributes.h"
#include "Node.h"


class ObjectHtml : public Node
{
public:
    ObjectHtml(std::shared_ptr<Attributes> attributes);
};

#endif  // HTML_H_