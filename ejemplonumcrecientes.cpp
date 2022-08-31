

#include <iostream>

using namespace std;
int main()
{
    int n1, n2,n3;

    cout << "Ingrese 3 números para verificar que sean cecientes" << endl;
    cin >> n1 >> n2 >> n3;
    if (n1 < n2 && n2 < n3)
    {
        cout << "Sus números están en orden creciente" << endl;
    }
    else
    {
        printf( "Sus números no están en orden creciente");
        return main();
        
    }

    system("pause");
}
