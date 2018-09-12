#include <iostream>
#include "circle.h"

Circle::Circle():x{0},y{0}{
  std::cout << "Circle class has been initialized.." << std::endl;
}

void Circle::getInfo(){
  std::cout << "X:" << x << std::endl;
  std::cout << "Y:" << y << std::endl;
}


