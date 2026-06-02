#include <stdio.h>

int main() {
    int numSamples;
    float mass, volume, concentration;

   printf("Enter the number of samples: ");
   scanf("%d", &numSamples);
  for (int i = 1; i <= numSamples; i++) {
  printf("\n--- Sample %d ---\n", i);
  printf("Enter mass (m): ");
   scanf("%f", &mass);
   printf("Enter volume (V): ");
   scanf("%f", &volume);
   if (volume != 0) {
  concentration = mass / volume;
  printf("Concentration (C) = %.2f\n", concentration);
  } else {
  printf("Error: Volume cannot be zero.\n");
       }
   }

    return 0;
}