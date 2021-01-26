#include "stdfx.h"
#include "Builder.h"
#include "Content.h"


 int main(int argc, char** argv)
{
     htmlDocPtr doc = NULL;
       xmlNode * root_element = NULL;
   
       if (argc != 2) {
           return(1);
       }
   
           LIBXML_TEST_VERSION    // Macro to check API for match with
                                     // the DLL we are using
        
            /*parse the file and get the DOM */
            if ((doc = htmlReadFile(argv[1], NULL, 0)) == NULL){
               printf("error: could not parse file %s\n", argv[1]);
              exit(-1);
              }
        
                /*Get the root element node */
            root_element = xmlDocGetRootElement(doc);
            if (root_element == NULL){
                fprintf(stderr, "empty document\n");
                xmlFreeDoc(doc);
                return 0;
            }

           // print_element_names(root_element);
           // traverse_dom_trees(root_element);
            Node parentNode;
          //  Builder::parserDOM(root_element, parentNode);
            xmlFreeDoc(doc);       // free document
            xmlCleanupParser();    // Free globals
            return 0;
 }