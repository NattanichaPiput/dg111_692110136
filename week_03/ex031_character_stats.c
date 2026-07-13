#include <stdio.h>
int main()
{
    printf("== Create Your Avatar ==\n");
    char name[25];
    printf("Name: ");
    scanf("%s", name);

    int maxHP;
    printf("Max HP: ");
    scanf("%d", &maxHP);

    int attack_power;
    printf("Attack power: ");
    scanf("%d", &attack_power);

    int defense;
    printf("Defense: ");
    scanf("%d", &defense);

    int lvl;
    printf("Level: ");
    scanf("%d", &lvl);

    printf("\n");

    printf("== Your Character Stats ==\n");
    printf("┌────────────────────────────┐\n");
    printf("│ Name: %-10s              │\n", name);
    printf("│ Max HP: %-10d            │\n", maxHP);
    printf("│ Attack power: %-10d      │\n", attack_power);
    printf("│ Defense: %-10d           │\n", defense);
    printf("│ Level: %-10d             │\n", lvl);
    printf("└────────────────────────────┘\n");
    return 0;
}