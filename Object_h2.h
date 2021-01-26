#ifndef H2_H_ 
#define H2_H_ 

#include "stdfx.h"
#include "Attributes.h"
#include "Node.h"


class ObjectH2 : public Node
{
public:
    ObjectH2(std::shared_ptr<Attributes> attributes);
};

#endif  // H2_H_