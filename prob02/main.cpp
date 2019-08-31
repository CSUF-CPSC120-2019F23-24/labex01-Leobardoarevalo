// This program calculates the user's pay.

#include <iostream>

int main()
{
  double candy, rate, pay;

  // Get the number of hours worked.
  std::cout << "Welcome to the earnings calculator!/n";

  // Get the hourly pay rate.
  std::cout<<"How many candy bars did you sell?";
  std::cin >> candy;

  std::cout<<"How much does the organization earn for each bar sold?";
  std::cin >> rate;

  // Calculate the pay.
  pay = candy * rate;

  // Display the pay.
  std::cout << "congragulations! You have earned $" << pay <<"for the organization"<< std::endl;

  return 0;
}
