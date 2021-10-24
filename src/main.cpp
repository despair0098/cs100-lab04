#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect1;
    cout << "Rectangle1 area: " << rect1.area() << endl;
    cout << "Rectangle1 perimeter: " << rect1.perimeter() << endl;

    Rectangle rect2 = new Rectangle(3,4);
    cout << "Rectangle2 area: " << rect2.area() << endl;
    cout << "Rectangle2 perimeter: " << rect2.perimeter() << endl;
    return 0;
}

