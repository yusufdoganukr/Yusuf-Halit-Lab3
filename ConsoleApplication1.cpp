
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    cout << "Input a value for x: ";
    cin >> x; 
    
    int n;
    cout << "Input a value for n: ";
    cin >> n; 

    
    double y = 1;
    
    if (n < 1) 
    
    {
        cout << "Error1"; 
    }
    

    if (x <= 0)
    {
        for (int i = 1; i <= (n - 1); i++)
        
        {
            
            y *= pow(i, 2) + i;
            cout << y;
        }
    }
        
    else
    {
        for (int j = 0; j <= (n - 1); j++)
            
        {
            for (int i= 0; i <= (n - 1); i++)
            {
               
                y += x / (i + j);
                cout << y;
            }
            
            cout << y;
        }
        y--;
    }
            
}
            

    
    
    


