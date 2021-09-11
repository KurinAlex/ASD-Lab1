#pragma once

struct Point
{
public:
    double x;
    double y;

    Point(double x, double y);
};

double EnterDouble(const char* number_name);

Point EnterPoint(const char* point_name);

double CalculateDistance(Point A, Point B);