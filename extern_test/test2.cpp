#include "test2.h"
#include "header.h"
#include <iostream>

namespace ns2 {
   void test2::printI() {
      vars::i = 5;
      std::cout << vars::i << std::endl;
   }
}
