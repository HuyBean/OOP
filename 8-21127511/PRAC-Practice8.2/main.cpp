#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

void printShapes(vector<Rectangle *> S, vector<Triangle *> S2, vector<Circle *> S3)
{
    for (int i = 0; i < S.size(); i++)
    {
        S[i]->printInfo();
        cout << endl;
    }
    for (int i = 0; i < S2.size(); i++)
    {
        S2[i]->printInfo();
        cout << endl;
    }
    for (int i = 0; i < S3.size(); i++)
    {
        S3[i]->printInfo();
        cout << endl;
    }
}

int main()
{
    vector<Rectangle *> Rec =
        {
            new Rectangle(Point(0, 5), Point(6, 0)),
            new Rectangle(Point(0, 0), Point(3, 4)),
            new Rectangle(Point(-3, 0), Point(3, 3))};

    vector<Triangle *> Tri = {
        new Triangle(Point(0, 2), Point(0, 0), Point(3, 0)),
        new Triangle(Point(3, 3), Point(3, 1), Point(-2, 3)),
        new Triangle(Point(1, 1), Point(3, 3), Point(1, 3))};

    vector<Circle *> Cir =
        {
            new Circle(Point(0, 0), 5),
            new Circle(Point(3, 3), 3.5),
            new Circle(Point(2, 0), 9)};

    printShapes(Rec, Tri, Cir);

    return 0;
}