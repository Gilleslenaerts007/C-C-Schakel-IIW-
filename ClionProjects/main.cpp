#include <iostream>

struct Persoon {
    int leeftijd;
    int (*is_oud)();
};

int is_oud(struct Persoon* thi) {
printf("checking leeftijd van persoon: %d\n", thi->leeftijd);
return thi->leeftijd > 60;
}

int main() {
    struct Persoon jaak;
    jaak.leeftijd = 40;
    jaak.is_oud = is_oud;

    printf("is jaak oud? %d\n", jaak.is_oud(jaak));
}
/*
#define GROOTTE 10
int main() {
    int arr[GROOTTE];
    for(int i = 0; i < GROOTTE; i++) {
        arr[i] = i * 10;
    }

    for(int j = 0; j < GROOTTE; j++) {
        printf("array index %d heeft waarde %d \n", j, arr[j]);
    }

    char string[] = "heykes cava";
    printf("%s", string);

    return 0;
}
 */