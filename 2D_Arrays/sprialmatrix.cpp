#include <iostream>
using namespace std;
//spiral matrix
//trick it has a continuous loop TOP RIGHT BOTTOM LEFT and REPEAT
void spiralMatrix(int arr[][4], int n, int m)//compulsory to pass second dimention value
{
    int srow = 0,scol = 0, erow = n-1, ecol =m-1;
    while(srow <= erow && scol <= ecol)
    {
            //top
        for(int i = scol; i <= ecol; i++)
        {
            cout << arr[srow][i] << " ";
        }

        //right
        for(int j = srow+1; j <= erow; j++)
        {
            cout << arr[j][ecol] << " ";
        }
        //bottom
        for(int k = ecol-1; k >= scol;k--)
        {
            if(srow == erow)// for corner cases (odd)
            {
                break;
            }
            cout << arr[erow][k] << " ";
        }
        //left
        for(int z =erow-1; z >= scol+1; z--)
        {
            if(scol == ecol) // for corner cases (odd)
            {
                break;
            }
            cout << arr[z][scol] << " ";
        }
        srow++;
        scol++;
        ecol--;
        erow--;

    }

}




int main()

{
    int arr[5][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    int n=5, m=4;
    spiralMatrix(arr,n,m);

    
}