class Solution {
public:
    string basic(int num) {
        string rom = "";
        if (num == 1) rom += "I";
        else if (num == 5) rom += "V";
        else if (num == 10) rom += "X";
        else if (num == 50) rom += "L";
        else if (num == 100) rom += "C";
        else if (num == 500) rom += "D";
        else if (num == 1000) rom += "M";
        return rom;
    }

    string intToRoman(int num) {
        string rom = "";
        while (num / 1000 >=1 && rom != "MMM") {
            rom += basic(1000);
            num -= 1000;
        }
        while(num/900==1){
         rom+="CM";
         num-=900;
            }
        while (num / 500  >=1 &&  (rom.empty() || rom[rom.size() - 1] != 'D')) {
            rom += basic(500);
            num -= 500;
        }
         while(num/400==1){
         rom+="CD";
         num-=400;
            }
        while (num / 100 >= 1 && (rom.size() < 3 || rom.substr(rom.size() - 3, 3) != "CCC")) { // Fixed `substring` to `substr`
            rom += basic(100);
            num -= 100;
        }
         while(num/90==1){
         rom+="XC";
         num-=90;
            }
        while (num / 50 >= 1 &&(rom.empty() || rom[rom.size() - 1] != 'L')) {
            rom += basic(50);
            num -= 50;
        }
         while(num/40==1){
         rom+="XL";
         num-=40;
            }
        while (num / 10 >= 1 && (rom.size() < 3 ||rom.substr(rom.size() - 3, 3) != "XXX")) { // Fixed `substring` to `substr`
            rom += basic(10);
            num -= 10;
        }
         while(num/9==1){
         rom+="IX";
         num-=9;
            }
         while (num / 5 >= 1 &&(rom.empty() || rom[rom.size() - 1] != 'V')) {
            rom += basic(5);
            num -= 5;
        }
         while(num/4==1){
         rom+="IV";
         num-=4;
            }
        while (num / 1 >= 1 && (rom.size() < 3 ||rom.substr(rom.size() - 3, 3) != "III")) { // Fixed `substring` to `substr`
            rom += basic(1);
            num -= 1;
        }
        return rom;
    }
};
