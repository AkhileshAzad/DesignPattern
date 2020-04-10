using StrategyPattern.Behavior;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StrategyPattern
{
   class Duck
    {

       public IFlyBehavior flyBehavior;
       public IQuackBehavior quackBehavior;

        public void performQuack()
        {
            quackBehavior.Quack();
        }

        public void performFly()
        {
            flyBehavior.Fly();
        }


        void swim()
        {
            Console.WriteLine("Swimming in the pound.");
        }
       
    }
}
