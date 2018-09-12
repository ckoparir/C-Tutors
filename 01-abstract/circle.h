#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "shape.h"

class Circle : public Shape{
private:
  double x,y;
public:
  Circle();
  void getInfo();
};

#endif
