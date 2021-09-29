//
// Created by Margaux Leglise on 29/09/2021.
//
#include <stdio.h>
#include "exercice.h"
#include "mesFonctions.h"

void exercice1 ( )
{
    int entier1 = 0 , entier2 = 0 ;
    printf ( "Saisir 2 entiers\n" ) ;
    scanf ( "%d" , &entier1 ) ;
    scanf ( "%d" , &entier2 ) ;
    getMax ( entier1 , entier2 ) ;
    return  ;
}

void exercice3 ( )
{
    int longueur = 0 , largeur = 0 ;
    longueur = saisirEntier ( ) ;
    largeur = saisirEntier ( ) ;
    périmètreRectangle ( largeur , longueur ) ;
    aireRectangle ( largeur , longueur ) ;
    return  ;
}

void exercice4 ( )
{
    int entier = 0 ;
    entier = saisirEntier ( ) ;
    multiple ( entier ) ;
    return ;
}

void exercice5 ( )
{
    float note1 = 0.0f , note2 = 0.0f , note3 = 0.0f ;
    do
    {
        printf ( "Rentrez vos 3 notes :\n" ) ;
        scanf ( "%f" , &note1 ) ;
        scanf ( "%f" , &note2 ) ;
        scanf ( "%f" , &note3 ) ;
    }
    while ( ( note1 < 0.0f || note1 > 20.0f ) || ( note2 < 0.0f || note2 > 20.0f ) || ( note3 < 0.0f || note3 > 20.0f ) ) ;
    moyenneFonction ( note1 , note2 , note3 ) ;
    return ;
}

void exercice5Plus7 ( )
{
    int nbrClasse = 0 ;
    printf ( "Combien de classes y a-t-il ?\n" ) ;
    scanf ( "%d" , &nbrClasse ) ;
    totalélèves ( nbrClasse ) ;
    return ;
}

void exercice5Plus8 ( )
{
    int entier = 0 ;
    entier = saisirEntier ( ) ;
    multipleDeuxSept ( entier ) ;
    return ;
}