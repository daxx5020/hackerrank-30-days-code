/*
Task
Given a Book class and a Solution class, write a MyBook class that does the following:
• Inherits from Book |
• Has a parameterized constructor taking these 3 parameters:
1. string title
2. string author
3. int price

• Implements the Book class' abstract display method so it prints these 3 lines:
1. Title:, a space, and then the current instance's title.
2. Author:, a space, and then the current instance's author.
3. Price:, a space, and then the current instance's price.

Note: Because these classes are being written in the same file, you must not use an access modifier (e.g.: publie) when declaring MyBook or your code will not execute.
*/


class MyBook extends Book {
    constructor(title,author,price){
        super(title,author);
        this.price = price;
    }
    
    display(){
        console.log(`Title: ${this.title}`);
        console.log(`Author: ${this.author}`);
        console.log(`Price: ${this.price}`);
    };
}



