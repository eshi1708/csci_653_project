# csci_653_project: Time Evolution of a Quantum State


This project aims to build a generalized program for calculating the time evolution of a quantum state. This will involve parsing input to generate a , diagonalizing the hamiltonian matrix to find the eigenvalues and eigenvectors, then repeatedly applying the time evolution operator to an initial state. After running the time evolution, analysis will be performed to gind if there are any envelopes that can contain the oscilating state, and also finding the dominant frequency.


This project will likely be written in C or C++ and may make use of pre-existing libraries for diagonalization and fourier transforms.

##First part: Representing a quantum system
The first thing that needs to be done is to have a way to represent the quantum state that we are time evolving. To start out with, we can represent a simple system with particles of spin 1/2 to be a $2^N$ vector where $N$ is the number of particles that are in the system. Each element of the vector represents the probability of the system existing in that particular state at the current point in time. More complicated systems can be similarly mapped to a vector of the possible eigenstates with a exponential growth rate as more complexity is added in.

##Second part: the Hamiltonian
The Hamiltonian is the descriptor of the energy of a quantum state. The Hamiltonian is an operator and can be represented by a $S$x$S$ matrix where $S$ is the total number of possible states for the quantum system. 
