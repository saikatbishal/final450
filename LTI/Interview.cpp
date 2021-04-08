#include <iostream>
using namespace std;
struct Vector2
{
    float x, y;
    Vector2(float , float y) 
        : x(x),y(y) {}
    Vector2 Add(const Vector2& other) const
    {
        return Vector2(x + other.x, y + other.y);
    } 
    Vector2 operator+(const Vector2& other) const 
    {
        return Add(other);
    }
    Vector2 Multiply(const Vector2& other) const
    {
        return Vector2(x * other.x, y * other.y);
    }
    Vector2 operator*(const Vector2& other)const
    {
        return Vector2(x * other.x, y * other.y);
    }
    bool operator==(const Vector2 &other) const
    {

    }
};
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
    stream << other.x << " " << other.y;
    return stream;
}


 int main()
{
    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);
    Vector2 powerup(1.1f, 1.1f);
    //Let's say we want to add speed vector to position vector.
    Vector2 result = position.Add(speed.Multiply(powerup));
    // So we have made two function for add and multiply and it is now hard to read.
    // What we do now is overload the operators.
    Vector2 result2 = position + speed * powerup;
    cout << result << endl;
    cout << result2 << endl;
}
//Operator overloading isn't supported in java and it is partially supported in  C#(C sharp) but c++ gives us full control.

//Operators are just functions. Instead of giving our funcion a name, we just provide them with an operator..

//Operator overload should be done minimally and should be done where it makes sense.

//