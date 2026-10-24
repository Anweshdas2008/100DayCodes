// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    char input[12];
    char output[15];
    
    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%10s", input);

    char dd[3];
    dd[0] = input[0];
    dd[1] = input[1];
    dd[2] = '\0';

    char mm[3];
    mm[0] = input[3];
    mm[1] = input[4];
    mm[2] = '\0';

    char yyyy[5];
    yyyy[0] = input[6];
    yyyy[1] = input[7];
    yyyy[2] = input[8];
    yyyy[3] = input[9];
    yyyy[4] = '\0';

    const char *monthStr = "";
    if (mm[0] == '0' && mm[1] == '1') monthStr = "Jan";
    else if (mm[0] == '0' && mm[1] == '2') monthStr = "Feb";
    else if (mm[0] == '0' && mm[1] == '3') monthStr = "Mar";
    else if (mm[0] == '0' && mm[1] == '4') monthStr = "Apr";
    else if (mm[0] == '0' && mm[1] == '5') monthStr = "May";
    else if (mm[0] == '0' && mm[1] == '6') monthStr = "Jun";
    else if (mm[0] == '0' && mm[1] == '7') monthStr = "Jul";
    else if (mm[0] == '0' && mm[1] == '8') monthStr = "Aug";
    else if (mm[0] == '0' && mm[1] == '9') monthStr = "Sep";
    else if (mm[0] == '1' && mm[1] == '0') monthStr = "Oct";
    else if (mm[0] == '1' && mm[1] == '1') monthStr = "Nov";
    else if (mm[0] == '1' && mm[1] == '2') monthStr = "Dec";
    else monthStr = "Unk";

    int i = 0, j = 0;

    output[i++] = dd[0];
    output[i++] = dd[1];

    output[i++] = '-';

    while (monthStr[j] != '\0') {
        output[i++] = monthStr[j++];
    }

    output[i++] = '-';

    j = 0;
    while (yyyy[j] != '\0') {
        output[i++] = yyyy[j++];
    }

    output[i] = '\0';

    printf("Converted date: %s\n", output);

    return 0;
}
