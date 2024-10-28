#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:
	Rectangle(float width, float height);

	void Size() override;

	void Draw() const override;

private:
	float area_ = 0;
	float width_;
	float height_;
};

