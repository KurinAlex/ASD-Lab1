#pragma once

#include <string>

struct Point
{
public:
    double x;
    double y;

    Point(double x, double y);
};

Point EnterPoint(std::string point_name);

double CalculateDistance(Point A, Point B);