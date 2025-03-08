#pragma once
#include<iostream>

using namespace std;

struct Point
{
	char name;
	int X;
	int Y;

	void print()
	{
		cout << name << "(" << X << ", " << Y << ")" << endl;
	}
};




float lenPoint(Point p1, Point p2)
{
	return sqrt(pow(p1.X - p2.X, 2) + pow(p1.Y - p2.Y, 2));
}


struct MyRectangle
{
	Point left_top;
	int width;
	int height;

	void move(Point newPoint)
	{
		left_top = newPoint;
	}

	int move(int deltaX, int deltaY)
	{
		left_top.X += deltaX;
		left_top.Y += deltaY;
	}

	
};

struct Drob
{

	//

	Drob add(Drob d)
	{

	}
};