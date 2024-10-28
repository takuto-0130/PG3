#pragma once

class IShape {
public:
	virtual ~IShape() = default;

	virtual void Size() = 0;

	virtual void Draw() const = 0;
};