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

    vector operator*(double) const;

    double operator%(vector) const;

    double len() const;

    double angle(vector) const;

    bool operator==(vector) const;

    bool operator!=(vector) const;

    friend ostream& operator<<(ostream&, const vector&);
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

bool vector::operator==(vector a) const {
    if(x == a.x && y == a.y) return true;
    return false;
}

bool vector::operator!=(vector a) const {
    if(x != a.x && y != a.y) return true;
    return false;
}

ostream& operator<<(ostream &out, const vector &a) {
    return out << "{" << a.x << ";" << a.y << "}";
}

int main() {
    vector a;
    cout << "Enter coords for vector a:" << endl;
    double x1, y1;
    cin >> x1 >> y1;
    a.set_x(x1);
    a.set_y(y1);
    cout << "Enter coords for vector b:" << endl;
    double x2, y2;
    cin >> x2 >> y2;
    vector b(x2, y2);
    vector c = a + b;
    cout << "a + b: " << c << endl;
    c = a - b;
    cout << "a - b: " << c << endl;
    int k;
    cout << "Enter num:" << endl;
    cin >> k;
    c = a * k;
    cout << "k*a: " << c << endl;
    double s = a * b;
    cout << "Scalar mult: " << s << endl;
    s = a % b;
    cout << "Diagonal mult: " << s << endl;
    s = a.len();
    cout << "Length a: " << s << endl;
    s = a.angle(b);
    cout << "Angle: " << s << endl;
    bool f = a == b;
    cout << "a == b? " << f << endl;
    f = a != b;
    cout << "a != b? " << f << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return 0;
}
