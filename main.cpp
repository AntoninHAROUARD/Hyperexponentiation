#include <iostream>

using namespace std;

int main()
{
    long long int a;
    long long int b=0;
    int n=0;

    cout << "Calcul de a^^...n...^^b (si n=1 a^b, si n=2 a^^b, tetration de a par b; etc...)" << endl;
    cout << "a=";
    cin >> a;

    do{
        cout << "b=";
        cin >> b;
        break;
    }while(b<1);

    do{
        cout << "n=";
        cin >> n;
    }while(n<1);

}
