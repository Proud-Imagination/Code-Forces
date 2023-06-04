#include <iostream>

using namespace std;

int main()
{
    int tab[3][3];
    bool output[3][3];
    int i, j;
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            output[i][j] = true;
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            cin >> tab[i][j];
    }
    
    if(tab[0][0]%2 != 0)
    {
        output[0][0] = !output[0][0];
        output[1][0] = !output[1][0];
        output[0][1] = !output[0][1];
    }
    if(tab[1][0]%2 != 0)
    {
        output[0][0] = !output[0][0];
        output[1][0] = !output[1][0];
        output[2][0] = !output[2][0];
        output[1][1] = !output[1][1];
    }
    if(tab[2][0]%2 != 0)
    {
        output[2][0] = !output[2][0];
        output[2][1] = !output[2][1];
        output[1][0] = !output[1][0];
    }
    if(tab[0][1]%2 != 0)
    {
        output[0][0] = !output[0][0];
        output[0][1] = !output[0][1];
        output[1][1] = !output[1][1];
        output[0][2] = !output[0][2];
    }
    if(tab[1][1]%2 != 0)
    {
        output[1][1] = !output[1][1];
        output[0][1] = !output[0][1];
        output[2][1] = !output[2][1];
        output[1][0] = !output[1][0];
        output[1][2] = !output[1][2];
    }
    if(tab[2][1]%2 != 0)
    {
        output[1][1] = !output[1][1];
        output[2][0] = !output[2][0];
        output[2][1] = !output[2][1];
        output[2][2] = !output[2][2];
    }
    if(tab[0][2]%2 != 0)
    {
        output[0][1] = !output[0][1];
        output[0][2] = !output[0][2];
        output[1][2] = !output[1][2];
    }
    if(tab[1][2]%2 != 0)
    {
        output[0][2] = !output[0][2];
        output[1][1] = !output[1][1];
        output[1][2] = !output[1][2];
        output[2][2] = !output[2][2];
    }
    if(tab[2][2]%2 != 0)
    {
        output[2][2] = !output[2][2];
        output[2][1] = !output[2][1];
        output[1][2] = !output[1][2];
    }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(output[i][j]) cout << 1;
            else cout << 0;
        }
        cout << '\n';
    }        
    
    return 0;
}