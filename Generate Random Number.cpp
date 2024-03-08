#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <chrono>
using namespace std;
int main()
{

    srand(static_cast<unsigned int>(time(nullptr)));
    
    int numeroINT = rand() % 101;
    
    double numeroREAL = rand() % 101 + static_cast<double>(rand()) / RAND_MAX;
    
    cout << "Numero inteiro: " << numeroINT <<endl;
    cout << "Numero Real: " << numeroREAL <<endl;

    return 0;
    
}
