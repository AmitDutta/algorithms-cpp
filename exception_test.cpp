#include <iostream>
#include <exception>

class TestException: public std::exception {
   virtual const char* what() const throw() {
      return "My exception happened";
   }
};

class Test {
   public:
      void throw1();
      void throw2();
      void grab();
};

void Test::throw1() { throw 5; }
void Test::throw2() {
 // ::TestException txp;
  throw ::TestException();
}
void Test::grab() {
   try {
      this->throw1();
   } catch (...) {
      throw;
   }
}

int main() {
   Test *tst = new Test;
   try {
      tst->grab();
   } catch (std::exception& e) {
      std::cout << e.what() << std::endl;  
   } catch (int e) {
      std::cout << e << std::endl;     
   }
   return 0;
}
