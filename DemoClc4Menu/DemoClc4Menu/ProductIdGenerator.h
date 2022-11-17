#pragma once
#include <string>

class ProductIdGenerator {
private:
    std::string _dbFolder;
public:
    ProductIdGenerator();
    ProductIdGenerator(std::string folderPath);
public:
    std::string next();
};