//Matthew McDaniel CS1337.001

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <stdio.h>
using namespace std;

//foreward declaration
class Circle;
class Oval;
class Rectangle;
class Square;
class Triangle;

//Global Declaration for PI
double pi = 3.14159;

//Type declaration, used for finding the objects type for display later on.
const int TYPE_CIRCLE = 0;
const int TYPE_OVAL = 1;
const int TYPE_RECTANGLE = 2;
const int TYPE_SQUARE = 3;
const int TYPE_TRIANGLE = 4;

class Shape {
protected:
	virtual int getType() = 0;

	// Center Points
	int x;
	int y;
	
public:
	//Getters and setters
	int getX() const { return x; }
	int getY() const { return y; }
	void setX(int x) { x = x; }
	void setY(int y) { y = y; }

	//Constructors
	Shape()
	{
		x = 0;
		y = 0;
	};
	Shape(int x, int y) {
		this->x = x;
		this->y = y;
	};
	virtual void save(fstream& file) = 0;
	virtual void load(fstream& file) = 0;
	//Functions
	void writeToFile(fstream& file) {
		save(file);
	}
	Shape* readFromFile(fstream& file);
	virtual double getArea() {
		return x * y; //default area formula
	}
	double getDistance() {
		int absA, absB;
		//find absolute values
		absA = abs(x);
		absB = abs(y);

		//Squaring
		int aSquare, bSquare, total;
		aSquare = absA * absA;
		bSquare = absB * absB;
		total = aSquare + bSquare;

		//Square rooting to find value
		return sqrt(total);
	}
};

class Circle : public Shape {
private:
	int radius;
protected:
	int getType() override { return TYPE_CIRCLE; }
	void save(fstream& file) override {
		file << TYPE_CIRCLE << endl;
		file << radius << endl;
	}
	void load(fstream& file) override {
		file >> radius;
	}
public:
	int getRadius() const { return radius; }
	Circle() {
		radius = 0;
	};
	Circle(int radius) {
		this->radius = radius;
	}
	double getArea() override {
		return pi * radius * radius;
	}
	//double getDistance() {} // **
};

class Rectangle : public Shape {
private:
	int height;
	int width;
protected:
	int getType() override { return TYPE_RECTANGLE; }
	void save(fstream& file) override {
		file << TYPE_RECTANGLE << endl;
		file << height << endl;
		file << width << endl;
	}
	void load(fstream& file) override {
		file >> height;
		file >> width;
	}
public:
	int getHeight() { return height; }
	int getWidth() { return width; }
	Rectangle()
	{
		height = 0;
		width = 0;
	};
	Rectangle(int height, int width) {
		this->height = height;
		this->width = width;
	}
	double getArea() override {
		return width * height;
	}
	//double getDistance() {}
};

class Triangle : public Shape {
	//Note this is an isosceles right triangle
private:
	int length; //base is the same as height;
protected:
	int getType() override { return TYPE_TRIANGLE; }
	void save(fstream& file) override {
		file << TYPE_TRIANGLE << endl;
		file << length << endl;
	}
	void load(fstream& file) override {
		file >> length;
	}
public:
	//Constructors
	Triangle()
	{
		int length = 0;
	};
	Triangle(int length) : Shape(x, y) {
		this->length = length;
	}

	//getters
	int getLength() const { return length; }
	double getArea() override {
		return (length * length) / 2;
	}
	//double getDistance() {} //**
};

class Square : public Shape {
private:
	int side;
protected:
	int getType() override { return TYPE_SQUARE; }
	void save(fstream& file) override {
		file << TYPE_SQUARE << endl;
		file << side << endl;
	}
	void load(fstream& file) override {
		file >> side;;
	}
public:
	Square()
	{
		side = 0;
	};
	Square(int side)
	{
		this->side = side;
	}
	double getArea() override {
		return side * side;
	}
	int getSide() const { return side; }
	//double getDistance() {} // ***
};

class Oval : public Shape {
private:
	int a;
	int b;
protected:
	int getType() override { return TYPE_OVAL; }
	void save(fstream& file) override {
		file << TYPE_OVAL << endl;
		file << a << endl;
		file << b << endl;
	}
	void load(fstream& file) override {
		file >> a;
		file >> b;
	}
public:
	int getA() const { return a; }
	int getB() const { return b; }
	Oval()
	{
		a = 0;
		b = 0;
	};
	Oval(int a, int b) {
		this->a = a;
		this->b = b;
	}
	double getArea() override {
		return (pi * a * b);
	}
};

