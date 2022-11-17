#include "Product.h"

// Product Class
Product::Product(string ID, string NAME, int PRICE)
{
    _id = ID;
    _name = NAME;
    _price = PRICE;
}

string Product::toString() const
{
    string res;
    res = "Product ID=" + _id + ", Name=" + _name + ", Price= " + to_string(_price);
    return res;
}

string Product::getId() const
{
    return _id;
}

// ProductIdGenerator Class
ProductIdGenerator::ProductIdGenerator(string folder)
{
    _dbFolder = folder;
}

string ProductIdGenerator::next()
{
    int i = 0;
    string filename = "";

    do
    {
        i++;
        stringstream builder;
        builder << _dbFolder << "\\" << i << ".txt";
        filename = builder.str();
    } while (filesystem::exists(filename));

    stringstream builder;
    builder << i;

    string result = builder.str();
    return result;
}

// ProductDataSet Class
vector<Product> ProductDataSet::getAll()
{
    vector<Product> Res;
    int count = 0;
    for (const auto &file : filesystem::directory_iterator(_dbFolder))
    {
        count++;
        stringstream builder;
        string filename, buffer;
        builder << _dbFolder << "\\" << file.path().filename().string();
        filename = builder.str();
        ifstream fin(filename);
        getline(fin, buffer);
        fin.close();

        Product tmp = ProductDataSet::parse(buffer);
        Res.push_back(tmp);
    }
    return Res;
}

ProductDataSet::ProductDataSet(string folder)
{
    _dbFolder = folder;
    _idGen = new ProductIdGenerator(folder);
}

int ProductDataSet::add(const Product &p)
{
    if (!filesystem::exists(_dbFolder))
    {
        filesystem::create_directories(_dbFolder);
    }
    stringstream builder;
    builder << _dbFolder << "\\" << p.getId() << ".txt";
    string filename = builder.str();

    ofstream fout(filename);

    fout << p.toString();

    fout.close();
    return 1;
}

ProductIdGenerator *ProductDataSet::IdGen()
{
    return _idGen;
}

Product ProductDataSet::parse(string data)
{
    const string Space = " ";

    size_t foundPos = data.find_first_of(Space);
    string info = data.substr(foundPos + 1, data.length() - foundPos - 1);

    const string Separator = ", ";
    vector<string> tokens = Utils::String::splitToken(info, Separator);

    const string Divider = "=";
    vector<string> pair1 = Utils::String::splitToken(tokens[0], Divider);
    string id = pair1[1];

    vector<string> pair2 = Utils::String::splitToken(tokens[1], Divider);
    string name = pair2[1];

    vector<string> pair3 = Utils::String::splitToken(tokens[2], Divider);
    string buffer = pair3[1];
    int price = stoi(buffer);

    Product p(id, name, price);
    return p;
}

// Utils namespace function
vector<string> Utils::String::splitToken(string Token, string end)
{
    vector<string> Res;

    int start = 0;
    size_t Pos = Token.find(end, start);

    while (Pos != string::npos)
    {
        int count = Pos - start;
        string token = Token.substr(start, count);
        Res.push_back(token);

        start = Pos + end.length();
        Pos = Token.find(end, start);
    }

    // the remaining
    string token = Token.substr(start, Token.length() - start);
    Res.push_back(token);

    return Res;
}

// DataContext Class
DataContext::DataContext()
{
    _dbFolder = "Product";
    _products = new ProductDataSet(_dbFolder);
}

ProductDataSet *DataContext::Products()
{
    return _products;
}

DataContext *DataContext::instance()
{
    if (_instance == NULL)
    {
        _instance = new DataContext();
    }

    return _instance;
}

// Other support functions
void printProduct(vector<Product> P)
{
    for (int i = 0; i < P.size(); i++)
    {
        cout << P[i].toString() << endl;
    }
}

void Addnew()
{
    cout << "Add new: \n";
    string name = "", buffer = "";
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter price: ";
    getline(cin, buffer);
    int price = stoi(buffer);

    DataContext *cont = DataContext::instance();
    string id = cont->Products()->IdGen()->next();

    Product p(id, name, price);
    cont->Products()->add(p);
}
