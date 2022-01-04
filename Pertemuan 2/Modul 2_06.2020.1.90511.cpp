#include <iostream>
using namespace std;
int main()
{
    int  n90511;
    string bintang90511 = "*";
    cout << "Masukkan jumlah baris: ";
    cin >> n90511;
      
    for (int x = 0; x < n90511; x++)
    { 
        int a=x;
	    if (a<=x)
	    {
            for (int y = n90511; y > x; y--)
            {
          	    cout << bintang90511;
			}
			cout << endl;
        } 
        else{
            return 0;
        }
    }
    for (int x = 0; x < n90511; x++)
    {
        int a=x; 
        if(a>=x)
        {
            for (int y = 0; y <= x; y++)
            {
		        cout << bintang90511;
	        }
            cout << endl;
        }
        else{
            return 0;
        }
    }
}
