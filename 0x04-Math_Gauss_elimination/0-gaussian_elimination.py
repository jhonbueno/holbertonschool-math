#!/usr/bin/env python3
import numpy as np

def gaussian_elimination(A, b):

    a = np.array(A)
    b = np.array(b)

    if np.linalg.det(a) != 0:
        return x = np.linalg.solve(a, b)
    else:
        return "You can't divide by zero!"
