#pragma once

using namespace std;

class Point {
public:
    Point(double x, double y);
    double distance(Point other) const;
private:
    double x;
    double y;
};