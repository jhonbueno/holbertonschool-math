#!/usr/bin/env python3
import numpy as np

def gaussian_elimination(A, b):

    a = np.array(A)
    b = np.array(b)

    if np.linalg.det(a) != 0:
        return np.linalg.solve(a, b)
    else:
        print("You can't divide by zero!")
        return None
