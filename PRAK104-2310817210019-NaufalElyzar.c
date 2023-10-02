#include <stdio.h>

int main() {
    int HargaSepatuA = 400000;
    int HargaSepatuB = 350000;

    int DiskonSepatuA = 13;
    int DiskonSepatuB = 21;

    int HargaDiskonSepatuA = HargaSepatuA - (HargaSepatuA * DiskonSepatuA / 100);
    int HargaDiskonSepatuB = HargaSepatuB - (HargaSepatuB * DiskonSepatuB / 100);

    printf("Harga sepatu A adalah %d\n", HargaSepatuA);
    printf("Harga sepatu B adalah %d\n", HargaSepatuB);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", DiskonSepatuA, HargaDiskonSepatuA);
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", DiskonSepatuB, HargaDiskonSepatuB);

    return 0;
}
