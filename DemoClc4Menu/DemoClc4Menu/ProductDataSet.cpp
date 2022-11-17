#include "ProductDataSet.h"

#include <fstream>
#include <filesystem>
#include <sstream>
#include <filesystem>
#include "Utils.h"
using namespace std;

std::vector<Product> ProductDataSet::getAll() {
    std::vector<Product> result;

    for (const auto& file : filesystem::directory_iterator(_dbFolder)) {
        std::stringstream builder;
        builder << _dbFolder << "\\"
            << file.path().filename().string();
        std::string filename = builder.str();
        
        std::ifstream reader(filename, std::ios::in);
        std::string buffer = "";
        getline(reader, buffer);
        reader.close();

        // Chuyen du lieu thanh doi tuong
        Product p = ProductDataSet::parse(buffer);
        result.push_back(p);
    }



    return result;
}

Product ProductDataSet::parse(std::string data) {
    const std::string Space = " ";

    size_t foundPos = data.find_first_of(Space);
    std::string info = data.substr(foundPos + 1,
        data.length() - foundPos - 1);
    
    const std::string Separator = ", ";
    auto tokens = Utils::String::split(info, Separator);

    const std::string Divider = "=";
    auto pair1 = Utils::String::split(tokens[0], Divider);
    std::string id = pair1[1];

    auto pair2 = Utils::String::split(tokens[1], Divider);
    std::string name = pair2[1];

    auto pair3 = Utils::String::split(tokens[2], Divider);
    std::string buffer = pair3[1];
    int price = std::stoi(buffer);

    Product p(id, name ,price);
    return p;
}


ProductDataSet::ProductDataSet() {
    // Do nothing
}

ProductDataSet::ProductDataSet(std::string folder) {
    _dbFolder = folder;
    _idGen = new ProductIdGenerator(folder);
}

int ProductDataSet::add(const Product& p) {
    if (!std::filesystem::exists(_dbFolder)) {
        std::filesystem::create_directory(_dbFolder);
    }

    std::stringstream builder;
    builder << _dbFolder << "\\" << p.id() << ".txt";
    std::string filename = builder.str();

    std::ofstream writer(filename, std::ios::out);

    writer << p.toString();
        
    writer.close();
    return 1;
}

ProductIdGenerator* ProductDataSet::IdGen() {
    return _idGen;
}