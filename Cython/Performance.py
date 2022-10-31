# Fichero para la prueba
# y comparativa de rendiminto
# solo python, con cython

import time
import py_planet_orbit
import cy_planet_orbit

ini_time = time.time()
cy_planet_orbit.main()
fin_time = time.time()

time_cython = fin_time - ini_time

ini_time = time.time()
py_planet_orbit.main()
fin_time = time.time()

time_python = fin_time - ini_time
print("El tiempo de Cython es: ", time_cython,"seg")
print("El tiempo de Python es: ", time_python,"seg")

print("Cython es ", time_python/time_cython," veces más rápido que Python")
