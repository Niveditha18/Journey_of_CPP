#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int max = a[n - 1];
    int min = a[0];
    cout << "max is" << max << "and min is" << min;
    return 0;
}

//2nd approach

#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int max;
    int min;
};

struct Pair getmnm(int a[], int n)
{

    struct Pair mnm;
    if (n == 1)
    {
        mnm.min = mnm.max = a[0];
    }
    else if (a[0] > a[1])
    {
        mnm.max = a[0];
        mnm.min = a[1];
    }
    else
    {
        mnm.min = a[0];
        mnm.max = a[1];
    }
    for (int i = 2; i < n; i++)
    {
        if (a[i] > mnm.max)
            mnm.max = a[i];
        else if (a[i] < mnm.min)
            mnm.min = a[i];
        else
            continue;
    }
    return mnm;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    struct Pair mnm = getmnm(a, n);
    cout << "max is " << mnm.max << " ";
    cout << "min is " << mnm.min;
    return 0;
}
