#include <iostream>

using namespace std;

int main()
{
    int i;
    cin>>i;

    int inp[2][i];

    for(int x = 0; x < i; x++){
        cin>>inp[0][x]>>inp[1][x];
    }

    for(int x = 0; x < i; x++){
        for(int y = 0; y < inp[0][x]; y++){
            for(int z = 0; z < inp[1][x]; z++){
                if(z==0 || z==inp[1][x]-1 || y == 0 || y == inp[0][x]-1){
                    cout << "*";
                }
                else{
                    cout << ".";
                }
            }
            cout<<endl;
        }
        cout << endl;
    }

    return 0;
}
