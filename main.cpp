#include <iostream>
#include <cmath>

#define PI 3.14159265

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

    vector operator+(vector) const;

    vector operator-(vector) const;

    double operator*(vector) const;

    vector operator/(double) const;

    vector operator*(double) const;

    double operator%(vector) const;

    double len() const;

    double angle(vector) const;
};

vector vector::operator+(vector a) const {
    return {x + a.x, y + a.y};
}

vector vector::operator-(vector a) const {
    return {x - a.x, y - a.y};
}

double vector::operator*(vector a) const {
    return a.x * x + a.y * y;
}

vector vector::operator/(double k) const {
    return {x / k, y / k};
}

vector vector::operator*(double k) const {
    return {k * x, k * y};
}

double vector::operator%(vector a) const {
    return x * a.y - y * a.x;
}

double vector::len() const {
    return sqrt(x * x + y * y);
}

double vector::angle(vector a) const {
    double lb = this->len();
    double la = a.len();
    double sab = a * *this;
    return acos(sab / (lb * la)) * 180 / PI;
}

int main() {

    return 0;
}
