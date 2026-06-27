# include <iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"Enter a number of terms:";
    cin >> n;
    int first = 0, second = 1, next;
    for (int i=1; i<=n; i++){

        cout<<first<<"";

        
        next = first + second;
        first = second;
        second = next;
    }
    return 0;

}