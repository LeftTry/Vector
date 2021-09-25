#include <iostream>

using namespace std;

class vector {
    double x, y;

public:
    vector(double x, double y){
        this->x = x;
        this->y = y;
    }
    vector(){
        this -> x = 0;
        this -> y = 0;
    }

    double get_x() const { return x; }
    double get_y() const { return y; }

    void set_x(double _x) { x = _x; }
    void set_y(double _y) { y = _y; }
};

int main() {

    return 0;
}
