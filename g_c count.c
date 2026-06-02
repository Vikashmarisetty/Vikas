#include <stdio.h>
#include <string.h>

int main() {
    char dna[100];
    int g_count = 0, c_count = 0;
    float GC_count=0;
    printf("Enter a DNA sequence (A, T, G, C): ");
    scanf("%s", dna);
    for (int i = 0; i < strlen(dna); i++) {
    if (dna[i] == 'G' || dna[i] == 'g') {
    g_count++;
    } else if (dna[i] == 'C' || dna[i] == 'c') {
    c_count++;
        }
    }
    GC_count=(g_count+c_count);
    printf("\nResults:\n");
    printf("Frequency of 'G': %d\n", g_count);
    printf("Frequency of 'C': %d\n", c_count);
    printf("Total GC-content: %.2f\n", GC_count);

    return 0;
}