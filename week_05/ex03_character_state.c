#include <stdio.h>
int main()
{
    int max_hp;
    printf("Max HP: ");
    scanf("%d", &max_hp);

    int damage;
    printf("Damage Taken: ");
    scanf("%d", &damage);

    int is_poisoned;
    printf("Poisoned (0/1) : ");
    scanf("%d", &is_poisoned);

    int attack_count;
    attack_count >= 0;
    printf("Attack Count: ");
    scanf("%d", &attack_count);

    printf("\n=== CHARACTER STATUS ===\n");

    int hp = max_hp - damage;
    if (hp < 0)
    {
        hp = 0;
    }

    if (hp == 0)
    {
        printf("State: DEAD \n");
    }

    else if (hp < 0.25 * max_hp)
    {
        printf("State: CRITICAL \n");
    }

    else if (is_poisoned == 1)
    {
        printf("State: POISONED \n");
    }

    else if (attack_count % 5 == 0)
    {
        printf("State: NORMAL \n");
        printf("Ultimate Ready!\n");
    }
}