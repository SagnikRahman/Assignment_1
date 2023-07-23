#include <stdio.h>
int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage: %s source_file destination_file\n", argv[0]);
        return 1; 
    }
    FILE* sourceFile = fopen(argv[1], "r");
    FILE* destinationFile = fopen(argv[2], "w");
    if (sourceFile == NULL || destinationFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }
    fclose(sourceFile);
    fclose(destinationFile);
    printf("File copied successfully.\n");
    return 0;
}
