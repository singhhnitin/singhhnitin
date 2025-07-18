#include <stdio.h>
#include <stdlib.h>

// Recursive function to find GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(int argc, char *argv[]) {

    FILE *in = fopen(argv[1], "r");
    if (in == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    FILE *out = fopen(argv[2], "w");
    if (out == NULL) {
        printf("Error opening output file.\n");
        fclose(in);
        return 1;
    }

    int a, b;
    int pairCount = 0;

    // Read pairs of numbers
    while (fscanf(in, "%d %d", &a, &b) == 2) {
        int result = gcd(a, b);
        fprintf(out, "The GCD of %d and %d is %d\n", a, b, result);
        pairCount++;
    }

    fclose(in);
    fclose(out);

    // Display output file
    out = fopen(argv[2], "r");
    char line[100];
    while (fgets(line, sizeof(line), out)) {
        printf("%s", line);
    }
    fclose(out);

    return 0;
}
