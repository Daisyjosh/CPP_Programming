#include <iostream>
using namespace std;

void pattern1(int n)
{

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n\n";

}

void pattern2(int n)
{

    for (int i = 1; i <= n; i++) {
        // space
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // numbers
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
    cout << "\n\n";

}

void pattern3(int n)
{


    // top pyramid
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // forward numbers
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        // reverse numbers
        for (int z = i - 1; z >= 1; z--) {
            cout << z;
        }
        cout << endl;
    }

    // bottom pyramid
    for (int i = n - 1; i >= 1; i--) {
        // spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // forward numbers
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        // reverse numbers
        for (int z = i - 1; z >= 1; z--) {
            cout << z;
        }
        cout << endl;
    }
    cout << "\n\n";

}

void pattern4(int n)
{
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\n\n";




}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {  
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "\n\n";

}

void pattern6(int n)
{
    for(int i = 1; i<= n; i++)
    {
      for(int j = 1; j<=i;j++)
      {
        cout << i << " ";
      }
      cout << endl;
    }
    cout << "\n\n";

}

void pattern7(int n)
{
  for(int i =n; i>=1; i--)
  {
    for(int j=1;j<=i;j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
    cout << "\n\n";
}

void pattern8(int n)
{
  for(int i =n;i>=1;i--)
  {
    for(int j =1;j <= i;j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
    cout << "\n\n";
}

void pattern9(int n)
{
  for(int i = 1; i<=n; i++)
  {
    //spaces
    for(int j = 1; j <= n-i;j++)
    {
      cout << " ";
    }
    //firstpattern
    for(int k = 1; k <= i; k++)
    {
      cout<<"*";
    }
    //secondsetpattern
    for(int z = i-1;z>=1;z--)
    {
      cout << "*";
    }
    cout << endl;
  }
    cout << "\n\n";
}

void pattern10(int n)
{
  for(int i = n; i >= 1; i--)
  {
    //spaces
    for(int j = n-i; j >= 1; j--)
    {
      cout << " ";
    }
    //firstsetofpattern
    for(int k = i; k>=1; k--)
    {
      cout << "*";
    }
    //secondsetofpattern
    for(int z = 1; z <= i-1; z++)
    {
      cout << "*";
    }
    cout << endl;
  }
    cout << "\n\n";

}

void pattern11(int n)
{
  //top pattern
  for(int i = 1; i<=n; i++)
  {
    for(int j = 1; j<=i;j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for(int i = n-1; i>=1; i--)
  {
    for(int j = 1; j<=i;j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  cout << "\n\n";
}



void pattern12(int n)
{
  for(int i = 1; i<=n; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      if(i % 2 == 1)
      {
        if(j % 2 == 1)
        {
          cout << 1;
        }
        else{
          cout << 0;
        }

      }
      else{
        if(j % 2 == 0)
        {
          cout << 1;
        }
        else
        {
          cout << 0;
        }
      }

    }
    cout << endl;
  }
}

void pattern13(int n)
{
  for(int i = 1; i <= n; i++)
  {
    //first numberr
    for(int j = 1; j <= i;j++)
    {
      cout << j;
    }
    //spaces
    for(int k = 1; k <= 2*(n-i); k++)
    {
      cout << " ";
    }
    //second numbering
    for(int z = i; z >= 1; z--)
    {
      cout << z;
    }
    cout << endl;
  }
}

void pattern14(int n)
{
  int sum = 1;
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j<=i;j++)
    {
      cout << sum;
      sum++;
    }
    cout << endl;
    
  }
}

void pattern15(int n)
{
  char val = 'A';
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j<=i; j++)
    {
      cout << val;
      val++;
    }
    cout << endl;
  }

}

void pattern16(int n)
{
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j<=i; j++)
    {
      cout << char(64+j);
    }
    cout << endl;
  }
  cout << "\n\n";
  
}

void pattern17(int n)
{
    for(int i = n; i>=1; i--)
    {
      for(int j = 1; j<=i;j++)
      {
        cout << char(64+j);
      }
      cout << endl;
    }
  cout << "\n\n";
}
void pattern18(int n)
{
  for(int i =1; i <= n; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      cout << char(64+i);
    }
    cout << endl;
  }
  cout << "\n\n";
}

void pattern19(int n)
{
  for(int i = 1; i <=n; i++)
  {
    //spaces
    for(int j = 1;j<= n-i;j++)
    {
      cout << " ";
    }
    //first_set_of_patterns
    for(int k = 1; k <= i; k++)
    {
      cout << char(64+k);
    }
    //second_set_of_patterns
    for(int z = i-1; z>=1; z--)
    {
      cout << char(64+z);
    }
    cout << endl;
  }
  cout << "\n\n";
  

}

void pattern20(int n)
{
  for(int i = n; i >= 1; i--)
  {
    for(int j = i; j <= n; j++)
    {
      cout << char(64+j);
    }
    cout << endl;
  }
  cout  << "\n" << endl;
}

void pattern21(int n)
{
  //TOP HALF
  for(int i = n; i>= 1; i--)
  {
    //first_set_of_stars
    for(int j = i; j >= 1; j--)
    {
      cout << "*";
    }
    //spaces
    for(int k = (2*n)-(2*i); k>=1;k--)
    {
      cout << " ";
    }
    //second_set_of_stars
    for(int z = i; z >= 1; z--)
    {
      cout << "*";
    }
    cout << endl;

  }

  for(int i = n; i >= 1; i--)
  {
    //first_set_of_stars
    for(int j = i; j<=n; j++)
    {
      cout << "*";
    }
    //spaces
    for(int k = 1; k <= (2*i)-2; k++)
    {
      cout << " ";
    }
    //second_set_of_stars
    for(int z = i; z <= n; z++)
    {
      cout << "*";
    }
    cout << endl;
  }
  cout << "\n" << endl;
}

