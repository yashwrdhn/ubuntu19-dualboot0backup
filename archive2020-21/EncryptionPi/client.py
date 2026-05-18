import socket

s = socket.socket()


port = 55555
 
#ip = '192.168.43.196' 
s.connect(('127.0.0.1',port))

message = s.recv(40960000)
f = open('image', 'wb')
f.write(message)
s.send(bytes('message recieved','utf-8'))


s.close()
