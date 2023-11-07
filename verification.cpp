#include "verification.h"
#include <cmath>

Point::Point(double x, double y) : x(x), y(y) {}

double Point::distance(Point other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}

