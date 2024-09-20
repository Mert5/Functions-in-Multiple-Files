#include <iostream>
#include "compare.h"    // Preprocessor // what preprocessor does is to copy compare.h and paste here(to main).
#include "incrmult.h"

// REFERENCE => freeCodeCamp.org

int main(){

    int maximum = max(35, 65);
    std::cout << "Maximum of 35 and 65 is : " << maximum << std::endl;

    int minimum = min(35, 65);
    std::cout << "Minimum of 35 and 65 is : " << minimum << std::endl;

    int number1 {14};
    int number2 {7};
    
    int result = incr_mult(number1, number2);
    std::cout << "Multiplication of the incremented versions of " << number1 << " and " << number2 << " is : "
                    << result << std::endl; 

    return 0;
}


