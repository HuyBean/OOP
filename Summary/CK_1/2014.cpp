#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// class Bike
// {
// private:
//     char *brand; // hiệu xe
// public:
//     Bike() : brand(NULL)
//     {
//         set_brand("default");
//     }
//     Bike(const Bike &b) : brand(NULL)
//     {
//         set_brand(b.brand);
//     }
//     virtual ~Bike()
//     {
//         if (brand != NULL)
//         {
//             delete[] brand;
//         }
//     }
//     Bike &operator=(const Bike &b)
//     {
//         set_brand(b.brand);
//         return* this;
//     }
//     void set_brand(char*bran)
//     {
//         if(brand != NULL)
//         {
//             delete[]brand;
//         }

//         this->brand = new char[strlen(bran)+1];
//         strcpy(this->brand, bran);
//         // hoac this->brand = strdup(brand);
//     }
//     virtual void move(int t1)
//     {
//         cout << brand << ":" << t1 * 12 << " ";
//     }
// };
// class EBike : public Bike
// {
// public:
//     void move(int t2)
//     {
//         Bike::move(t2 * 2);
//     }
// };

// void display(Bike &a, EBike &b)
// {
//     a.move(2);
//     b.move(2);
// }
// int main()
// {
//     EBike b1, b2;
//     display(b1, b2);
//     return 0;
// }

class IFace
{
public:
    virtual void show() = 0;
    virtual IFace *clone() = 0;
    virtual ~IFace()
    {
    }
};

class Face : public IFace
{
private:
    string shape;

protected:
    string getShape();

public:
    Face(string sh) : shape(sh)
    {
    }
    virtual void show()
    {
        cout << "Shape: " << shape << endl;
    }
    Face *clone()
    {
        return new Face(shape);
    }
    Face() : shape("NULL")
    {
    }
};

class EyedFace : public Face
{
private:
    int eyes;

public:
    EyedFace(string sh, int eye) : Face(sh), eyes(eye)
    {
    }
    void show()
    {
        Face::show();
        cout << "Eyes: " << eyes << endl;
    }
    EyedFace *clone()
    {
        return new EyedFace(getShape(), eyes);
    }
};

void testFace(IFace *fc)
{
    IFace *a[3] = {fc, fc->clone(), fc->clone()};
    for (int i = 0; i < 3; i++)
    {
        a[i]->show();
    }
    cout << "The same 3 line?";
    delete a[1];
    delete a[2];
}

class EyeFace : public Face
{
private:
    int eyes;
    static int instanceCount;

public:
    EyeFace(string sh, int eyes) : Face(sh), eyes(eyes)
    {
        instanceCount++;
    }
    ~EyeFace()
    {
        instanceCount--;
    }
    static int countNumberofInstance()
    {
        return instanceCount;
    }
    void show()
    {
        Face::show();
        cout << "Eyes: " << eyes << endl;
    }
    EyeFace *clone()
    {
        return new EyeFace(getShape(), eyes);
    }
};
int EyeFace::instanceCount = 0;

int main()
{
    Face fc;
    Face fc1("rectangle");
    testFace(&fc1);
    cout << "Number of EyeFace instance: " << EyeFace::countNumberofInstance() << endl;
    return 0;
    
}