import socket

s =  socket.socket()

port  = 55555
ip = '192.168.43.114'

s.bind(('127.0.0.1',port))
print("binded to port",port)
s.listen(3)


while True:

  	
  c, addr = s.accept()	
  print("connected with",addr)
  
  f = open('unsplash.jpg','rb')
  x = f.read()
 

  c.send(x)
  print(c.recv(1024))
  c.close()		
	
