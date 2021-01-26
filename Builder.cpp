//#include "stdfx.h"
//#include "Builder.h"
//#include "Content.h"
//#include <libxml/xmlversion.h>
//
//
//std::shared_ptr<Node> Builder:: build(xmlNode* aNode)
//{
//    std::string nameANode(const_cast<char*>(reinterpret_cast<const char*>(aNode->name)));
//    ///* char* temp = (char*)(aNode->name);
//    //int index = 0;
//    //while (temp[index]) {
//    //    nameANode.push_back(temp[index]);
//    //}*/
//
//   // std::string nameANode("zxc");
//
//    std::shared_ptr<Node> rezalt = nullptr;
//
//    if (nameANode == (std::string)"html") {
//        std::shared_ptr<Attributes> attributes;
//        rezalt = std::shared_ptr<Node>(new ObjectHtml(attributes));
//        return rezalt;
//    }
//
//    if (nameANode == (std::string)"h1") {
//        std::shared_ptr<Attributes> attributes;
//        rezalt = std::shared_ptr<Node>(new ObjectH1(attributes));
//        return rezalt;
//    }
//
//    if (nameANode == (std::string)"h2") {
//        std::shared_ptr<Attributes> attributes;
//        rezalt = std::shared_ptr<Node>(new ObjectH2(attributes));
//        return rezalt;
//    }
//
//    if (nameANode == (std::string)"head") {
//        std::shared_ptr<Attributes> attributes;
//        rezalt = std::shared_ptr<Node>(new ObjectHead(attributes));
//        return rezalt;
//    }
//
//    if (nameANode == (std::string)"meta") {
//        std::shared_ptr<Attributes> attributes;
//        rezalt = std::shared_ptr<Node>(new ObjectMeta(attributes));
//        return rezalt;
//    }
//
//    if (nameANode == (std::string)"body") {
//        std::shared_ptr<Attributes> attributes;
//        rezalt = std::shared_ptr<Node>(new ObjectBody(attributes));
//        return rezalt;
//    }
//
//    if (nameANode == (std::string)"center") {
//        std::shared_ptr<Attributes> attributes;
//        rezalt = std::shared_ptr<Node>(new ObjectCenter(attributes));
//        return rezalt;
//    }
//
//    //if (nameANode == (std::string)"text") {
//    //    std::shared_ptr<Attributes> attributes;
//    //   /* char* temp = (char*)aNode->content;
//    //    int index = 0;
//    //    std::string str;
//    //    while (temp[index]) {
//    //        str.push_back(temp[index]);
//    //    }*/
//    //    std::string str(const_cast<char*>(reinterpret_cast<const char*>(aNode->name)));
//    //    std::shared_ptr<Content> cont(new Content(str));
//    //    rezalt = std::shared_ptr<Node>(new ObjectText(attributes, cont));
//    //    return rezalt;
//    //}
//
//
//    rezalt = std::shared_ptr<Node>(new Node(nullptr, nullptr));
//    return rezalt;
//
//}
//
//
//
//void Builder::parserDOM(xmlNode* aNode, Node& parentNode)
//{
//    xmlNode* curNode = NULL;
//
//    if (NULL == aNode)
//    {
//        return;
//    }
//
//
//    for (curNode = aNode; curNode; curNode = curNode->next)
//    {
//        std::shared_ptr<Node> newNode = Builder::build(curNode);
//        (parentNode).addChildren(newNode);
//
//        Builder::parserDOM(curNode->children, *newNode);
//    }
//
//    return;
//}