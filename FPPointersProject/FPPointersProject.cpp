#include <iostream>
#include <iomanip>

using namespace std;

void PointersBegin()
{
    int n{ 25 };
    int m{ 63 };
    cout << &n << " " << n << "\n";

    int* ptr = &n;

    cout << ptr << " " << *ptr << "\n";
    *ptr = 74;

    cout << &n << " " << n << "\n";

    cout << m << "\n";

    ptr = &m;
    m = 192;

    cout << m << " " << n << "\n";

    int nn{ 15 };
    float x{ 45.5 };

    int* iptr;
    float* fptr;

    /*fptr = &n;
    *fptr = 34.7;*/
}

void DinamycMemory()
{
    /*const int size{ 16 };
    int array[size];*/

    int sizeReal;
    cin >> sizeReal;

    int* ptr = new int[sizeReal];

    for (int i = 0; i < sizeReal; i++)
        ptr[i] = i + 1;

    for (int i = 0; i < sizeReal; i++)
        cout << ptr[i] << " ";
    cout << "\n";

    delete[] ptr;

    ptr = new int[15]; //&sizeReal;

    int* iptr;
    long long* lptr;
    float* fptr;
    double* dptr;
    char* cptr;
    bool* bptr;

    cout << sizeof(iptr) << "\n";
    cout << sizeof(lptr) << "\n";
    cout << sizeof(fptr) << "\n";
    cout << sizeof(dptr) << "\n";
    cout << sizeof(cptr) << "\n";
    cout << sizeof(bptr) << "\n";
}

int main()
{
    /*
    int - 4
    long long - 8
    float - 4
    double - 8
    char, bool - 1
    */

    //int size{ 10 };

    /*int* array = new int[5] { 34, 21, 19, 56, 82};

    for (int i = 0; i < 5; i++)
        cout << array[i] << " ";
    cout << "\n";

    for (int i = 0; i < 5; i++)
        cout << *(array + i) << " ";
    cout << "\n";*/

    int a = 123;
    int* ptr = &a;

    cout << &a << " " << ptr << "\n";
    cout << ptr << " " << &ptr << "\n";

    int** pptr = &ptr;
}
