#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include <memory>

void printShapes(vector<shared_ptr<Shape>> S)
{
    for (int i = 0; i < S.size(); i++)
    {
        S[i]->printInfo();
        cout << endl;
    }
}

int main()
{
    vector<shared_ptr<Shape>> vv = {
        make_shared<Rectangle>(Point(0, 5), Point(6, 0)),
        make_shared<Circle>(Point(0, 0), 5),
        make_shared<Triangle>(Point(1, 1), Point(3, 3), Point(1, 3))
    };

    printShapes(vv);

    return 0;
}