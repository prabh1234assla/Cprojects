#include "__colour.h"

void timer_display(const clock_t start)
{

    int millisec, sec, min = 0, hr = 0;

    clock_t present, time_lapsed;

    declaration();

    while (1)
    {

        system("clear");

        present = clock();

        time_lapsed = present - start;

        time_lapsed = time_lapsed / 1000;

        millisec = time_lapsed % 100;

        sec = (time_lapsed / 100) - (min * 59);

        if (sec == 59)
            ++min;

        if (min == 59)
        {

            ++hr;
            min -= 59;
        }
        blue_bckgrnd
        yellow

        if (hr <= 9)
            wprintf(L"0");

        wprintf(L"%d::", hr);
        red_bckgrnd
        cyan

        if (min <= 9)
            wprintf(L"0");

        wprintf(L"%d::", min);
        green_bckgrnd
        purple

        if (sec <= 9)
            wprintf(L"0");

        wprintf(L"%d::", sec);
        yellow_bckgrnd
        blue

        if (millisec <= 9)
            wprintf(L"0");

        wprintf(L"%d\n", millisec);
        reset

        wprintf(L"counter is running...\n");
    }
}