#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"
#include <memory>

int main() {
	std::unique_ptr<Circle> circle = std::make_unique<Circle>(4.5f);
	std::unique_ptr<Rectangle> rect = std::make_unique<Rectangle>(3.7f, 4.2f);

	circle->Size();
	rect->Size();

	circle->Draw();
	rect->Draw();


	return 0;
}