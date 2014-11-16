#include <stdio.h>
#include <iostream>
#include "numbers.h"

int numbers::rotate(int num) {
   int result = 0, m = 0;
   while (num > 0) {
      result = (result * m) + (num % 10);
      m = 10;
      num /= 10; 
   }
   result += num;
   return result; 
}

int main() {
   numbers *num = new numbers;
   std::cout << num->rotate(123) << num->rotate(1) << num->rotate(3333) << std::endl;
   delete num;   
   return 0;
}
