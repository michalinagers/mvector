#pragma once
class MVector
{

public:
    MVector(int size) : size(size) { // Constructor to allocate memory
        if (size <= 0) {
            std::cout << "Size must be greater than 0.";
        }
        values = new float[size]; // Allocate memory for the vector
    }

    // Destructor to release the memory
    ~MVector() {
        delete[] values; // Free the allocated memory
    }

private:
	int size;
	float* values;

protected:

};

