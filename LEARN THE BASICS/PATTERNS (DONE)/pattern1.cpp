#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    cout << "THIS IS A PATTERN 1" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern2(int n)
{
    cout << "THIS IS A PATTERN 2" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern3(int n)
{
    cout << "THIS IS A PATTERN 3" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern4(int n)
{
    cout << "THIS IS A PATTERN 4" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern5(int n)
{
    cout << "THIS IS A PATTERN 5" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern6(int n)
{
    cout << "THIS IS A PATTERN 6" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n, k = 1; j >= i; j--, k++)
        {
            cout << k;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern7(int n)
{
    cout << "THIS IS A PATTERN 7" << endl;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    cout << endl;
}

void pattern8(int n)
{
    cout << "THIS IS A PATTERN 7" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * n - (2 * i - 1)); j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern9(int n)
{
    cout<<"this is pattern9"<<endl;
    int k = 1;
    for (int j = 1; j <= n; j++)
    {
        if (j % 2 == 0)
        {
            k = 0;
        }
        else
            k = 1;

        for (int m = 1; m <= j; m++)
        {
            cout << k;
            if (k == 0)
                k++;
            else if (k == 1)
                k--;
        }
        cout << endl;
    }
    cout<<endl;
}

void pattern10(int n)
{
    cout<<"this is pattern 10"<<endl;
    for (int i=1;i<=n;i++)
    {
        for(int j=1, k=1; j<=i; j++, k++)
        {
            cout<<k;
        }

        for(int j=1; j<= 2*(n-i); j++)
        {
            cout<<"*";
        }

        for(int j=1 ,k=i; j<=i; j++, k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern11(int n)
{
    cout << "THIS IS A PATTERN 11" << endl;
    int k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<k <<" ";
            k++;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern12(int n)
{
    cout<<"this is pattern 12"<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i+1; j++)
        {
            cout<<"*";
        }

        for(int j=1; j<=2*(i-1); j++)
        {
            cout<<" ";
        }

        for(int j=1; j<=n-i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern13(int n)
{
    cout<<"THIS IS PATTERN 13"<<endl;
    for(int i=1; i<=n; i++)
    {
        if(i==1||i==n)
        {
            for(int j=1; j<=n; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }

        else{
            for(int j=1; j<=n; j++ )
            {
                if(j==1||j==n)
                {
                    cout<<"*";
                }
                else cout<<" ";
            }
            cout<<endl;
        }
    }
    cout<<endl;
}

void pattern14(int n){
    cout<<"FINAL PATTERN"<<endl;

    for(int i=0; i<2*n-1; i++)
    {
        for(int j=0; j<2*n-1; j++)
        {
            int top =i;
            int left = j;
            int right = 2*n-2-j;
            int bottom = 2*n-2-i;
            cout<<4 -min(min(left,right), min(top,bottom));
        }
        cout<<endl;
    }
}
int main()
{
    int n;
   n=4;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    return 0;
}