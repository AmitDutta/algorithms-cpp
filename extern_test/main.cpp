#include <iostream>
//#include "header.h"
#include "test1.h"
#include "test2.h"


/*namespace ns1 {
   void test1::printI() {
      vars::i = 5;
      std::cout << vars::i << std::endl;
   }
}

namespace ns2 {
   void test2::printI() {
      vars::i = 10;
      std::cout << vars::i << std::endl;
   }
}*/

int main() {
	ns1::test1 *tst1 = new ns1::test1;
	tst1->printI();
	ns2::test2 *tst2 = new ns2::test2;
	tst2->printI();
	delete tst1;
	return 0;
}

