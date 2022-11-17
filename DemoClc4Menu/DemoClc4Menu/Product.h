#pragma once
#include <string>

class Product {
private:
    std::string _id;
    std::string _name;
    int _price;
public:
    Product();
    Product(std::string, std::string, int);
public:
    std::string id() const;
public:
    std::string toString() const;
};