#include "Content.h"

std::string Content::getContent()
{
    return content_;
}

Content::Content(std::string str)
{
    content_ = str;
}
