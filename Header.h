#pragma once
#include <iostream>
#include <string>
using namespace std;

class CPU {
    string name;
    double ghz;
public:
    CPU(string n = "Intel Core i5", double freq = 3.5) : name(n), ghz(freq) {}
    void Print() const {
        cout << "CPU: " << name << " (" << ghz << " GHz)" << endl;
    }
};

class SSD {
    string model;
    int capacityGB;
public:
    SSD(string m = "NVMe SSD", int cap = 512) : model(m), capacityGB(cap) {}
    void Print() const {
        cout << "SSD: " << model << " (" << capacityGB << " GB)" << endl;
    }
};

class RAM {
    string type;
    int sizeGB;
public:
    RAM(string t = "DDR5", int sz = 16) : type(t), sizeGB(sz) {}
    void Print() const {
        cout << "RAM: " << type << " (" << sizeGB << " GB)" << endl;
    }
};

class Mouse {
    string model;
public:
    Mouse(string m = "Wireless Mouse") : model(m) {}
    void Print() const {
        cout << "Mouse: " << model << endl;
    }
};

class Web {
    string resolution;
public:
    Web(string res = "1080p") : resolution(res) {}
    void Print() const {
        cout << "Web-camera: " << resolution << endl;
    }
};

class Laptop {
    string model;
    double price;

    CPU cpu;
    SSD ssd;
    RAM ram;

    Mouse* mouse;
    Web* web;

public:
    Laptop(string mod, double pr,
           string cpuName, double cpuGhz,
           string ssdModel, int ssdCap,
           string ramType, int ramSize,
           Mouse* m = nullptr, Web* w = nullptr)
        : model(mod), price(pr),
          cpu(cpuName, cpuGhz), ssd(ssdModel, ssdCap), ram(ramType, ramSize),
          mouse(m), web(w) {}

    void SetMouse(Mouse* m) {
        mouse = m;
    }

    void SetWeb(Web* w) {
        web = w;
    }

    void Print() const {
        cout << "=== Laptop: " << model << " | Price: " << price << " ===" << endl;
        cpu.Print();
        ssd.Print();
        ram.Print();

        if (mouse != nullptr) {
            mouse->Print();
        } else {
            cout << "Mouse: not connected" << endl;
        }

        if (web != nullptr) {
            web->Print();
        } else {
            cout << "Web-camera: not connected" << endl;
        }
    }
};
