#include <iostream>

using namespace std;

class Monitor {
    private:
        string descMonitor;
        double coordHorizontal;
        double coordVertical;
        double numPixels;
    public:
        void setDescMonitor(string);
        void setCoordHorizontal(double);
        void setCoordVertical(double);
        void setNumPixels(double, double);
        string getDescMonitor() const;
        double getCoordHorizontal () const;
        double getCoordVertical() const;
        double getNumPixels() const;
};

void Monitor::setDescMonitor(string desc) {
    descMonitor = desc;
}

void Monitor::setCoordHorizontal(double x) {
    coordHorizontal = x;
}

void Monitor::setCoordVertical(double y) {
    coordVertical = y;
}

void Monitor::setNumPixels(double coordHorizontal, double coordVertical) {
    numPixels = (coordHorizontal * coordVertical);
}

string Monitor::getDescMonitor() const {
    return descMonitor;
}

double Monitor::getCoordHorizontal() const {
    return coordHorizontal;
}

double Monitor::getCoordVertical() const {
    return coordVertical;
}

double Monitor::getNumPixels() const {
    return numPixels;
}

