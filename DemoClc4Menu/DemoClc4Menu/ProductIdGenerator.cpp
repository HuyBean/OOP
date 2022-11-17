#include "ProductIdGenerator.h"
#include <sstream>
#include <filesystem>

ProductIdGenerator::ProductIdGenerator() {
    // Do nothing
}

ProductIdGenerator::ProductIdGenerator(std::string folder) {
    _dbFolder = folder;
}

std::string ProductIdGenerator::next() {
    int i = 0;
    std::string filename = "";

    do {
        i++;

        std::stringstream builder;
        builder << _dbFolder << "\\" << i << ".txt";
        filename = builder.str();
    } while (std::filesystem::exists(filename));

    std::stringstream builder;
    builder << i;

    std::string result = builder.str();
    return result;
}
