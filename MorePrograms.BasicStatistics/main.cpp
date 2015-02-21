#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter the number of integers" << "\n";
    int N;
    cin >> N;
    int A[N - 1];
    for(int i = 0; i< N; i++){
        int currentNumber = i+1;
        cout << "Number "; cout<< currentNumber; cout<< ":" << "\n";
        cin >> A[i];
    }

    cout << "Mean:";
    int y =0;
    int sum = 0;
    int max = A[y];
    int min = A[y];
    while (y < N-1){
        sum = sum + A[y];
        if (A[y]>max){
            max = A[y];
        }
        if (A[y]<min){
            min = A[y];
        }
    }

    double mean = sum / N;
    cout<< mean <<"/n";
    cout<< "Max:" << max<< "/n";
    cout<< "Min:" << min;

    return 0;
}
