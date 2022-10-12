package Inheritance.singleInheritance;

class Test{
    public  static  void main(String arr[])
    {
        Dog d1 = new Dog("Some","Something","german","Male",4,true);
        //Default Constructor Created by Compilar

        //Here, we have type an data member which present in both Classes Super class as well as at the child
        // Now How we can specify that we are talking about the Parent class variable.
        // Here the role of the super keyword comes into the picture
        d1.color="Black";
        d1.eating();
    }
}