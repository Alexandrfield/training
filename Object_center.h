#ifndef CENTER_H_ 
#define CENTER_H_ 

#include "stdfx.h"
#include "Attributes.h"
#include "Node.h"


class ObjectCenter : public Node
{
public:
    ObjectCenter(std::shared_ptr<Attributes> attributes);
};

#endif  // CENTER_H_