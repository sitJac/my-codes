struct bigInt
{
    int d[1000];    //存大整数数据部分的数组
    int len;    //存大整数的长度 多少位
};

bigInt change(char str[])   //输入一个大整数
{
    bigInt bI;
    bI.len = strlen(str);   //#include<string.h>
    for (int i = 0; i < 1000; i++)  //先初始化为零
    {
        bI.d[i] = 0;
    }
    for (int i = 0; i < bI.len; i++)    //将字符数组中的每一位转化成对应的大整数的整数位
    {
        bI.d[i] = str[bI.len - i - 1] - '0';    //把字符型整数转化成整型整数
    }
    return bI;
}

//add
bigInt add(bigInt a, bigInt b)
{
    bigInt c;
    c.len = 0;
    int carry = 0;  //暂存进位
    for (int i = 0; i < a.len || i < b.len; i++)    // && : 并且        || : 或
    {
        int temp = a.d[i] + b.d[i] + carry;
        c.d[c.len] = temp % 10;
        c.len++;
        carry = temp / 10;
    }
    if (carry != 0)
    {
        c.d[c.len] = carry;
        c.len++;
    }
    return c;
}

//sub
bigInt sub(bigInt a, bigInt b)
{
    bigInt c;
    c.len = 0;
    for (int i = 0; i < a.len || i < b.len; i++)
    {
        if (a.d[i] < b.d[i])    //需要借位
        {
            a.d[i+1]--;
            a.d[i] = a.d[i] + 10;
        }
        c.d[c.len] = a.d[i] - b.d[i];
        c.len++;
    }
    while (c.len-1 >= 1 && c.d[c.len - 1] == 0)
    {
        c.len--;    //除去最高位的零，且至少保留一位
    }
    return 0;
}

//multi
bigInt multi(bigInt a, int b)
{
    bigInt c;
    c.len = 0;
    int carry = 0;
    for (int i = 0; i < a.len; i++)
    {
        int temp = a.d[i]*b + carry;
        c.d[c.len] = temp % 10;
        c.len++;
        carry = temp / 10;
    }
    while (carry != 0)  //处理进位
    {
        c.d[c.len] = carry % 10;
        c.len++;
        carry /= 10;
    }
    return c;
}

//divide
bigInt divide(bigInt a, int b, int& r)  //引用型r保存余数
{
    bigInt c;
    c.len = a.len;
    r = 0;
    for (int i = a.len - 1; i >= 0; i--)
    {
        r = r * 10 + a.d[i];
        if (r < b)  //不够 商0
            c.d[i] = 0;
        else
        {
            c.d[i] = r / b;
            r = r % b;
        }
    }
    while (c.len - 1>= 0 && c.d[c.len - 1] = =0)   //过滤掉商前面多余的0
        c.len--;
    return c;
}