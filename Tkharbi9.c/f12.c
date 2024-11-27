#include <stdio.h>

int afo[10];

void arrrrr() {
    for (int i = 0; i < 10; i++) {
        printf("enter afo[%d]: ", i);
        scanf("%d", &afo[i]);
    }
}

void kbir() {
    int tmp;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (afo[i] < afo[j]) {
                tmp = afo[i];
                afo[i] = afo[j];
                afo[j] = tmp;
            }
        }
    }
}

void srie() {
    int tmp;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (afo[i] > afo[j]) {
                tmp = afo[i];
                afo[i] = afo[j];
                afo[j] = tmp;
            }
        }
    }
}

void aared_kabir() {
    for (int z = 0; z < 10; z++) {
        printf("kebir is afo[%d] = %d\n", z, afo[z]);
    }
}

void aared_sarir() {
    for (int z = 0; z < 10; z++) {
        printf("srire is afo[%d] = %d\n", z, afo[z]);
    }
}

int main() {
    arrrrr();
    kbir();
    aared_kabir();
    srie();
    aared_sarir();
    return 0;
}
