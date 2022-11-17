#include "Product.h"
#include <sstream>
#include <filesystem>

Product::Product() {
    // Do nothing
}

Product::Product(std::string id, std::string name, int price) {
    this->_id = id;
    this->_name = name;
    this->_price = price;
}

std::string Product::toString() const {
    std::stringstream builder;
    builder << "Product ID=" << _id << ", "
        << "Name=" << _name << ", "
        << "Price=" << _price;

    std::string result = builder.str();
    return result;
}

std::string Product::id() const {
    return _id;
}