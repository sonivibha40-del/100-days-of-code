//Change Date Format from dd/mm/yyyy to dd-Mon-yyyy
#include <stdio.h>

int main() {
    int day, month, year;

    char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-%s-%d", day, months[month], year);

    return 0;
}
