#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int count=0,digit,N=n;
    while(n>0){
        digit = n%10;
        n /= 10;
        if (digit!=0 && N%digit==0){
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        cout << result << "\n";
    }

    return 0;
}
 