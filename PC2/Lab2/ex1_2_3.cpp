#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int* citireArray(int& n)
{
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}

// void excangeMin(int&& a, int &n)
// {
//     if(n <= 0) return;

//     int minIndex = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] < a[minIndex])
//         {
//             minIndex = i;
//         }
//     }
//     a[minIndex] = 0;
// }

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
    int* a = new int[n];
    a = citireArray(n);
    afisareArray(a, n);

    // excangeMin(a, n);

    afisareArray(a, n, true);
    delete a;

    return 0;
}