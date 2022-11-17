#ifndef LAB4
#define LAB4

#include <iostream>
#include <fstream>
#include <vector>
#include <filesystem>
#include <string.h>
#include <sstream>
#include <string>
using namespace std;

class Product
{
private:
    string _id;
    string _name;
    int _price;

public:
    Product();
    Product(string, string, int);
    string toString() const;
    string getId() const;
};

class ProductIdGenerator
{
private:
    string _dbFolder = "";

public:
    ProductIdGenerator(string folder);
    string next();
};

class ProductDataSet
{
private:
    string _dbFolder = "";
    ProductIdGenerator *_idGen;

public:
    ProductDataSet(string folder);

public:
    vector<Product> getAll();
    int add(const Product &p);

public:
    Product parse(string data);
    ProductIdGenerator *IdGen();
};

namespace Utils
{
    class String
    {
    public:
        static vector<string> splitToken(string, string);
    };
}

class DataContext
{
private:
    inline static DataContext *_instance = NULL;

public:
    static DataContext *instance();

private:
    ProductDataSet *_products = NULL;
    string _dbFolder = "";

private:
    DataContext();

public:
    ProductDataSet *Products();
};

void printProduct(vector<Product>);

void Addnew();
#endif