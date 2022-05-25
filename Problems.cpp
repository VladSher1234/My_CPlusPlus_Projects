// This is problems from russian 
// book by Boris Kordemsky 
// "Удивительный мир чисел и фигур"
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double root(int d, double x)
{
    if (d == 0)
    {
        cerr<<"Zero root can't be calculated";
        exit(1);
    }
    if (x > 0)
        return exp(log(x) / d);
    else
        return -exp(log(-x) / d);
        
}
int length(int n)
{
    int len = 0;
    while(n != 0)
    {
        n = n / 10;
        len += 1;
    }
    return len;
}

int64_t powerOfTen(int x)
{
    int64_t a = 1;
    for(int i = 1; i < x + 1; i++)
        a *= 10;
    return a;
}

int64_t concat(int64_t x, int64_t y)
{
    return (x * powerOfTen(length(y))) + y;
}

int64_t factorial(int64_t n)
{
    int64_t r = 1;
    for(int i = 1; i < n + 1; i++)
        r *= i;
    return r;
}
int64_t power(int64_t n, int64_t exp)
{
    int64_t r = 1;
    for(int i = 0; i < exp; i++)
        r *= n;
    return r;
}

int main()
{
    // 1.7.2 A very lot of solutions!
    /*for(int l = 1; l < 10; l++)
        for(int o = 1; o < 10; o++)
            for(int b = 1; b < 10; b++)
                for(int t = 1; t < 10; t++)
                    for(int r = 1; r < 10; r++)
                        for(int i = 1; i < 10; i++)
                            for(int s = 1; s < 10; s++)
                                for(int a = 1; a < 10; a++)
                                    for(int m = 1; m < 10; m++)
                                        if (concat(l, concat(o, b))+concat(t, concat(r, i))==concat(s, concat(a, m)))
                                        {
                                            cout << "1.7.2 solution: ЛОБ+ТРИ=САМ" << endl;
                                            cout << "                " << l << o << b << ' ' << t << r << i << ' ' << s << a << m << endl;
                                        }*/
    // 1.7.3
    for(int g = 1; g < 10; g++)
        if(power(g - 1, 5) == concat(g, concat(g, concat(g, g - 1))))
            cout << "1.7.3 solution: Ж = " << g << endl;     
    // 1.9.2
    for(int i = 0; i < 2000; i += 77)
        if(i % 74 == 48)
            cout << "1.9.2 solution: " << i << endl;
    // 1.9.8
    for(int i = 0; i < 400; i += 7)
        if((i % 2 == 1) && (i % 3 == 1) && (i % 4 == 1) && (i % 5 == 1) && (i % 6 == 1))
            cout << "1.9.8 solution: " << i << endl;
    // 1.11.7
    for(int x = 1; x < 50; x++)
        for(int y = 1; y < 50; y++)
            if((root(x, x + y) == 2) && ((x + y) * power(6, x) == 248832))
                cout << "1.11.7 solution: x = " << x << ";  y = " << y << endl;    
    // 1.11.8
    for(double p = 1; p < 10; p += 1.0)
        for(double a = 1; a < 10; a += 1.0)
            for(double r = 1; r < 10; r += 1.0)
                for(double i = 1; i < 10; i += 1.0){
                    if (((p*a*r*i)/(p+a+r)==5.0)&&((p*a*r*i)/(i+r+a)==3.0)&&((p*a*r*i)/(p+i+r)==3.3333333333333335)&&((p*a*r*i)/(p+a+i)==3.75))
                    {
                        cout << "1.11.8 solution: П = " << p << "; А = " << a << "; Р = " << r << "; И = " << i << endl;
                    }
                }
}