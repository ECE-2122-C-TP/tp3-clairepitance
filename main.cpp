#include <iostream>

//TP3////TP3////TP3////TP3////TP3////TP3////TP3////TP3////TP3////TP3////TP3//


//Exo1////on peut rajouter une condition pour vérifier que a et b sont des entiers//

//int main(){
//    int a = 0, b = 0;
//    printf("saisisser un entier a;\n>");
//    scanf("%d", &a);
//    printf("saisisser un entier b;\n>");
//    scanf("%d", &b);
//    if ( a < b){       // on compart tout les cas possibles//
//        printf("le plus grand entier est b: %d", b);
//    }
//    else if ( a == b){
//        printf("les deux entiers ont la même valeure : %d", a);
//    }
//    else{
//        printf(" le plus grand entier est a : %d", a);
//    }
//    return 0;
//}


//Exo 2////Peut être rajouter un truc pour préciser l'unité//
// il faut rajouter un truc pour aller à la ligne au prochain printf//

//int main(){
//    int l = 0, L = 0;
//    printf("saisisser la largeur d'un rectangle l;\n>");
//    scanf("%d", &l);
//    printf("saisisser la longueur de ce même rectangle L; \n>");
//    scanf("%d", &L);
//    printf("le périmètre de ce rectangle est : %d", 2*(l+L)); // il faut rajouter un truc pour aller à la ligne au prochain printf//
//    printf("l'aire de ce rectangle est : %d", l*L);
//    return 0;
//}

//Exo 3////rajouter condition pour vérifier si c'est un entier//
// essayer de sauvgarder 3 dans une cst//

//int main(){
//    int n = 0;
//    printf ("saisisser un entier n;\n>");
//    scanf("%d", &n);
//    if ( n % 3 != 0 && n<10 ){
//        printf ("le nombre entier n n'est pas un multiple de 3 et est inférieur à 10");
//    }
//    else if ( n % 3 != 0 && n>10 ){
//        printf("le nombre entier n n'est pas un multiple de 3 et est supérieur à 10");
//    }
//    else if ( n % 3 != 0 && n==10 ){
//        printf("le nombre entier n n'est pas un multiple de 3 et est égal à 10");
//    }
//    else if ( n % 3 == 0 && n<10 ){
//        printf ("le nombre entier n est un multiple de 3 et est inférieur à 10");
//    }
//    else if ( n % 3 == 0 && n>10 ){
//        printf("le nombre entier n est un multiple de 3 et est supérieur à 10");
//    }
//    else{
//        printf("le nombre entier n est un multiple de 3 et est égal à 10");
//    }
//    return 0;
//}


// avec cette version ou on pose 3 comme constante je ne vois pas de changement,//
//et lorsque l'on change la valeur decette constant il n'y a que le texte qu'il faudraut changer//

//int main(){
//    int n = 0, t = 3;
//    printf ("saisisser un entier n;\n>");
//    scanf("%d", &n);
//    if ( n % t != 0 && n<10 ){
//        printf ("le nombre entier n n'est pas un multiple de 3 et est inférieur à 10.");
//    }
//    else if ( n % t != 0 && n>10 ){
//        printf("le nombre entier n n'est pas un multiple de 3 et est supérieur à 10.");
//    }
//    else if ( n % t != 0 && n==10 ){
//        printf("le nombre entier n n'est pas un multiple de 3 et est égal à 10.");
//    }
//    else if ( n % t == 0 && n<10 ){
//        printf ("le nombre entier n est un multiple de 3 et est inférieur à 10.");
//    }
//    else if ( n % t == 0 && n>10 ){
//        printf("le nombre entier n est un multiple de 3 et est supérieur à 10.");
//    }
//    else{
//        printf("le nombre entier n est un multiple de 3 et est égal à 10.");
//    }
//    return 0;
//}


//Exo 4//

/*
int main(){
    float N = 0; //comment faire pour les bébés, ex 18 mois//
    //traduire les mois en année ? forcer à mettre que des entiers?//
    int E = 0;
    printf("Entrez votre age;\n>");
    scanf("%f", &N);
    printf("Etes vous étudiant? Écrire 1 pour oui et 0 pour non;\n>");
    scanf("%d", &E);
    if ( 12 > N && N >= 0) {
        printf("Tarif enfant(4€).");
    }
    else if ( 17 <= N && N <= 27 && E == 1) {
        printf("Tarif jeune (6€).");
    }
    else if ( 12 <= N && N<= 17 ) {
        printf("Tarif jeune (6€).");
    }
    else if ( N >= 65) {
        printf("Tarif senior (6€).");
    }
    else {
        printf("Plein tarif (9€)");
    }
    return 0;
}
*/


