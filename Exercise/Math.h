#define MATH_H
#include "fractionException.cpp"
template <typename T>
class Math
{
    public:
        Math();
        Math(T num, T den);
        void setFraction(T num, T den);
        T getNumerator() const;
        T getDenominator() const;
        T divide();

    private:
        T numerator;
        T denominator;
};

template <typename T>
//defaulted the constructor to 0 to put an exception or something.
Math<T>::Math() : numerator(0), denominator(1) 
{
    denominator = 0;
    numerator = 0;
}

template <typename T>
Math<T>::Math(T num, T den) : numerator(num), denominator(den) 
{
    //if (den == 0) 
    //{
    //    denominator = 1;
    //}
}

template <typename T>
void Math<T>::setFraction(T num, T den) 
{
    numerator = num;
    denominator = den;
    //if (den != 0) 
    //{
    //    denominator = den;
    //}
    //else 
    //{
    //    denominator = 1;
    //}
}

template <typename T>
T Math<T>::getNumerator() const 
{
    return numerator;
}

template <typename T>
T Math<T>::getDenominator() const 
{
    return denominator;
}

template <typename T>
T Math<T>::divide()
{
    if (denominator == 0) {
        throw fractionException("Division by zero");
    }
    float x = numerator / static_cast<float>(denominator);
    return x;
}
