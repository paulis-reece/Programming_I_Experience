//using namespace std
long factorial(int n) {
    long result = 1;
    while (n--) {
        result *= n;
    }
    return result;
}