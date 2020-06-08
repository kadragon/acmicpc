//
// Created by kangdonguk on 2020/05/17.
//

// https://www.acmicpc.net/problem/12791
// Starman

#include <stdio.h>

int main() {
    int a[25] = {1967, 1969, 1970, 1971, 1972, 1973, 1973, 1974, 1975, 1976, 1977, 1977, 1979, 1980, 1983, 1984, 1987,
                 1993, 1995, 1997, 1999, 2002, 2003, 2013, 2016}, t, x, y, p;
    char s[25][52] = {"DavidBowie", "SpaceOddity", "TheManWhoSoldTheWorld", "HunkyDory",
                      "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars", "AladdinSane", "PinUps", "DiamondDogs",
                      "YoungAmericans", "StationToStation", "Low", "Heroes", "Lodger", "ScaryMonstersAndSuperCreeps",
                      "LetsDance", "Tonight", "NeverLetMeDown", "BlackTieWhiteNoise", "1.Outside", "Earthling", "Hours",
                      "Heathen", "Reality", "TheNextDay", "BlackStar"};

    scanf("%d", &t);

    while (t--) {
        p = 0;
        scanf("%d %d", &x, &y);

        for (int i = 0; i < 25; i++)
            if (a[i] >= x) {
                if (a[i] <= y) p++;
                else break;
            }
        printf("%d\n", p);

        for (int i = 0; i < 25; i++)
            if (a[i] >= x) {
                if (a[i] <= y) printf("%d %s\n", a[i], s[i]);
                else break;
            }
    }
}