#include <iostream>

using namespace std;

int main()
{
    int i;
    cin>>i;

    int inp[2][i];

    for(int x = 0; x < i; x++)
    {
        cin>>inp[0][x]>>inp[1][x];
    }

    for(int x = 0; x < i; x++)
    {
        for(int r = 0; r<((inp[0][x]-1)*3)+4; r++)
        {
            for(int c = 0; c<((inp[1][x]-1)*3)+4; c++)
            {
                if(r==0 || r%3 == 0)
                {
                    cout<<"*";
                }
                else if(c==0 || c%3 == 0)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<".";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
