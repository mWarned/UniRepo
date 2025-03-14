#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool citireArray(int* a, int& n)
{
    if (n <= 0)
    {
        return false;
    } else {
        a = new int[n];
        for (int i = 0; i < n; i++)
        {
            if (!(cin >> a[i]))
            {
                return false;
            }    
    }
    return true;
    }
}

void afisareArray(int* a, int& n, bool invers = 0){
    if (!invers){
        cout << "Array: [";
        for(size_t i = 0; i < n-1; i++)
        {
            cout << a[i] << ", ";
        }
        cout << a[n-1] << "]" << endl;
    }
    else {
        cout << "Array: [";
        for(size_t i = n-1; i > 0; i--)
        {
            cout << a[i] << ", ";
        }
        cout << a[0] << "]" << endl;
    }
}



int main()
{
    int n;
    cin >> n;
    int* a;
    bool success;
    success = citireArray(a, n);
    if (success)
    {
        afisareArray(a, n);
    } else {
        cout << "Nu s-a facut scrierea!" << endl;
    }
    delete a;

    return 0;
}