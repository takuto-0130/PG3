#include "Circle.h"
#include <stdio.h>
#include <numbers>

Circle::Circle(float radius)
{
	radius_ = radius;
	
}

void Circle::Size()
{
	area_ = radius_ * radius_ * std::numbers::pi_v<float>;
}

void Circle::Draw() const
{
	printf_s("円の面積%.03f\n\n", area_);
}
