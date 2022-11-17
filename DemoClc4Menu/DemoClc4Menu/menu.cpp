#include "menu.h"

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <conio.h>
#include <windows.h>

#include "KeysEnum.h"
#include "TaskEnum.h"
#include "DataContext.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::endl;

void showMenu() {
    vector<string> lines = {
        "  1. View all products",
        "  2. Add a new product",
        "  3. Quit"
    };
    int selectedLine = 0;
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int black = 0;
    int white = 15;
    int blue = 1;
    int selectedColor = blue + black * 16;
    int normalColor = white + black * 16;
    bool shouldRepeat = true;

    do {
        
        cout << "Working with list of products" << endl
            << endl;
        cout << "Please enter your choice:" << endl;

        for (int i = 0; i < lines.size(); i++) {
            if (i == selectedLine) {
                SetConsoleTextAttribute(hConsole, selectedColor);
            }
            else {
                SetConsoleTextAttribute(hConsole, normalColor);
            }

            cout << lines[i] << endl;
        }

        unsigned char arrowPressed = _getch();
        if (Keys::arrow == arrowPressed) {
            unsigned char arrow = _getch();
            if (Keys::up == arrow) {
                if (selectedLine > 0) {
                    selectedLine--;
                }
            }
            else if (Keys::down == arrow) {
                if (selectedLine < lines.size() - 1) {
                    selectedLine++;
                }
            }
        }
        else {
            if (selectedLine != Task::quit) {
                runTask(selectedLine);
                shouldRepeat = true;
            }
            else {
                shouldRepeat = false;
            }
        }

        system("cls");
        SetConsoleTextAttribute(hConsole, normalColor);
    } while (shouldRepeat);
}

void runTask(int choice) {
    std::map<int, void (*) ()> tasks = {
        {Task::viewAllProducts, displayAllProducts},
        {Task::addProduct, addNewProduct}
    };
    tasks[choice]();
}

void displayAllProducts() {
    cout << "Display all products" << endl
    << endl;

    auto context = DataContext::instance();
    auto products = context->Products()->getAll();

    for (auto p : products) {
        cout << p.toString() << endl;
    }

    cout << "Press enter to continue" << endl;
    cin.get();
}

void addNewProduct() {
    cout << "Add a new product" << std::endl
        << endl;

    string name = "";
    cout << "Product's name:";
    getline(cin, name);

    string buffer = "";
    cout << "Product's price:";
    getline(cin, buffer);
    int price = stoi(buffer);

    auto context = DataContext::instance();
    string id = context->Products()->IdGen()->next();

    Product p(id, name, price);
    context->Products()->add(p);

    cout << "Added one product into the database" << endl;
    cout << "Press enter to continue" << endl;
    cin.get();
}

