
#include <stdio.h>
int myUmur();
void main(){
    char umur;
    umur = myUmur(); //18

    printf("Nama saya Radya\n");
    printf("Umur Saya: %d", umur);

}


int myUmur(){
    int umurKu = 18;
    return umurKu;
}
