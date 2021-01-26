#ifndef HEAD_H_ 
#define HEAD_H_ 

#include "stdfx.h"
#include "Attributes.h"
#include "Node.h"


class ObjectHead : public Node
{
public:
    ObjectHead(std::shared_ptr<Attributes> attributes);
};

#endif  // CENTER_H_