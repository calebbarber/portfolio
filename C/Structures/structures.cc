//Caleb Barber
//Programming Assignment 3 - Structures

#include <stdio.h>
#include <string.h>
#include "structures.h"

void getOneDVD(dvd_t* dvd) {
    char c;

    printf("Enter title: ");
    scanf("%80[^\n]s", dvd->title);
    scanf("%c", &c);

    printf("Enter director: ");
    scanf("%80[^\n]s", dvd->director);
    scanf("%c", &c);

    printf("Enter play time in minutes: ");
    scanf("%d", &dvd->playTime);
    scanf("%c", &c);
}

void printOneDVD(dvd_t dvd) {
    printf("%s:%s:%d\n", dvd.title, dvd.director, dvd.playTime);
}

void getCollection(dvd_t dvd[], int n) {
    for (int i = 0; i < n; i++)
        getOneDVD(&dvd[i]);
}

void printCollection(dvd_t dvd[], int n) {
    for (int i = 0; i < n; i++)
        printOneDVD(dvd[i]);
}

