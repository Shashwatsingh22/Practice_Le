package Interfaces;

public  interface Shape {
      double PI = 3.14; // This variable is not same as class variable the difference is
                    //  in this
      // public static final int sides = 4 (those are automatically attached to variabe either you attache or not)

      void area();
      // here public abstract void area() automatically added with this method

      // We are not taking about the default or static methods, we are talking about normal methods which can
      // helps us to achieve polymorphism.

      // LIKE with static method we can able to write its body in interface which allows but its not play
      // role in oops these are normal methods.

      void perimeter();
}

class Circle implements  Shape{

      private double radius=0;

      public  Circle()
      {
         this.radius=0;
      }

      public Circle(double radius)
      {
            this.radius = radius;
      }

      @Override
      public  void area()
      {
            System.out.println("Area of Circle is : "+(PI*radius*radius));
      }

      @Override
      public  void perimeter()
      {
            System.out.println("Perimeter of Circle is : "+ (2*PI*radius));
      }
}