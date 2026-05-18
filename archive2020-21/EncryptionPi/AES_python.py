from Crypto.Cipher import AES 
from Crypto import Random
import binascii


def append_space_padding(str,blocksize=16):
	pad_len = blocksize - (len(str)%blocksize)
	padding = 'a'*pad_len
	return str+padding

def remove_space_padding(str,blocksize=16):
	pad_len = 0

	for char in str[::-1]:
		if char == 'a':
			pad_len += 1
		else:
			break;

	return str[:-pad_len]



def encrypt(plaintext,key):
	aes = AES.new(key,AES.MODE_ECB)

	return aes.encrypt(plaintext.encode())


def decrypt(ciphertext,key):
	aes = AES.new(key,AES.MODE_ECB)
	return aes.decrypt(ciphertext).decode('UTF-8')



def design():
	print()
	print("*"*100)



if __name__ == "__main__":


	design()

	key = Random.new().read(16)
	print("key: %s"% key)
	print("in bytes :",binascii.hexlify(key))
	plaintext = "this is some message hack if u can"
	# print(f"length of plaintext {len(plaintext)}")
	print(f"plaintext : {plaintext}")

	padded_text = append_space_padding(plaintext)
	# print(f"length of padded_text {len(padded_text)}")
	# print(f"padded_text : {padded_text}")

	ciphertext = encrypt(padded_text,key)
	print()
	print(f"hexified ciphertext: {ciphertext}")
	print("in bytes :",binascii.hexlify(bytearray(ciphertext)))

	decrypted = decrypt(ciphertext,key)
	maybe_plaintext = remove_space_padding(decrypted)

	print()
	print(f"decrypted text : {maybe_plaintext}")
	
	design()

