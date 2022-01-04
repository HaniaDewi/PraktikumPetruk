#include <stdio.h>
using namespace std;

int main (){

    printf("BAJU TAKA \n\n");
    int jumBaju90511;
    int hLama90511;
    int totalLama90511;
    int totalBaru90511;
    int hBaru90511;
    float persen90511 = 0.2;

    printf("Masukkan jumlah baju dibeli : \n");
    scanf("%d", &jumBaju90511);

    printf("Masukkan harga bajunya : \n");
    scanf("%d", &hLama90511);

    totalLama90511 = jumBaju90511*hLama90511;
    hBaru90511 = hLama90511+(hLama90511*persen90511);

    totalBaru90511 = (jumBaju90511*hBaru90511) - totalLama90511;

    printf("Total keuntungan taka = %d ", totalBaru90511);

    return 0;
}
