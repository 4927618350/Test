import ctypes
from ctypes import *
dll = ctypes.cdll.LoadLibrary
lib = dll('./test.so')
st=('pause')
map={'p':112,'a':97,'u':117,'s':115,'e':101,}
char_array = c_char * 105
char_array_obj = char_array()
for i in range(len(st)):
    char_array_obj[i]=map[st[i]]
lib._system(char_array_obj)