void pattern22(int n)
{
  //top half
  for(int i = n; i>=1; i--)
  {
    //first_set_of_stars
    for(int j = i; j<=n; j++)
    {
      cout << "*";
    }
    //spaces
    for(int k = 1; k <= (2*i)-2; k++)
    {
      cout << " ";
    }
    //second_set_of_stars
    for(int z = i; z <= n; z++)
    {
      cout << "*";
    }
    cout << endl;
  }

  //secondpart
  for(int i = n; i>= 1; i--)
  {
    //first_set_of_stars
    for(int j = i-1; j>=1; j--)
    {
      cout << "*";
    }
    //spaces
    for(int k = 1; k <= (2*n)-(2*i)+2; k++)
    {
      cout << " ";
    }
    //second_set_of_stars
    for(int z = i-1; z >= 1; z--)
    {
      cout << "*";
    }
    cout << endl;
  }
  cout << "\n" << endl;
}
void pattern23(int n)
{
  for(int i = 1; i<=n; i++)
  {
    cout << "*";
    for(int j = 1; j<= n-1; j++)
    {
      if(i==1||i==n)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }

    }
    cout << "*" << endl;
  }
  cout << "\n" << endl;

}
void pattern24(int n)
{
  int size = 2*n-1;
  int front = 0;
  int last = size - 1;
  int arr[100][100];
  while(n!=0)
  {  
      for(int i = front; i <= last; i++)
      {
        for(int j = front; j <= last; j++)
        {
          if(i==front || i == last || j==front || j == last)
          {
            arr[i][j] = n;
          }
        }


      
      }
        front++;
        last--;
        n--;
      }
      for(int i = 0; i<size; i++)
      {
        for(int j = 0; j < size; j++)
        {
          cout << arr[i][j];
        }
        cout << endl;
      }
      cout << "\n" << endl;


}

void pattern25(int n)
{
  // TOP HALF
  for(int i = n; i >= 1; i--)
  {
    //spaces 
    for(int j = 1; j <= n-i; j++)
    {
      cout << " ";
    }
    //increasing numbers
    for(int k = 1; k<=i; k++)
    {
      cout << k;
    }
    //decreasing numbers
    for(int z = i-1; z>=1; z--)
    {
      cout << z;
    }
    cout << endl;
  }
  //BOTTOM HALF
  for(int i = 2; i<= n; i++)
  {
    //spaces
    for(int j = 1; j <= n-i; j++)
    {
      cout << " ";
    }
    //increasing numbers
    for(int k = 1; k <= i; k++)
    {
      cout << k;
    }
    //decreasing numbers
    for (int j = i - 1; j >= 1; j--)
    {
      cout << j;
    }
    cout << endl;
  }
  cout << "\n" << endl;
}

void pattern26(int n)
{
  for(int i = 1; i < n; i++)
  {
    //spaces
    for(int j = 1; j<= n-i; j++)
    {
      cout << " ";
    }
    //pattern
    for(int j = 1; j <= i; j++)
    {
      if(j==1||j==i)
      {
        cout << j;

      }
      else{
        cout << " ";

      }
      if(j != i)
      {
        cout << " ";
      }

    }
    cout << endl;
  }
  for(int i = 1; i <= 2*n-1; i++)
  {
    cout << i;

  }
  cout  << "\n" << endl;
}

void pattern27(int n)
{
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= n-i; j++){
      cout << " ";
    }
    for(int k = i; k >= 1; k--)
    {
      cout << k;
    }
    for(int z = 2; z <= i; z++){
      cout << z;
    }
    cout << endl;
  }
  cout << "\n" << endl;
}
void pattern28(int n)
{
  //Pascals Triangle
      for (int i = 0; i < n; i++) {

        for (int space = 0; space < n - i; space++)
            cout << " ";

        int value = 1;

        for (int j = 0; j <= i; j++) {
            cout << " " << value << " ";
            value = value * (i - j) / (j + 1); 
        }
        cout << endl;
    }
  cout << "\n" << endl;
}

void pattern29(int n)
{
  for(int i = 1; i<= n; i++)
  {
    //spaces
    for(int k = 1; k <= n-i; k++)
    {
      cout << " ";
    }
    //firstpart
    for(int j = 1; j <= i; j++)
    {
      if (i == 1)
      {
        break;
      }
      else
      {
      cout << j;
      }
    }
    //second_part
    for(int z = i; z >= 1; z--)
    {
      if(i==1)
      {
        cout << z;
      }
      else
      {
      cout << z;
      }
    }
    cout << endl;
  }
  for(int i = n; i >= 1;i--)
  {
    for(int k = 1; k<=i-1; k++)
    {
      cout << " ";
    }
    for(int j = 1; j<= i-2;j++)
    {
      cout << j;
    }
    for(int z = i-2; z >= 1; z--)
    {
      cout << z;
    }
    cout << endl;
  }
}
int main() {

  
  int n;
  cout << "Enter the n for the patterns: ";
  cin >>n;
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
  pattern15(n);
  pattern16(n);
  pattern17(n);
  pattern18(n);
  pattern19(n);
  pattern20(n);
  pattern21(n);
  pattern22(n);
  pattern23(n);
  pattern24(n);
  pattern25(n);
  pattern26(n);
  pattern27(n);
  pattern28(n);
  pattern29(n);


  return 0;
}
