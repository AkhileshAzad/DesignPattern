using StrategyPattern.Ducks;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StrategyPattern
{
    class MiniDuckSimulator
    {
        static void Main(string[] args)
        {
            MallardDuck mallardDuck = new MallardDuck();
            mallardDuck.setFlybehavior();
            mallardDuck.setQuackBehaviour();

            mallardDuck.performFly();
            mallardDuck.performQuack();

            Console.ReadLine();
        }
    }
}
