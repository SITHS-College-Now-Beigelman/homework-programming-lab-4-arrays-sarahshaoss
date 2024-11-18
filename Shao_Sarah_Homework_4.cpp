//Sarah Shao
//11/12/2024
//Homework 4

#include <iostream>

using namespace std;

//Function prototypes
void filterEvens(int myArray[], int size);
void dna_to_rna(string dna);

int main()
{
    int myArray[8], cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};
    int totalCars = 0; //total number of cars
    int best = 0; //finds the salesperson with the highest number of sales

    cout << "Enter 8 numbers separrated by spaces for the array: "<< endl;
    for(int i = 0; i < 8; i++)        //For each input
            cin >> myArray[i]; //Store to the array

    filterEvens(myArray, 8); //Call the function

    for (int i = 0; i < 10; i++) //For each salesperson
        {
            totalCars = totalCars + cars[i]; //Add the number of cars sold to the total
            if (cars[i] > cars[best]) //If the number of cars sold is greater than the previous best
                best = i; //Update the best salesperson
        }
    cout << "\nThe total number of cars sold at the dealership: " << totalCars << endl;
    cout << "The salesperson that sold the most cars: " << best + 1 << endl; 
    //adds 1 to the index to get the salesperson number
    cout << "The number of cars sold by the best salesperson: " << cars[best] << endl;
    cout << "DNA: CAGT2FPT7GCDOTAG} " << "RNA: ";
    dna_to_rna("CAGT2FPT7GCDOTAG}");
    
return 0; //ends program
/* 
    Enter 8 numbers separrated by spaces for the array: 
    12 95 2 4 6 18 14 3
    The even numbers are: 12 2 4 6 18 14 
    The total number of cars sold at the dealership: 58
    The salesperson that sold the most cars: 5
    The number of cars sold by the best salesperson: 14
    DNA: CAGT2FPT7GCDOTAG} RNA: GUCAACGAUC
*/
}

void filterEvens(int myArray[], int size) //Function to filter even numbers
{
    cout << "The even numbers are: ";
    for(int i = 0; i < 8; i++) //For each input
        {
            if (myArray[i] % 2 == 0) //If the number is even
                cout << myArray[i] << " "; //Print the number
        }
}

void dna_to_rna(string dna) //Function to convert DNA to RNA
{
    for (int i = 0; i < dna.length(); i++) //For each character in the string
        {
            if (dna[i] == 'A') //If the character is an A
                cout << "U";
            else if (dna[i] == 'C') //If the character is a C
                cout << "G";
            else if (dna[i] == 'G') //If the character is a G
                cout << "C";
            else if (dna[i] == 'T')//If the character is a T
                cout << "A";
        }
}
