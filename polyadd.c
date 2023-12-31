
#include <stdio.h>
#include <stdlib.h>
struct poly {
    int coeff, exp;
    struct poly* link;
  };

struct poly* create_poly(int num) {
    struct poly *head = NULL, *temp = NULL, *ptr = NULL;

    for (int i = 0; i < num; i++) {
        temp = (struct poly*)malloc(sizeof(struct poly));

        printf("\nEnter the coefficient and exponent: ");
        scanf("%d%d", &temp->coeff, &temp->exp);

        temp->link = NULL;

        if (head == NULL) {
            head = temp;
            ptr = temp;
        } else {
            ptr->link= temp;
            ptr = temp;
        }
    }

    return head;
}

void display(struct poly* poly) {
    while (poly != NULL) {
        printf("%dx^%d ", poly->coeff, poly->exp);
        if (poly-> link != NULL) {
            printf("+ ");
        }
        poly = poly->link;
    }
    printf("\n");
}
struct poly* addPolynomials(struct poly* poly1, struct poly* poly2) {
    struct poly* result = NULL;
    struct poly* temp = NULL;

    while (poly1 != NULL || poly2 != NULL) {
        struct poly* newNode = (struct poly*)malloc(sizeof(struct poly));
        newNode->link = NULL;

        if (result == NULL) {
            result = newNode;
            temp = newNode;
        } else {
            temp->link = newNode;
            temp = newNode;
        }

        if (poly1 == NULL) {
            newNode->coeff = poly2->coeff;
            newNode->exp = poly2->exp;
            poly2 = poly2->link;
        } else if (poly2 == NULL) {
            newNode->coeff = poly1->coeff;
            newNode->exp = poly1->exp;
            poly1 = poly1->link;
        } else {
            if (poly1->exp > poly2->exp) {
                newNode->coeff = poly1->coeff;
                newNode->exp = poly1->exp;
                poly1 = poly1->link;
            } else if (poly1->exp < poly2->exp) {
                newNode->coeff = poly2->coeff;
                newNode->exp = poly2->exp;
                poly2 = poly2->link;
            } else {
                newNode->coeff = poly1->coeff + poly2->coeff;
                newNode->exp = poly1->exp;
                poly1 = poly1->link;
                poly2 = poly2->link;
            }
        }
    }

    return result;
}
int main() {
    int n1, n2;
    printf("Enter the number of terms of the first polynomial: ");
    scanf("%d", &n1);

    struct poly* p = create_poly(n1);
    printf("Enter the number of terms of the second polynomial: ");
    scanf("%d", &n2);

    struct poly* q = create_poly(n2);

    printf("\nFirst polynomial: ");
    display(p);

    printf("\nSecond polynomial: ");
    display(q);
    
    struct poly* result = addPolynomials(p, q);

    printf("\nResultant polynomial after addition: ");
    display(result);

    return 0;
}


