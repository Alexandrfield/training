#ifndef BODDY_H_ 
#define BODDY_H_ 

#include "stdfx.h"
#include "Attributes.h"
#include "Node.h"


class ObjectBody: public Node
{
public:
    ObjectBody(std::shared_ptr<Attributes> attributes);
};

#endif  // BODDY_H_