package Abstraction;

import Abstraction.Child;

class Main{
    public  static  void main(String args[])
    {
//        Child ch = new Child();
//        ch.cal();
//        ch.something();

          //Polymorphism
        Parent p = new Child();
        p.cal(); // Called from the parent class
        p.something(); //--> Output - "Given the Body by the Child." => Runtime Called from the Child Class

    }
}