import serial

s = serial.Serial('COM3')
s.close()
s.open()

while(1):
    message = input()
    if message == "stop":
        s.write(b's')
        s.close()
        exit(1)
    s.write(bytes(message, 'utf-8'))