using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StrategyPattern.Behavior
{
    class Squeak : IQuackBehavior
    {
        public void Quack()
        {
            Console.WriteLine(" Squeak  Squeak Squeakkkkkk ..... ");
        }
    }
}
