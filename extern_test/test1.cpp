#include "test1.h"
#include "header.h"
#include <iostream>

namespace ns1 {
   void test1::printI() {
      vars::i = 5;
      std::cout << vars::i << std::endl;
   }
}
