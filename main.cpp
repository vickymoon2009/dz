#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int main() {
    Mouse* logitech = new Mouse("Logitech MX Master");
    Web* logiCam = new Web("4K");

    Laptop laptop1("ASUS Zenbook", 1200.0,
                   "AMD Ryzen 7", 4.2,
                   "Samsung 990 Pro", 1024,
                   "LPDDR5", 32,
                   logitech, nullptr);

    laptop1.Print();
    cout << endl;

    laptop1.SetWeb(logiCam);
    laptop1.Print();
    cout << endl;

    laptop1.SetMouse(nullptr);
    laptop1.Print();

    delete logitech;
    delete logiCam;

    return 0;
}
