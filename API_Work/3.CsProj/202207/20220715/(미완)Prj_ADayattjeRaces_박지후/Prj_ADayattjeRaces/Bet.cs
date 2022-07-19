using System;
using System.Collections.Generic;
using System.Text;

namespace Prj_ADayattheRaces
{
    class Bet
    {
        public int Amount;  // The amount of cash that was bet
        public int Dog;     // The number of the dog the bet is on
        public Guy Bettor;  // The guy who placed the bet

        public string GetDescription()
        {
            // Return a string that says who placed the bet, how much cash was bet,
            // and which dog he bet on ("Joe bets 8 on dog #4").
            // If the amount is zero, no bet was placed ("Joe hasn't placed a bet").
            if (Bettor.IsBet)
                return this.Bettor.Name + " bets " + this.Amount + " bucks on dog " + this.Dog;

            return this.Bettor.Name + "'s Bet";
        }

        public int PayOut(int Winner)
        {
            // 변수는 레이스의 승자이다. 만약 개가 이기면 베팅 양을 리턴한다.
            // 그렇지 않으면 베팅 양의 음의 값을 리턴한다.
            int Res = (this.Dog == Winner ? this.Amount * 2 : 0);

            this.Dog = 0;
            this.Amount = 0;

            return Res;
        }
    }
}
