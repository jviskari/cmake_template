#include "parser.hpp"
#include "foo.hpp"
#include <iostream>
 
int main()
{
  CFoo* foo = new CFoo(); 
  CParser* parser= new CParser();
  parser->doit();
  foo->doit();

  delete parser;
  delete foo; 
  return 0;
}

