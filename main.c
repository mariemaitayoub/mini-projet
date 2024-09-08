#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct book
{
    char title[20];
    char author[20];
    int quantite;
    float price;
};
int count=0;
struct book books[100];
int main()
{
    int choice;

    do
    {
        system("cls");

        printf("\n--- Menu ---\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("0. Quitter\n");
        printf("\n------------------------------\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Ajouter un livre au stock
            createBook();
            break;

        case 2: // affich livres disponibles
            listBooks();
            break;

        case 3:; // search title
            searchBook();

            break;

        case 4:;// Mettre à jour un livre
            updateBook();

            break;
        case 5:; // delet
            deleteBook();
            break;

        case 6: // Afficher total books
            showtotalBooks();
            break;

        case 0: // Quitter
            leave();
            break;

        default:
            printf("Choix invalide, veuillez réessayer.\n");
        }
    }
    while (choice != 0);
    return 0;
}


void listBooks()
{
    printf("\nAvaliable books :\n");
    for(int i=0; i<count; i++)
    {
        printf("-------------- Book --------------\n");
        printf("Titre : %s\n", books[i].title);
        printf("Auteur : %s\n",books[i].author);
        printf("Prix : %.2f\n", books[i].price);
        printf("Quantité : %d\n", books[i].quantite);
    }
    system("pause");
}

void createBook()
{
    printf("enter the title: ");
    scanf("%s",&books[count].title);
    printf("enter the author name: ");
    scanf("%s",&books[count].author);
    printf("enter the quantite: ");
    scanf("%d",&books[count].quantite);
    printf("enter the price: ");
    scanf("%f",&books[count].price);
    printf("the book '%s' is added.\n",books[count].title);
    count++;
    system("pause");

}
void searchBook()
{
    char title[100];
    printf("enter the title of the book: ");
    scanf("%s",&title);
    for(int i=0; i<count; i++)
    {
        if(strcmp(title,books[i].title)==0)
        {
            printf("-------------- Book --------------\n");
            printf("Titre : %s\n", books[i].title);
            printf("Auteur : %s\n",books[i].author);
            printf("Prix : %.2f\n", books[i].price);
            printf("Quantité : %d\n", books[i].quantite);
        }
    }
    system("pause");
}

void updateBook()
{


    printf("\nAvaliable books :\n");
    for(int i=0; i<count; i++)
    {
        printf("-------------- Book --------------\n");
        printf("Id : %d\n", i);
        printf("Titre : %s\n", books[i].title);
        printf("Auteur : %s\n",books[i].author);
        printf("Prix : %.2f\n", books[i].price);
        printf("Quantité : %d\n", books[i].quantite);
    }
    printf("enter the id of the book that u want to Modify: ");
    int id;
    scanf("%d",&id);
    printf("enter the title: ");
    scanf("%s",&books[id].title);
    printf("enter the author name: ");
    scanf("%s",&books[id].author);
    printf("enter the quantite: ");
    scanf("%d",&books[id].quantite);
    printf("enter the price: ");
    scanf("%f",&books[id].price);
    printf("the book '%s' is modified.\n",books[id].title);
    system("pause");
}
void deleteBook()
{
int id;
    printf("\nAvaliable books :\n");
    for(int i=0; i<count; i++)
    {
        printf("-------------- Book --------------\n");
        printf("Id : %d\n", i);
        printf("Titre : %s\n", books[i].title);
        printf("Auteur : %s\n",books[i].author);
        printf("Prix : %.2f\n", books[i].price);
        printf("Quantité : %d\n", books[i].quantite);
    }
    printf("Enter the id of the book to delete: ");
    scanf("%d", &id);
    for (int i = id; i < count - 1; i++)
    {
        books[i] = books[i + 1];
    }
    count--;
    printf("Book deleted successfully.\n");
    system("pause");
}
void showtotalBooks()
{
    printf("you have %d book.\n",count);
    system("pause");
}
void leave()
{
    printf("Au revoir!\n");
};

