#include <iostream>
#include <cmath>
using namespace std;

class Vector {
    private:
        float x;
        float y;
    public:
        Vector(float a, float b) {
            x = a;
            y = b;
        }

        Vector& operator= (Vector& mass) {
            this->x = mass.x;
            this->y = mass.y;
            return *this;
        };

        friend bool operator== (const Vector& lev, const Vector& pr) {
            bool isX = lev.x == pr.x;
            bool isY = lev.y == pr.y;
            return isX && isY;
        };

        friend ostream& operator<< (ostream& out, const Vector& mass) {
            out << "( " << mass.x << " , " << mass.y << " )" << endl;
            return out;
        };

        friend istream& operator>> (istream& is, const Vector& mass) {
            is >> mass.x >> mass.y;
            return is;
        }

        float get_abs() {
            return sqrt(x*x + y*y);
        };

        void plus(Vector b) {
            x += b.x;
            y += b.y;
        };
        
        void minus(Vector b) {
            x -= b.x;
            y -= b.y;
        };
}