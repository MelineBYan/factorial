#include <iostream>


unsigned factorial(unsigned n) {
    
	if (n <= 1) { // base case
           return 1;
     }
      
      return n * factorial(n-1);
 }


   int main() {
   std::cout << factorial(10);
 
   
 }
