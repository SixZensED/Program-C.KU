#include <iostream>
#include <string>

class Shape {
protected:
    std::string color;

public:
    Shape(const std::string& color) : color(color) {}

    virtual double getArea() const = 0;

    virtual std::string toString() const {
        return "Color: " + color;
    }
};

class Rectangle : public Shape {
private:
    int length;
    int width;

public:
    Rectangle(const std::string& color, int length, int width)
        : Shape(color), length(length), width(width) {}

    double getArea() const override {
        return static_cast<double>(length * width);
    }

    std::string toString() const override {
        return "Rectangle - " + Shape::toString() + ", Length: " + std::to_string(length) + ", Width: " + std::to_string(width);
    }
};

class Triangle : public Shape {
private:
    int base;
    int height;

public:
    Triangle(const std::string& color, int base, int height)
        : Shape(color), base(base), height(height) {}

    double getArea() const override {
        return 0.5 * base * height;
    }

    std::string toString() const override {
        return "Triangle - " + Shape::toString() + ", Base: " + std::to_string(base) + ", Height: " + std::to_string(height);
    }
};

int main() {
    Rectangle rectangle("Blue", 5, 10);
    Triangle triangle("Red", 8, 6);

    std::cout << rectangle.toString() << ", Area: " << rectangle.getArea() << std::endl;
    std::cout << triangle.toString() << ", Area: " << triangle.getArea() << std::endl;

    return 0;
}
