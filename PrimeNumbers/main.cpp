#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Number:" << endl;
    int N;
    cin>> N;
    cout<< 2 <<endl;
    cout<< 3<< endl;

    for(int i = 3; i <= N ; i++){
        for (int j =2; j<= i; j++){

            if(j==i){
                cout << i <<endl;
            }
            if(i%j == 0){
                break;
            }
        }
    }

    return 0;
}
