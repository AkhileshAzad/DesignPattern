using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StrategyPattern.Behavior
{
    class FlyNoWay : IFlyBehavior
    {
        public void Fly()
        {
            Console.WriteLine("I am not flying !!");
        }
    }
}
