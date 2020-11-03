#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
int sarr(int n)
{
    int counter{0};
    while(n)
    {
        n = n/2;
        counter++;
    }
    return counter;
}
int main()
{
    auto start = high_resolution_clock::now();
    int n , s;
    cin >> n;
    s = sarr(n);
    int arr[s];
    for(int i{0}; n != 0 ; i++)
        {
            arr[i] = n%2;
            n /= 2;
        }
    for(int i{s-1};i >=0 ; i--)
        {
            cout << arr[i] << " " ;
        }
        cout << endl;

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop-start);
    cout << duration.count() << " seconds" << endl;

}
