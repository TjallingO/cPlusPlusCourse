#include "main.ih"

int main(int argc, char const **argv)
{

  bool dispAll = allVars(argc, argv);

  for (int idx = 1; idx != argc; ++idx)
  {
    if (strcmp(argv[idx], "-a") != 0)
      {
        cout << '\n' << argv[idx] << '\n';

        std::ifstream dFile(argv[idx], std::ios::binary);

        for (size_t index = 0; index != numStructs(argv[idx]); ++index)
        {
          struct acct_v3 acct;
          populateAcct(acct, dFile);
          if (dispAll || acct.ac_exitcode != 0)
          {
            string accom = string("'") + acct.ac_comm + "'";  // Not pretty, but the output
            cout  << setw(20) << left << accom                // won't align otherwise
                  << setw(10) << left << exitcode(acct.ac_exitcode) << '\n';
          }
        }

      }
  }

}
//functie voor argumenten of zelfs class
//die kan relatief simepl zijn, moet kijken of er opties zijn zoals -a
//alles wat geen optie is is file die die moet lezen
//zijn er uberhaubt files
//als die er zijn die afwerken zoniet default
//in main niet veel meer dan 4 5 regels
