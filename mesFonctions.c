//
// Created by Margaux Leglise on 29/09/2021.
//
#include <stdio.h>
#include "exercice.h"
#include "mesFonctions.h"

/* EXERCICE 1 */
int  getMax ( int entier1 , int entier2 )
{
    printf ( ( entier1 < entier2 ) ?
             "Le 2ème entier est le plus grand entier\n" :
             "Le 1er entier est le plus grand entier\n" ) ;
    return 0 ;
}


/* EXERCICE 2 */
int saisirEntier ( )
{
    int entier = 0 ;
    printf ( "Saisir un entier\n" ) ;
    scanf ( "%d" , &entier ) ;
    return entier ;
}


/* EXERCICE 3 */
int périmètreRectangle ( int largeur , int longueur )
{
    printf ( "Le périmètre de votre rectangle est : %d\n" , 2 * largeur + 2 * longueur ) ;
    return 0 ;
}

int aireRectangle ( int largeur , int longueur )
{
    printf ( "L'air de votre rectangle est : %d\n" , largeur * longueur ) ;
    return 0 ;
}


/* EXERCICE 4 */
int multiple ( int entier )
{
    if ( ( entier % 3 == 0 ) && ( entier >= 10 ) )
    {
        printf ( "%d est un multiple de 3 ET est supérieur ou égal à 10" , entier ) ;
    }
    else
    {
        printf ( "%d n'est PAS un multiple de 3 et est supérieur ou égal à 10" , entier ) ;
    }
    return 0 ;
}


/* EXERCICE 5 */
float moyenneFonction ( float note1 , float note2 , float note3 )
{
    float moyenne = 0.0f ;
    moyenne = ( note1 + note2 + note3 ) /  ( float ) 3 ;
    printf ( "votre moyenne est : %f/20\n" , moyenne ) ;

    return 0 ;
}


/* EXERCICE 7 (TD 3) */
int totalélèves ( int nbrClasse )
{
    int nbrEleve = 0 , compteur = 0 , i = 0 ;
    for ( i = 1 ;  i < ( nbrClasse + 1 ) ; i++ )
    {
        printf ( "Combien d'élèves dans la classe %d ?\n" , i ) ;
        scanf ( "%d" , &compteur ) ;
        nbrEleve = nbrEleve + compteur ;
    }
    printf ( "Le nombre d'élèves dans l'école est de %d" , nbrEleve ) ;
    return 0 ;
}



/* EXERCICE 8 (TD 3) */
int multipleDeuxSept ( int entier )
{
    do
    {
        printf ( "Rentrez un entier\n" ) ;
        scanf ( "%d" , &entier ) ;
    }
    while ( ( entier % 7 != 0 ) || ( entier % 2 != 0 ) ) ;
    printf ( "%d est un multiple de 2 et de 7\n" , entier ) ;
    return 0 ;
}





















