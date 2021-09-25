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

    vector operator+(vector);

    vector operator-(vector);

    double operator*(vector);

    vector operator/(double);

    vector operator*(double);

    double operator%(vector);
};

vector vector::operator+(vector a) {
    return vector(x + a.x, y + a.y);
}

vector vector::operator-(vector a) {
    return vector(x - a.x, y - a.y);
}

double vector::operator*(vector a) {
    return a.x * x + a.y * y;
}

vector vector::operator/(double k) {
    return vector(x / k, y / k);
}

vector vector::operator*(double k) {
    return vector(k * x, k * y);
}

double vector::operator%(vector a) {
    return x * a.y - y * a.x;
}

int main() {

    return 0;
}
