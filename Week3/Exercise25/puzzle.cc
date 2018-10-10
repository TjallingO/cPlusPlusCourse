#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string text2;
char text[] = R"R(Wkh iroorzlqj lpsohphqwdwlrq vroyhv wkh sxccoh:

    1. Ghilqh d txhxh ri vxemhfwv dv dq duudb ri qVxemhfw hohphqwv. Wkh
hohphqwv frqwdlq wkh hbh froru dqg rswlrqdoob wkh rughu qxpehu ri wkh
jhqhudwhg vxemhfw.

    2. Zkhq d qhz vxemhfw lv dgghg wr wkh txhxh, ylvlw doo wkh txhxh'v
hohphqwv iurp wkh iluvw wr wkh odvw.

    3. Wkh iluvw vxemhfw wr lqvhuw lqwr wkh txhxh lv lqvhuwhg dw wkh txhxh'v
iurqw.

    4. Li wkhuh duh vxemhfwv lq wkh txhxh, ylvlw doo vxemhfwv iurp wkh iluvw
wr wkh odvw, dqg lqvhuw wkh qhz vxemhfw dw wkh srvlwlrq ri wkh iluvw vxemhfw
kdylqj eoxh hbhv, prylqj doo uhpdlqlqj halvwlqj vxemhfwv rqh srvlwlrq iduwkhu
lq wkh txhxh.

    5. Li wkh hqg ri wkh (xvhg) txhxh lv uhdfkhg lqvhuw wkh qhz vxemhfw dw wkh
hqg, ehbrqg wkh odvw vxemhfw lq wkh txhxh.

    6. Zkhq lqvhuwlqj d vxemhfw, ghwhuplqh lwv hbh froru xvlqj d udqgrp qxpehu
jhqhudwru (h.t., li dq rgg ydoxh lv jhqhudwru wkh hbh froru lv eoxh, rwkhuzlvh
eurzq), dqg rswlrqdoob vwruh lwv rughu qxpehu.

Dw wkh hqg, glvsodb wkh frqwhqwv ri wkh txhxh iurp iurqw wr edfn, vkrzlqj hbh
froruv dqg rswlrqdoob rughu qxpehuv.)R";

int main(int argc, char const *argv[]) {
  for (size_t index = 0; index < strlen(text); ++index) {
    if (text[index] != 'a' && text[index] != 'b' && text[index] != 'c' && isalpha(text[index]))
      text2 += char(text[index]-3);
    if (text[index] == 'a')
      text2 += 'x';
    if (text[index] == 'b')
      text2 += 'y';
    if (text[index] == 'c')
      text2 += 'z';
    if (!isalpha(text[index]))
      text2 += text[index];
  }
  cout << text << '\n' << '\n';
  cout << text2 << '\n';
//  cout << text2.length() << '\n';
//  cout << char(text[1]+3) << '\n';
  //cout << 'a' << " " << char('a' + 3) << '\n';
  //cout << (unsigned)strlen(text) << '\n';
}
