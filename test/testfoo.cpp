#include "foo.hpp"
#include <iostream>
 
int main()
{
  CFoo* foo = new CFoo();
  foo->doit();
  delete foo;
  return 0;  
}
