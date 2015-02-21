#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << "This is the for loop" << "\n";

    int i;


    for(i = 0; i< n; i++){
        cout << "Hello World" << "\n";
    }

    i = 0;
    cout<< "This is the while loop" << "\n";

    while (i<n){
        cout<< "Hello World" << "\n";
        i++;
    }

    i=0;
    cout<< "This is the do-while loop" << "\n";

    do{
            cout << "Hello World" << "\n";
            i++;
    }while (i<n);

    return 0;
}