Shape* Shape::readFromFile(fstream& file) {
	int type = -1;
	file >> type;
	switch (type) {
	case TYPE_CIRCLE:
	{
		Shape* temp = new Circle();
		temp->load(file);
		Circle* temp2 = reinterpret_cast<Circle*>(temp);
		return temp2;
		cout << "Cicle with a Radius of " << temp2->getRadius() << " and an area of " << temp2->getArea() << " with a distance of approx. " << temp2->getDistance() << " from the origin." << endl;

		
	}
	case TYPE_OVAL:
	{
		int r1, r2;

		Shape* temp = new Oval();
		temp->load(file);
		Oval* temp2 = reinterpret_cast<Oval*>(temp);
		return temp2;
		cout << "Oval with a Radius 1 of " << temp2->getA() << " and a radius 2 of " << temp2->getB() << " and an area of " << temp2->getArea() << " with a distance of approx. " << temp2->getDistance() << " from the origin." << endl;
	
	}
	case TYPE_RECTANGLE:
	{
		Shape* temp = new Rectangle();
		temp->load(file);
		Rectangle* temp2 = reinterpret_cast<Rectangle*>(temp);
		return temp2;
		cout << "Rectangle with a Radius of " << temp2->getHeight() << " and an area of " << temp2->getArea() << " with a distance of approx. " << temp2->getDistance() << " from the origin." << endl;
	}
	case TYPE_SQUARE:
	{
		Shape* temp = new Square();
		temp->load(file);
		Square* temp2 = reinterpret_cast<Square*>(temp);
		return temp2;
		cout << "Square with a side length of " << temp2->getSide() << " and an area of " << temp2->getArea() << " with a distance of approx. " << temp2->getDistance() << " from the origin." << endl;
	}
	case TYPE_TRIANGLE:
	{
		Shape* temp = new Triangle();
		temp->load(file);
		Triangle* temp2 = reinterpret_cast<Triangle*>(temp);
		return temp2;
		cout << "Triangle with a base and height mesurement of " << temp2->getLength() << " and an area of " << temp2->getArea() << " with a distance of approx. " << temp2->getDistance() << " from the origin." << endl;
	}
	}
}

int main() {
	//File creation
	fstream shapeFile;
	shapeFile.open("shapes.txt");

	// to see how many shapes the user wants to create.
	int shapeCount;
	cout << "Welcome to the program, This program will store shapes into a file." << endl;
	cout << "How many shapes will you be making today?";
	cin >> shapeCount;
	const int count = shapeCount;

	//allocating memory for the array
	Shape** shapeList = new Shape* [count];
	for (int i = 0; i < count; i++)
	{
		int userShapeType;
		cout << "What kind of Shape is this?" << endl;
		cout << "0 for Circle" << endl;
		cout << "1 for Oval" << endl;
		cout << "2 for Rectangle" << endl;
		cout << "3 for Square" << endl;
		cout << "4 for Triangle" << endl;
		cin >> userShapeType;
		switch (userShapeType) {
		case TYPE_CIRCLE:
		{
			int tempX, tempY;
			cout << "Where is the shapes X cordinate?" << endl;
			cin >> tempX;
			shapeList[i]->setX(tempX);
			cout << "And the Y" << endl;
			cin >> tempY;
			shapeList[i]->setY(tempY);

			int userRadius;
			cout << "What is the radius?";
			cin >> userRadius;
			Circle* temp = reinterpret_cast<Circle*>(shapeList[i]);
			Circle* temp2 = new Circle(userRadius);
			temp->writeToFile(shapeFile);
			break;
		}
		case TYPE_OVAL:
		{
			int tempX, tempY;
			cout << "Where is the shapes X cordinate?" << endl;
			cin >> tempX;
			shapeList[i]->setX(tempX);
			cout << "And the Y" << endl;
			cin >> tempY;
			shapeList[i]->setY(tempY);
			int r1, r2;
			cout << "What is the first radius?" << endl;
			cin >> r1;
			cout << "What is the second radius?" << endl;
			cin >> r2;
			Oval* temp = reinterpret_cast<Oval*>(shapeList[i]);
			Oval* temp2 = new Oval(r1, r2);
			temp->writeToFile(shapeFile);
			break;
		}
		case TYPE_RECTANGLE:
		{
			int tempX, tempY;
			cout << "Where is the shapes X cordinate?" << endl;
			cin >> tempX;
			shapeList[i]->setX(tempX);
			cout << "And the Y" << endl;
			cin >> tempY;
			shapeList[i]->setY(tempY);

			int height, width;
			cout << "What is the width?" << endl;
			cin >> width;
			cout << "What is the height?" << endl;
			cin >> height;
			Rectangle* temp = reinterpret_cast<Rectangle*>(shapeList[i]);
			Rectangle* temp2 = new Rectangle(height, width);
			temp->writeToFile(shapeFile);
			break;

		}
		case TYPE_SQUARE:
		{
			int tempX, tempY;
			cout << "Where is the shapes X cordinate?" << endl;
			cin >> tempX;
			shapeList[i]->setX(tempX);
			cout << "And the Y" << endl;
			cin >> tempY;
			shapeList[i]->setY(tempY);

			int side;
			cout << "What is the side length?" << endl;
			cin >> side;
			Square* temp = reinterpret_cast<Square*>(shapeList[i]);
			Square* temp2 = new Square(side);
			temp->writeToFile(shapeFile);
			break;
		}
		case TYPE_TRIANGLE:
		{
			int tempX, tempY;
			cout << "Where is the shapes X cordinate?" << endl;
			cin >> tempX;
			shapeList[i]->setX(tempX);
			cout << "And the Y" << endl;
			cin >> tempY;
			shapeList[i]->setY(tempY);

			int length;
			cout << "What is the lenght of the base and height? (same number)" << endl;
			cin >> length;
			Triangle* temp = reinterpret_cast<Triangle*>(shapeList[i]);
			Triangle* temp2 = new Triangle(length);
			break;
		}
		default:
			cout << "Error, incorrect value, please restart." << endl;
			break;
		}
	}
	cout << "Shapes have been written to the file (shapes.txt)" << endl;
	cout << "Now reading data from the file" << endl;
	for (int i = 0; i < count; i++) {
		shapeList[i]->readFromFile(shapeFile);
	}
	cout << "Done" << endl;
	system("pause");
	return 0;
}
