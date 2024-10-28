#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle(float width, float height)
{
	width_ = width;
	height_ = height;
}

void Rectangle::Size()
{
	area_ = width_ * height_;
}

void Rectangle::Draw() const
{
	printf_s("矩形の面積%.03f\n\n", area_);
}
