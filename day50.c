/*Q100: Print all sub-strings of a string.


Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c



#include <stdio.h>

int main() {
   
    return 0;
}

*/

/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.


Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025


#include <stdio.h>

int main()
{
    char date[20];
    int day, month, year;

    printf("Enter date in (dd / 04 / yyyy) format= ");
    scanf("%s", date);

    // sscanf(date, "%d/%d/%d", &day, &month, &year);

    day = (date[0] - '0') * 10 + (date[1] - '0');
    month = (date[3] - '0') * 10 + (date[4] - '0');
    year = (date[6] - '0') * 1000 +
           (date[7] - '0') * 100 +
           (date[8] - '0') * 10 +
           (date[9] - '0');

    if (month == 4)
        printf("%02d-Apr-%d\n", day, year);
    else
        printf("Please enter correct input.\n");

    return 0;
}

*/