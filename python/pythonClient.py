# echo-server.py
# echo-client.py

import socket
# from tkinter. tix import INTEGER

HOST = "127.0.0.1"  # The server's hostname or IP address
PORT = 8080  # The port used by the server

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    s.sendall(b"Buffer, world")
    data = s.recv(1024)

def getIntsFromByteString(byte_string):
    stringLength = len(byte_string)
    print(stringLength)
    #if we know how many bytes we were supposed to send, we can then figure out if a byte was lost somehow
    #will need to write some checks for that
    numberOfInts = int(stringLength/4)
    print(numberOfInts)

    int_arr = [ int.from_bytes(byte_string[i*4 : i*4+4], 'little') for i in range(0,numberOfInts)]
    return int_arr
    # n  = int.from_bytes(byte_string[i*4 : i*4+4], 'little')
    # print(n)

print(getIntsFromByteString(data))

# ints = int.from_bytes(data, "big",signed=True)
# print(f"Received {ints}")