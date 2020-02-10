#include "parser.hpp"
#include <iostream>
 
int main()
{
  CParser* parser= new CParser();
  parser->doit();
  delete parser;
  return 0;  
}
