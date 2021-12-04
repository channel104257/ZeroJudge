#include <iostream>

using namespace std;

int main()
{
    char input[1200];
    int arraylong;

    cin.getline( input, 1200 );

    for (int i = 0; i < 1200; i++)
    {
        if (input[i] == '\0')
        {
            arraylong = i;
            break;
        }
        
    }

    char output[1200];

    for (size_t i = 0; i < 1200; i++)
    {
        if (i == arraylong)
        {
            break;
        }
        
        output[i] = (int)input[i] - 7;
    }
    
    cout << endl;
    cout << output << endl;

    return 0;
}
