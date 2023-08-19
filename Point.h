#include <iostream>
#include <string>

class Point
{
private:
    double x;
    double y;
    double z;

public:
    Point();
    Point(double x, double y, double z);

    void input_data();
    void display_data();

    double getX();
    double getY();
    double getZ();

    bool saveToFile(const std::string& filename);
    bool loadFromFile(const std::string& filename);
};