import socket
import threading

HEADER = 64
PORT = 3074
SERVER = '158.251.91.68'
ADDR = (SERVER, PORT)
FORMAT = 'utf-8'
DISCONNECT_MESSAGE = 'DISCONNECT!'
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

server.bind(ADDR)
import string 
abc=string.ascii_lowercase
def descifrar(texto,clave):
  longitud=len(texto);
  palabra=''
  for i in range (0,longitud):
    for pos in range (0,26):
      if texto[i]==abc[pos]:
        pos_abc=pos-(int(clave))
        if pos_abc >-1:
           palabra=palabra+abc[pos_abc]
        if pos_abc <0 :
           palabra=palabra+abc[pos_abc%26]
  return(palabra)    


def handle_client(conn, addr):
    print(f"[NEW CONNECTION] {addr} connected.")

    connected = True
    while connected:
        msg_length = conn.recv(HEADER).decode(FORMAT)
        if msg_length:
            msg_length = int(msg_length)
            msg = conn.recv(msg_length).decode(FORMAT)
            if msg == DISCONNECT_MESSAGE:
		print(f"[{addr}] {msg}")
                connected = False
            if msg != DISCONNECT_MESSAGE:
            	print(f"[{addr}] {descifrar(msg,'5')}")
            conn.send("Msg received".encode(FORMAT))

    conn.close()


def start():
    server.listen()
    print(f"[LISTEN] Server is listening on address {ADDR}")
    while True:
        conn, addr = server.accept()
        thread = threading.Thread(target=handle_client, args=(conn, addr))
        thread.start()
        print(f"[ACTIVE CONNECTIONS] {threading.activeCount() - 1}")

print("[STARTING] server is running.....")
start()
