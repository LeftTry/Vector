# Vector
Test class for 2-dimensional vector.
## Methods
Getters and setters
```cpp
  double get_x() const { return x; }
  double get_y() const { return y; }

  void set_x(double _x) { x = _x; }
  void set_y(double _y) { y = _y; }
```
Operators +, -
```cpp
  vector vector::operator+(vector a) const {
      return {x + a.x, y + a.y};
  }

  vector vector::operator-(vector a) const {
      return {x - a.x, y - a.y};
  }
```

Mult num and vector
```cpp
  vector vector::operator*(double k) const {
      return {k * x, k * y};
  }
```

Scalar mult, angle mult
```cpp
  double vector::operator%(vector a) const {
      return x * a.y - y * a.x;
  }
  
  double vector::operator*(vector a) const {
      return a.x * x + a.y * y;
  }
```

Angle
```cpp
  double vector::angle(vector a) const {
      double lb = this->len();
      double la = a.len();
      double sab = a * *this;
      return acos(sab / (lb * la)) * 180 / PI;
  }
```

Bool operations
```cpp
  bool vector::operator==(vector a) const {
    if(x == a.x && y == a.y) return true;
        return false;
  }

bool vector::operator!=(vector a) const {
      if(x != a.x && y != a.y) return true;
        return false;
  }
```
