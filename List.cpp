#include <iostream>
#include <new>
#include <string.h>

using namespace std;

void addElementList();
void removeElementList();
void createList();

struct LIST* shoppinglist = NULL;

int main()
{

    return 0;
}

void callMenuList() 
{
    int option;
    do {
        cout << endl << endl << "Manager of Shopping List:" << endl;
        cout << "1 - Show shopping list." << endl;
        cout << "2 - Add article." << endl;
        cout << "3 - remove article" << endl;
        cout << "4 - create default shopping list" << endl;
        cout << "5 - exit." << endl;
        cin >> option;
    } while (option < 1 || option > 5);

    switch (option) {
        case 1:
            showList(); break;
        case 2:
            addElementList(); break;
        case 3:
            removeElementList(); break;
        case 4:
            createList(); break;
        case 5:
            break;
    }
}

struct LIST
{
    char product[15];
    int account;
    struct LIST *next;
};     

void showList() 
{
    struct LIST *item = shoppinglist;
    cout << endl << endl << "Shopping List:" << endl;

    for (int i = 1; item != NULL; i++) {
        cout << endl << endl << "Article " << i << " in shopping list:";
        cout << endl << item->product << " x" << item->account;
        item = item->next;
    }
}

void createList() 
{
    char product[15];

    strcpy_s(product, "gel");
    insertElementList(product, 2,1);
    strcpy_s(product, "orange");
    insertElementList(product, 20,2);
    strcpy_s(product, "chocolate");
    insertElementList(product, 50,3);

    cout << endl << "Default articles added to shopping list." << endl;
    callMenuList();
}

void removeElementList() 
{
    showList();
    int number;

    cout << "Type the number of the article you want to remove: ";
    cin >> number;

    if (number == 1 && shoppinglist != NULL) shoppinglist = shoppinglist->next;
    else{
        struct LIST* item = new LIST[1];
        item = shoppinglist;
        for (int i = 1; item; i++) {
            if (i == number-1) {
                if (item->next->next == NULL)item->next = NULL;
                else item->next = item->next->next;
                
                item = NULL;
                delete[] item;
            }
            if (item) item = item -> next;
        }
    }
    callMenuList();
}

void insertElementList(char product[15], int account, int position) 
{
    struct LIST *article = new LIST[1];

    strcpy_s(article->product, product);
    article->account = account;
    article->next = NULL;

    struct LIST *item = new LIST[1];

    if (position == 1) {
        article->next = shoppinglist;
        shoppinglist = article;
    }
    else {
        item = shoppinglist;
        for (int i = 1;  item ; i++) {
            if (i == position - 1) break;
            item = item->next;
        }
        article->next = item->next;
        item->next = article;
    }

    article = NULL;
    delete[] article;
    item = NULL;
    delete[] item;

}

void addElementList() 
{
    char product[15];
    int account;
    int position;
    showList();
    cout << endl << "Other number to the end of the list: ";

    cout << endl << "Type the product you want to buy: ";
    cin >> product;
    cout << "Type the account: ";
    cin >> account;
    cout << "Type the position of the new product: ";
    cin >> position;

    insertElementList(product, account, position);

    callMenuList();
}