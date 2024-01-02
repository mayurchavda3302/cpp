/*
Inheritance -  is a mechanism of reusing and extending existing classes
without modifying them, thus producing hierarchical relationships between
them.

Inheritance is almost like embedding an object into a class.

Inheritance is a part of OOP (OBJECT -ORIENTED PROGRAMMING)


INHERITANCE -OVERVIEW
 - the consept of reusability in c++ is sport using inheritance
 - we can reuse the properties of an exiting class by inheritance
 - the exisiting class is called BASE class
 - the new class which is inherited is called DERIVED class

syntax -
class  <derived_class_name> : <access-specifier/visibility_mode> <base_class_name>
{
        //body
}

NOTE  :
 1. defalut visibility mode is private
 2.public visibility mode : public  members of base class becomes public memeber of derived class
 3. private visibility mode : public members of base class becomes private members of derived class
 4.private members are never inherited

 types of Inheritance......

  1. single Inheritance
  2. multiple Inheritance
  3. Hirarachical Inheritance
  4. multilevel Inheritance
  5. Hybrid Inheritance
  6.multiplal inheritance

  ->BASE CLASS CAN ALSO SAY AS PARENT CLASS
  ->DERIVED CLASS CAN ALSO SAY AS CHILED CLASS

 1.single Inheritance-
            a derived class with only one base class

 2.multiple Inheritance-
             a derived class with more than on base class

 3. Hirarachical Inheritance-
           sereral derivrd classes from a singal base class
       also make two or more class from one base class

 4.multilevel Inheritance -
           deriving a class from already derived class
         like we make one class call  A  now we make class B from A
         now we also make class C from B class it is call multilevel Inheritance

 5. Hybrid Inheritance -
          a hybried Inheritance is a combination of multiple inheritance
         a  class is derived from two classes in multiple inheritance
         however one of the parent class is not a base class
*/