
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
                if(y==0){
                    if(z==0){
                        cout<<"*";
                    }
                    else if(z%2 != 0){
                        cout<<".";
                    }
                    else{
                        cout<<"*";
                    }
                }
                else if(y%2 == 0){
                    if(z == 0 || (z%2)==0){
                        cout << "*";
                    }
                    else{
                        cout << ".";
                    }
                }
                else{
                    if(z == 0 || (z%2)==0){
                        cout << ".";
                    }
                    else{
                        cout << "*";
                    }
                }
            }
            cout<<endl;
        }
        cout << endl;
    }
    return 0;
}
