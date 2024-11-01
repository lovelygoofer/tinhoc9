#include <stdio.h>

/* Trung tam lai xe to chuc mot dot sat hach vao luc 8h 00sang. Dot sat hach gom N thi sinh
tu 1 den N. Thi sinh i lam bai trong Ti phut 
Hay lap trinh dua ra thoi gian ket thuc cua cac thi sinh 
Vao file tg.inp, Ra file tg.out*/

int main(){
    FILE *file;
    FILE *outputfile;
    int minutes;
    int t;
    int startHour = 8;
    int startMinute = 0;
    
    file = fopen("tg.inp", "r");
    if (file == NULL) {  // Check if the file was opened successfully
        printf("Error opening file.\n");
        return 1;  // Exit if the file could not be opened
    }

    outputfile = fopen("tg.out", "w");
    if (outputfile == NULL) { // Check if the output file was opened successfully
        printf("Error opening output file.\n");
        fclose(file); // Close input file if output fails
        return 1;
        }


    fscanf(file, "%d\n", &t);
    for (int i = 0; i < t; i++){
        fscanf(file, "%d\n", &minutes);

        int totalMinutes = startHour * 60 + startMinute + minutes;

        int finalHour = (totalMinutes / 60) % 24; // Wrap around after 24 hours
        int finalMinute = totalMinutes % 60;

        fprintf(outputfile, "%02d:%02d\n", finalHour, finalMinute);
    }

    fclose(file);
    fclose(outputfile);

    return 0;
}