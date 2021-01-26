#ifndef CONTENT_H_ 
#define CONTENT_H_ 

#include "stdfx.h"
#include "Attributes.h"


class Content
{
    std::string content_;
public:
    Content(std::string str);
    std::string getContent();

};

#endif  // CONTENT_H_
