import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import Axes3D
from matplotlib import cm


datos_10 = np.loadtxt('data10.dat')
datos_50 = np.loadtxt('data50.dat')
datos_100 = np.loadtxt('data100.dat')

plt.figure()
plt.subplot(1,3,1)
plt.title(print(np.max(datos_10)))
x = np.linspace(-1,10,50)
t = np.linspace(0,1,datos_10.shape[0])
plt.plot(x,t)
plt.xlabel('Nx')
plt.ylabel('Iteraciones')


plt.subplot(1,3,2)
plt.title(print(np.max(datos_50)))
x = np.linspace(-1,50,1251)
t = np.linspace(0,1,datos_50.shape[0])
plt.plot(x,t)
plt.xlabel('Nx')
plt.ylabel('Iteraciones')


plt.subplot(1,3,3)
plt.title(print(np.max(datos_100)))
x = np.linspace(-1,10,5001)
t = np.linspace(0,1,datos_100.shape[0])
plt.plot(x,t)
plt.xlabel('Nx')
plt.ylabel('Iteraciones')
plt.savefig('grafica30.png')

