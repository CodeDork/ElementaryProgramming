#include <iostream>
#include <cmath> // For pow() function to calculate powers

using namespace std;

int main() {
    // Declare variables
    double investmentAmount; // Initial investment amount
    double annualInterestRate; // Annual interest rate provided by the user
    double monthlyInterestRate; // Monthly interest rate, derived from the annual rate
    double accumulatedValue; // Final calculated value of the investment
    int numberOfYears; // Number of years the money will be invested for

    // Request data from the user for investment amount, interest rate, and number of years
    cout << "Enter investment amount: "; // Prompt for investment amount
    cin >> investmentAmount; // Store investment amount in variable

    cout << "Enter annual interest rate (e.g., 4.25 for 4.25%): "; // Prompt for annual interest rate
    cin >> annualInterestRate; // Store annual interest rate in variable

    cout << "Enter number of years: "; // Prompt for the number of years
    cin >> numberOfYears; // Store number of years in variable

    // Convert the annual interest rate to a monthly interest rate
    // Annual rate is divided by 12 months and converted to decimal form (dividing by 100)
    monthlyInterestRate = annualInterestRate / 12 / 100;

    // Calculate the accumulated value using the given formula:
    // accumulatedValue = investmentAmount * pow(1 + monthlyInterestRate, numberOfYears * 12);
    // The pow function is used to raise (1 + monthlyInterestRate) to the power of (numberOfYears * 12)
    accumulatedValue = investmentAmount * pow(1 + monthlyInterestRate, numberOfYears * 12);

    // Output the final accumulated value to the user
    // This is the value after the investment has grown over the specified number of years
    cout << "Accumulated value is " << accumulatedValue << endl;

    return 0; // End of program
}