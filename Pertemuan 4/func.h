#include <iostream>
using namespace std;


func(int rows90511){
    int bil90511 = 1;
	for(int i = 0; i < rows90511; i++)
    {
        for(int space = 1; space <= rows90511-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                bil90511 = 1;
            else
                bil90511 = bil90511*(i-j+1)/j;

            cout << bil90511 << "   ";
        }
        cout << endl;
    }

    return 0;
}
