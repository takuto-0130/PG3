#pragma once
#include "IShape.h"
class Circle : public IShape
{
public:
	Circle(float radius);

	void Size() override;

	void Draw() const override;

private:
	float area_ = 0;
	float radius_;
};

