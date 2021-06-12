import socket
HEADER = 64
PORT = 3074
SERVER = '158.251.91.68'
ADDR = (SERVER, PORT)
FORMAT = 'utf-8'
DISCONNECT_MESSAGE = 'DISCONNECT!'

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

client.connect(ADDR)

def send(msg):
    message=msg.encode(FORMAT)
    msg_length = len(message)
    send_length = str(msg_length).encode(FORMAT)
    send_length += b' '*(HEADER-len(send_length))
    client.send(send_length)
    client.send(message)
    print(client.recv(2048).decode(FORMAT))

import string 
abc=string.ascii_lowercase
def cifrar(texto,clave):
  palabra=''
  longitud=len(texto); 
  for i in range (0,longitud): 
    for pos in range (0,26):  
      if texto[i]==abc[pos]: 
        pos_abc=pos+int(clave) 
        if pos_abc <26:
           palabra=palabra+abc[pos_abc]
        if pos_abc >25 : 
           palabra=palabra+abc[pos_abc%26]
  send(palabra) 
cifrar('hola','5')
input()
send(DISCONNECT_MESSAGE)

