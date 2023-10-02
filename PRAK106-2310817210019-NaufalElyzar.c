#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    int apakah_a_sama_dengan_b = (a = b) ? 0 : 1;
    int apakah_b_lebih_besar_dari_c = (b > c) ? 1 : 0;
    int apakah_a_tidak_sama_dengan_c = (a != c) ? 1 : 0;

    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", apakah_a_sama_dengan_b);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", apakah_b_lebih_besar_dari_c);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", apakah_a_tidak_sama_dengan_c);

    return 0;
}
