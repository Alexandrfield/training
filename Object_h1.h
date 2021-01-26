#ifndef H1_H_ 
#define H1_H_ 

#include "stdfx.h"
#include "Attributes.h"
#include "Node.h"


class ObjectH1 : public Node
{
public:
    ObjectH1(std::shared_ptr<Attributes> attributes);
};

#endif  // H1_H_