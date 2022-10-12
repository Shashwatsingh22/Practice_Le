package Inheritance.singleInheritance;

import Inheritance.singleInheritance.Animal;

class Dog extends Animal{
   String type ="";
   String breed="";
   String gender="";

   public Dog() // Default Construtor
   {
      super(); // For Calling the Default constructor of parent
   }

   public Dog(String type, String animalType,String breed,String gender,int NumOfLegs, boolean hasTail)
   {
//      super.type=animalType; // by the help of the this keyword we can able assign the data to the parent data-member
//      this.type=type; // here we are accessing the data member of the current class.

      //this super() should be always written at the first line only
      super(NumOfLegs,type,hasTail);


   }
}