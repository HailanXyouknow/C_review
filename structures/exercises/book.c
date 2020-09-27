// You will not need to write any main methor, also you will not write any printf or scanf to print or scan data
// for this assignment, the function getCourierCharge will be called by the tester and that will pass all the parameters.
#include <stdio.h>
#include <string.h>
#include "book.h"
/**
 * The following function receives 2 parameters, first is a pointer to book object, this book object will be 
 * allocated and initialized by the tester.
 * Second parameter is the distance in Miles, the book has to be dispatched to this distance.
 * 
 * 
 * Your task: You will calculate the courier charge based on the distance of the book and some other parameters 
 * as stated in the instruction, and then you will return that charge to the tester using the return statement.
 */ 

double getCourierCharge(Book *b_ptr, unsigned distance){
    /*
        Courier Base charge $5
        distance > 0 and <= 100 miles       Only base charge no extra charge for any distance.
        distance > 100 and <=250 miles      base charge + 10% of the price of book
        distance > 250 and <=500 miles      base charge + 15% of the price of book
        distance > 500 miles                base charge + 20% of the price of book.
        
        Additional requirements: If the author of the book is "Tagore" (the spelling is exactly this), then 
        take 5% discount on overall courier charge. 
        
        Finally return the courier charge using return keyword. Note that the return type of the function is double,
        hence you are expected to return the courier charge as double. 
        
    */
    double cost = 5;
    
    if (distance > 0 && distance <=100){
        
    } 
    else if (distance <= 250){
        cost += (b_ptr->price)*0.1;
    } 
    else if (distance <= 500){
        cost += (b_ptr->price)*0.15;
    }
    else{
        cost += (b_ptr->price)*0.20;
    }
    
    if (strcmp((b_ptr->author),"Tagore")==0){
        cost *= 0.95;
    }
    
    return cost;
}

int main(){
    Book b;
    Book * b_ptr;
    b_ptr = &b;
    strcpy(b_ptr->author, "Bob");
    strcpy(b_ptr->title, "A Title");
    b_ptr->price = 3.99;

    printf("Total charge: %lf\n", getCourierCharge(b_ptr, 100));
}
