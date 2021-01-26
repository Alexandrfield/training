#ifndef META_H_ 
#define META_H_ 

#include "stdfx.h"
#include "Attributes.h"
#include "Node.h"


class ObjectMeta : public Node
{
public:
    ObjectMeta(std::shared_ptr<Attributes> attributes);
};

#endif  // META_H_