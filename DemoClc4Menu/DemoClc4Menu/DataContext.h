#pragma once
#include "ProductDataSet.h"

class DataContext {
private:
    inline static DataContext* _instance = NULL;
public:
    static DataContext* instance() {
        if (_instance == NULL) {
            _instance = new DataContext();
        }

        return _instance;
    }

private:
    ProductDataSet* _products = NULL;
    std::string _dbFolder = "";
private:
    DataContext();
public:
    ProductDataSet* Products();
};