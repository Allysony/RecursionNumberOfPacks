#include <iostream>
void buyChicken (unsigned n, unsigned & num6Packs, unsigned & num9Packs,
unsigned & num20Packs)
{
    if( n == 44)
    {
        num20Packs = 1; num6Packs = 4; num9Packs = 0;
    }
    else if (n == 45 )
    {
        num20Packs = 0; num6Packs = 3; num9Packs = 3;
    }
    else if (n == 46 )
    {
        num20Packs = 2; num6Packs = 1; num9Packs = 0;
    }
    else if (n == 47)
    {
        num20Packs = 1; num6Packs = 0; num9Packs = 3;
    }
    else if (n == 48)
    {
        num20Packs = 0; num6Packs = 2; num9Packs = 4;
    }
    else if (n == 49)
    {
        num20Packs = 2; num6Packs = 0; num9Packs = 1;
    }
    else
    {
        buyChicken(n - 6, num6Packs, num9Packs, num20Packs);
        num6Packs++;
        return;
    }
}
int main() {
  unsigned int small = 0;
  unsigned int med = 0;
  unsigned int large = 0;
  buyChicken(58, small, med,large);
  std::cout << small;

  std::cout << "Hello World!\n";
}
