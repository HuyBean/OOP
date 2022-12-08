#pragma 1
#include "Object.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Utils.h"

class IParsable : public Object
{
public:
    virtual IShape *parse(string token1 = "", string token2 = "") = 0;
    virtual string parsedObjectName() = 0;
    virtual std::string toString() = 0;
};
class RectangleParser : public IParsable
{
private:
    Rectangle RecPar;

public:
    string parsedObjectName()
    {
        return "Rectangle";
    }
    RectangleParser()
    {
        RecPar = Rectangle();
    }
    IShape *parse(string token1 = "", string token2 = "")
    {
        RecPar = Rectangle(findNum(token1), findNum(token2));
        return &RecPar;
    }
    string toString()
    {
        return "Rectangle";
    }
};

class SquareParser : public IParsable
{
private:
    Square SquaPar;

public:
    string parsedObjectName()
    {
        return "Square";
    }
    SquareParser()
    {
        SquaPar = Square();
    }
    IShape *parse(string token1 = "", string token2 = "")
    {
        Square Squa(findNum(token1));
        SquaPar = Squa;
        return &SquaPar;
    }
    string toString()
    {
        return "Square";
    }
};

class CircleParser : public IParsable
{
private:
    Circle CirPar;

public:
    string parsedObjectName()
    {
        return "Circle";
    }
    CircleParser()
    {
        CirPar = Circle();
    }
    IShape *parse(string token1 = "", string token2 = "")
    {
        CirPar = Circle(findNum(token1));
        return &CirPar;
    }
    string toString()
    {
        return "Circle";
    }
};
