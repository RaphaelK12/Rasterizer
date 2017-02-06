#include "RGBColor.h"

RGBColor::RGBColor()
  : r(1), g(1), b(1) {

}

RGBColor::RGBColor(const float rgb)
  : r(rgb), g(rgb), b (rgb) {

}

RGBColor::RGBColor(const float red, const float green, const float blue)
  : r(red), g(green), b(blue) {

}

RGBColor::~RGBColor() {
  r = .0f;
  g = .0f;
  b = .0f;
}


RGBColor::operator Vector3D() const {
  return Vector3D(r, g, b);
}