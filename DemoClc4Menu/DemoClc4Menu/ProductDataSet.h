#pragma once
#include <string>
#include <vector>
#include <filesystem>

#include "Product.h"
#include "ProductIdGenerator.h"

class ProductDataSet {
private:
    std::string _dbFolder = "";
    ProductIdGenerator* _idGen = NULL;
public:
    ProductDataSet();
    ProductDataSet(std::string dbFolder);
    std::vector<Product> getAll();
    int add(const Product& p);
public:
    ProductIdGenerator* IdGen();
    Product parse(std::string data);
};

