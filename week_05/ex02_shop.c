#include <stdio.h>
int main()
{
    printf("=== ITEM SHOP ===\n");
    printf("Your Gold: 1000\n");
    int gold = 1000;
    printf("\n");

    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit Shop\n");
    printf("\n");

    int select;
    printf("Select item: ");
    scanf("%d", &select);
    printf("\n");

    switch (select)
    {
    case 1:
        printf("=== Purchase ===\n");
        printf("Health Potion: 50 Gold\n");
        if (gold >= 50)
        {
            gold -= 50;
            printf("Remaining Gold: %d Gold\n", gold);
        }
        else
        {
            printf("Not enough gold!\n");
        }
        printf("HP Bonus: +50 HP\n");
        printf("\n");
        printf("Item purchased successfully! ✓\n");
        break;
    case 2:
        printf("=== Purchase ===\n");
        printf("Mana Potion: 80 Gold\n");
        if (gold >= 80)
        {
            gold -= 80;
            printf("Remaining Gold: %d Gold\n", gold);
        }
        else
        {
            printf("Not enough gold!\n");
        }
        printf("MP Bonus: +30 MP\n");
        printf("\n");
        printf("Item purchased successfully! ✓\n");
        break;
    case 3:
        printf("=== Purchase ===\n");
        printf("Iron Sword: 500 Gold\n");
        if (gold >= 500)
        {
            gold -= 500;
            printf("Remaining Gold: %d Gold\n", gold);
        }
        else
        {
            printf("Not enough gold!\n");
        }
        printf("ATK Bonus: +20 ATK\n");
        printf("\n");
        printf("Item purchased successfully! ✓\n");
        break;
    case 4:
        printf("=== Purchase ===\n");
        printf("Leather Armor: 300 Gold\n");
        if (gold >= 300)
        {
            gold -= 300;
            printf("Remaining Gold: %d Gold\n", gold);
        }
        else
        {
            printf("Not enough gold!\n");
        }
        printf("DEF Bonus: +15 DEF\n");
        printf("\n");
        printf("Item purchased successfully! ✓\n");
        break;
    case 5:
        printf("Exiting the shop. Thank you for visiting!\n");
        break;
    default:
        printf("Invalid choice. Please select a valid item number (1-5).\n");
    }

    return 0;
}
