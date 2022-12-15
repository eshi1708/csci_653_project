// quantum time evolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <complex>
using namespace std;

int matsize;//number of states. 2^N for a 2-spin system
double timestep;
double hbar = 1.054571817e-34;

int main()
{
    
}

std::complex<double>** diagonalize(std::complex<double>* hamiltonian) {
    //diagonalise the hamiltonian matrix, then return the state eigenvectors


}

void timeEvolution(std::complex<double>* hamiltonian, std::complex<double>* currentState) {
    std::complex<double>** eigenvectors = diagonalize(hamiltonian);
    //at this point the hamiltonian should be diagonalized
    for (int i = 0; i < matsize; i++) {
        std::complex<double> operatorexp(0.0, timestep * imag(hamiltonian[i][i]) * timestep / hbar);
        currentState[i] = std::exp(operatorexp) * currentState[i];

    }

}
