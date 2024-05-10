<!-- 
Task
Write a Person class with an instance variable, age, and a constructor that takes an integer, initial Age, as a parameter. The
constructor must assign initial Age to age after confirming the argument passed as initial Age is not negative: if a negative
argument is passed as initial Age, the constructor should set age to 0 and print Age is not valid, setting age to 0.. In
addition, you must write the following instance methods:

1. yearPasses should increase the age instance variable by 1.
2. amlOld) should perform the following conditional actions:
    • If age < 13. print You are young ..
    • If age ≥ 13 and age < 18, print You are a teenager..
    • Otherwise, print You are old..
To help you learn by example and complete this challenge, much of the code is provided for you, but you'll be writing everything in the
future. The code that creates each instance of your Person class is in the main method. Don't worry if you don't understand it all quite
yet!
Note: Do not remove or alter the stub code in the editor.
 -->


<?php
class Person{
    public $age;
   public function __construct($initialAge) {
        if ($initialAge < 0) {
            echo "Age is not valid, setting age to 0.\n";
            $this->age = 0;
        } else {
            $this->age = $initialAge;
        }
    }

    public function amIOld() {
        if ($this->age < 13) {
            echo "You are young.\n";
        } else if ($this->age >= 13 && $this->age < 18) {
            echo "You are a teenager.\n";
        } else {
            echo "You are old.\n";
        }
    }

    public function yearPasses() {
        $this->age++;
    }
}

$T = intval(fgets(STDIN));
 for($i=0;$i<$T;$i++){
     $age=intval(fgets(STDIN));
     $p=new Person($age);
     $p->amIOld();
     for($j=0;$j<3;$j++){
         $p->yearPasses();
     }
     $p->amIOld();
     echo "\n";
         
 }
?>
