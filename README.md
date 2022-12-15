# csci_653_project: Time Evolution of a Quantum State


This project aims to build a generalized program for calculating the time evolution of a quantum state. This will involve parsing input to generate a , diagonalizing the hamiltonian matrix to find the eigenvalues and eigenvectors, then repeatedly applying the time evolution operator to an initial state. After running the time evolution, analysis will be performed to gind if there are any envelopes that can contain the oscilating state, and also finding the dominant frequency.


This project will likely be written in C or C++ and may make use of pre-existing libraries for diagonalization and fourier transforms.

## First part: Representing a quantum system
The first thing that needs to be done is to have a way to represent the quantum state that we are time evolving. To start out with, we can represent a simple system with particles of spin 1/2 to be a $2^N$ vector where $N$ is the number of particles that are in the system. Each element of the vector represents the probability of the system existing in that particular state at the current point in time. More complicated systems can be similarly mapped to a state vector of the possible eigenstates with a exponential growth rate as more complexity is added in.

## Second part: the Hamiltonian and Diagonalization
The Hamiltonian is the descriptor of the energy of a quantum state. The Hamiltonian is an operator and can be represented by a $S$x$S$ matrix where $S$ is the total number of possible states for the quantum system. Given a diagonal hamiltonian, it is easy to construct the time evolution operator $e^{-iHt/ \hbar } \ket{n} \bra{n}$ where $H$ is the diagonal element coresponding to the eigenstate $\ket{n} $. Not all Hamiltonians are diagonal, and this requires diagonalization to generate the time evolution operator.

## Third part: Diagonalization and Eigenvector calculation
The Hamiltonian needs to be diagonalized in order to construct the time evolution operator, but we also need to retrieve the eigenvectors corresponding to each eigenvalue as they are the corresponding state or superposition of states corresponding to the energy in the hamiltonian. Diagonalization mainly involves as per usual solving the characteristic polynomial for the eigenvalues and then solving for the eigenvectors. I had intended to find a diagonalization library or program for use but did not manage to in time.

From here we can simply repeatedly apply the time evolution operator to the state vector for the diagonalized hamiltonian starting from some initial position.

## Fourth part: Analysis and unfinished work
I had intended to after writing code to run the time evolution, write code to fourier transform and then analyse the output for some simple test cases. I didn't manage to reach that point, and have only untested pseudocode written out so far. The intention was to be able to find the characteristic frequency and any upper and lower bounds on the oscilation of the quantum state.
