# include <iostream>
# include <ctime>
# include <stdlib.h>
using namespace std;
int sum(int num[],int start,int end,int x)
{
    int m = start + (end - start)/2;
    cout << m << endl;
    if(num[m] == x)
    {
        return m;
    }
    if(start > end)
    {
        return -1;
    }
    if (num[m] > x)
    {
        return sum(num,start,m-1,x);
    }
    else 
    {
        return sum(num,m+1,end,x);
    }
}
int main()
{
    int n[10];
    for (int i = 0; i < 10; i++)
    {
        n[i] = rand() % 10;
        cout << n[i] << " ";
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9-i; j++)
        {
            if (n[j] > n[j+1])
            {
                swap(n[j],n[j+1]);
            }   
        }
    }    
    int x;
    cin >> x;
    cout << endl << sum(n,0,10,x);
    return 0;
}