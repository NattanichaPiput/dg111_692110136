#include <stdio.h>
#include <math.h>
int main()
{
    printf("=== COMBAT SIMULATOR ===\n");

    int P_ATK;
    printf("Player Attack: ");
    scanf("%d", &P_ATK);

    int E_DEF;
    printf("Enemy Defense: ");
    scanf("%d", &E_DEF);

    int hit_Num;
    printf("Hit Number: ");
    scanf("%d", &hit_Num);

    int base_damage = P_ATK - E_DEF;
    // check critical hit
    int critical_hit = hit_Num % 5 == 0;
    if (critical_hit)
    {
        int damage = (int)ceil((float)base_damage * 1.5f);
        printf("Damage = %d ***CRITICAL HIT! x1.5***\n", damage);
    }
    else
    {
        printf("Damage = %d (Normal)\n", base_damage);
    }

    return (0);
}