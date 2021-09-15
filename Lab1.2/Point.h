#pragma once

struct Point
{
public:
    double x;
    double y;

    Point(double x, double y);
};

Point EnterPoint(const char* point_name);