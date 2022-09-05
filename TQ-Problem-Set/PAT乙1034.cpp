#include<iostream>
using namespace std;

struct Fraction
{
    long long up, down;
};

long long getGcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return getGcd(b, a % b);
}

Fraction reduction(Fraction result) //分数化简
{
    if (result.down < 0)
    {
        result.up = -result.up;
        result.down = -result.down;
    }
    if (result.up = 0)
    {
        result.down = 1;
    }
    else
    {
        long long gcd = getGcd(abs(result.up), abs(result.down));
        result.up /= gcd;
        result.down /= gcd;
    }
    return result;
}

Fraction add(Fraction a, Fraction b)
{
    Fraction result;
    result.up = a.up * b.down + b.up * a.down;
    result.down = a.down * b.down;
    return reduction(result);
}

Fraction minu(Fraction a, Fraction b)
{
    Fraction result;
    result.up = a.up * b.down - b.up * a.down;
    result.down = a.down * b.down;
    return reduction(result);
}

Fraction multi(Fraction a, Fraction b)
{
    Fraction result;
    result.up = a.up * b.up;
    result.down = a.down * b.down;
    return reduction(result);
}

Fraction divide(Fraction a, Fraction b)
{
    Fraction result;
    result.up = a.up * b.down;
    result.down = a.down * b.up;
    return reduction(result);
}

void showResult(Fraction r)
{
    r = reduction(r);
    if (r.up < 0)
    {
        printf("(");
    }
    if (r.down == 1)
    {
        printf("%lld", r.up);
    }
    if (abs(r.up) > abs(r.down))
    {
        printf("%lld %lld/%lld", r.up / r.down, abs(r.up) % r.down, r.down);
    }
    else
    {
        printf("%lld/%lld", r.up, r.down);
    }
    if (r.down < 0)
    {
        printf(")");
    }
}

int main()
{
    Fraction a, b, result;
    scanf("%lld/%lld %lld/%lld", &a.up, &a.down, &b.up, &b.down);
    showResult(a);
    printf(" + ");
    showResult(b);
    printf(" = ");
    result = add(a, b);
    showResult(result);
    printf("\n");

    showResult(a);
    printf(" - ");
    showResult(b);
    printf(" = ");
    result = minu(a, b);
    showResult(result);
    printf("\n");

    showResult(a);
    printf(" * ");
    showResult(b);
    printf(" = ");
    result = multi(a, b);
    showResult(result);
    printf("\n");

    showResult(a);
    printf(" / ");
    showResult(b);
    printf(" = ");
    if (b.up == 0)
    {
        printf("Inf");
    }
    else
    {
        result = divide(a, b);
        showResult(result);
    }
    printf("\n");

    return 0;
}