int square (int x, int y)
{
    return x*y;
}

int row (int x, int degree) {
    for (int i =1; i<degree;++i) x*=x;
    return x;
}
