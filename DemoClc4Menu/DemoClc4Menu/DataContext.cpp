#include "DataContext.h"

DataContext::DataContext() {
	_dbFolder = "Product";
	_products = new ProductDataSet(_dbFolder);
}

ProductDataSet* DataContext::Products() {
	return _products;
}