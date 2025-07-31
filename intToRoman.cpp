/*
    Link do desafio: https://leetcode.com/problems/integer-to-roman/description/
    Autor da solução: Lucas Rech

    Data de criação: 31/07/2025
*/

#include <iostream>

using namespace std;

//Considerar somente esse trecho de código para o desafio do LeetCode
class Solution {
public:
    string intToRoman(int num) {
        int decimalNums[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romanNums[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string concatRomanChars;
        while(num > 0) {
            for (int i = 0; i < sizeof(decimalNums); i++) {
                if (num >= decimalNums[i]) {
                    concatRomanChars += romanNums[i];
                    num -= decimalNums[i];
                    break; //Break para evitar bad alloc e repetir a condição if num mesmo indice até que não seja mais possíve
                }
            }
        }
        return concatRomanChars;
    }
};


//Teste local, para uso na plataforma leetcode, ignorar função main
int main() {
    cout << Solution().intToRoman(/*adicione ou altere número aqui p testar em ambiente local*/3749) << endl;
    return 0;
}