//Exo 5//
/*
int main(){
    int N = 0;
    printf("les boissons chaudes sont les numéros 10 et 11. \n");
    printf("les boissons froides sont 1,2 et 3. \n");
    printf("saisissez le numéro d'une boisson;\n>");
    scanf("%d", &N);
    if ( N==10 ){
        printf("vous avez pris la boisson chaude numéro 10.");
    }
    else if ( N==11){
        printf("vous avez pris la boisson chaude numéro 11.");
    }
    else if ( N==1){
        printf("vous avez pris la boisson froide numéro 1.");
    }
    else if ( N==2){
        printf("vous avez pris la boisson froide numéro 2.");
    }
    else if ( N==3){
        printf("vous avez pris la boisson froide numéro 3.");
    }
    else {
        printf("ERREUR, ce numéro de boisson n'éxiste pas! :(");
    }
    return 0;
}
*/

//Exo 5//
/*
int main(){
    float n1=0, n2=0, n3=0, m=0;
    printf("saisisser une note sur 20, elle se nomme n1:\n>");
    scanf("%f", &n1);
    printf("saisisser une note sur 20, elle se nomme n2:\n>");
    scanf("%f", &n2);
    printf("saisisser une note sur 20, elle se nomme n3:\n>");
    scanf("%f", &n3);
    m=(n1+n2+n3)/3;
    if ( n1<0 || n2<0 || n3<0 || n1>20 || n2>20 || n3>20 ) {
        printf("ERREUR!! votre note n'est pas comprise entre 0 et 20. Saisissez une nouvelle note!");
    }
    else{
        printf("la moyenne des notes est : %f .",m);
    }
    return 0;
}
 */

//Exo 7//
/*
int main (){
    int N=0, e=0, i=0, s=0;
    printf("notez les nombre de classe ouverte N \n>");
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        printf("notez le nombre d'élève dans la classe e \n>");
        scanf("%d", &e);
        s = s + e;
    }
    printf("le nombre d'élèves est de: %d", s);
    return 0;
}
 */

//Exo 8//

/*
int main() {
    int n = 0;
    printf("vous devez saisir un entier n :\n>");
    scanf("%d", &n);
    while ( ((n%7)!=0 ) && ((n%2)!=0)){  // faire table de vérité//
        printf("vous devez saisir un nouveau entier. \n>");
        scanf ("%d", &n);
        }

    return 0;
}
 */

//Exo 9//

/* au début on met une pierre (le sommet) ensuite on en a besoin de 2^2 puis à l'étage endessous de 3^3*/
/*faire une boucle tan que avec condition : */
/* m représente le nombre de pierre que l'on utilise à pour tout les étages; i représente le nombre d'étage*/
/*le nombre de pierre qu'on a est inférieur au nombre de pierre que l'on construit pour chaque étage*/

/*
int main(){
    int n=0, m=0, i=0;
    printf ("saisissez le nombre de pierre disponible: \n>");
    scanf ( "%d", &n);
    while ( n > m ){
        i=i+1;
        m = m + i^2;
        }
    printf ( " Le nombre d'étage est de: %i", i );
    return 0;
    }

*/

//Exo 10//
/*
int main() {
    int n = 0, s = 0, i = 0;
    printf("nous allons calculer la moyenne d'entier positif\n");
    while (n >= 0) {
        printf("saisissez un nombre entier positif: \n");
        printf("ou saisissez un nombre négatif pour finir la saisie:\n>");
        scanf("%d", &n);
        s = s + n;
        i =i +1;
    }
    i=i-1;
    s=s-n;
    printf("le calcul de la moyenne est terminé.\n");
    printf("la moyenne des entiers est: %f", float(s)/float(i));
    return 0;
}
*/
/*j'aurais aimé créer une liste avec tout les élément que prend n sauf sa dernière valeur*/
/*comme ça la moyenne aurait été s/(le nombre d'élément de la liste)*/