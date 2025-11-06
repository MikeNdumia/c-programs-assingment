
#include<stdio.h>

void input_to_file() {
    FILE *file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error opening input.txt for writing.\n");
        return;
    }

    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }
    fclose(file);
}

void process_and_write_output() {
    FILE *input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input.txt for reading.\n");
        return;
    }

    int sum = 0, count = 0, num;
    while (fscanf(input_file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(input_file);

    float average = count > 0 ? (float)sum / count : 0;

    FILE *output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Error opening output.txt for writing.\n");
        return;
    }
    fprintf(output_file, "Sum: %d\nAverage: %.2f\n", sum, average);
    fclose(output_file);
}

void display_files_content() {
    FILE *input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input.txt for reading.\n");
        return;
    }

    FILE *output_file = fopen("output.txt", "r");
    if (output_file == NULL) {
        printf("Error opening output.txt for reading.\n");
        fclose(input_file);
        return;
    }

    printf("\nContents of input.txt:\n");
    char line[100];
    while (fgets(line, sizeof(line), input_file) != NULL) {
        printf("%s", line);
    }

    printf("\nContents of output.txt:\n");
    while (fgets(line, sizeof(line), output_file) != NULL) {
        printf("%s", line);
    }

    fclose(input_file);
    fclose(output_file);
}

int main() {
    input_to_file();
    process_and_write_output();
    display_files_content();
    return 0;
}



