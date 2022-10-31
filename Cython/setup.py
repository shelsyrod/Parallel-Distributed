## Cython: setup.py
# fichero para la creacion del objeto compartido 

from distutils.core import setup, Extension
from Cython.Build import cythonize

exts = (cythonize("cy_planet_orbit.pyx"))

setup(ext_modules = exts)