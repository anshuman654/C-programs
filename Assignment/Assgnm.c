#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 100

void merge_files(const char *file1, const char *file2, const char *output_file) {
    FILE *f1, *f2, *out_file;
    char line[1024];  
    int line_number = 1;

    f1 = fopen(file1, "r");
    f2 = fopen(file2, "r");
    
    if (f1 == NULL || f2 == NULL) {
        printf("Could not open one or both of the input files.\n");
        return;
    }
    out_file = fopen(output_file, "w");
    if (out_file == NULL) {
        printf("could not open the output file.\n");
        fclose(f1);
        fclose(f2);
        return;
    }
    while (fgets(line, sizeof(line), f1)) {
        if (line_number >= 20 && line_number <= 80) {
            fputs(line, out_file);
        }
        line_number++;
    }
    line_number = 1;
    while (fgets(line, sizeof(line), f2)) {
        if (line_number >= 50 && line_number <= 90) {
            fputs(line, out_file);
        }
        line_number++;
    }
    fclose(f1);
    fclose(f2);
    fclose(out_file);

    printf("%s\n", output_file);
}

int main() {
    const char *file1 = "anshuman1.txt";
    const char *file2 = "anshuman2.txt";
    const char *output_file = "merged.txt";
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");
    
    if (f1 == NULL || f2 == NULL) {
        printf("Could not open one or both of the input files.\n");
        return 1;
    }

    int count1 = 0, count2 = 0;
    char ch;

    while ((ch = fgetc(f1)) != EOF) {
        if (ch == '\n') count1++;
    }

    while ((ch = fgetc(f2)) != EOF) {
        if (ch == '\n') count2++;
    }

    fclose(f1);
    fclose(f2);

    if (count1 < 100 || count2 < 100) {
        printf("Both files must have at least 100 lines.\n");
        return 1;
    }
    merge_files(file1, file2, output_file);

    return 0;
}

