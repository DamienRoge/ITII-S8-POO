#include <string>

struct Point{
    int x;
    int y;
};


Point InitPoint(int le_x = 0, int le_y = 0);
std::string Display(Point le_point);

Point operator+(Point left, Point right);

Point operator++(Point le_point, int val) ;
Point operator++(Point le_point);

Point operator--(Point le_point);
Point operator--(Point le_point, int val);