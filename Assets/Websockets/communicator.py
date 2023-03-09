import threading
from websocket_server import WebsocketServer
import json
import serial
import os

#Prints the websocket message Unity sends over. If the websocket has 'tdtool' in it, runs the shell command to turn on or off tellstick actuator
def on_message(client, server, message):
    print("Client(%d) said: %s" % (client['id'], message))
    if("tdtool" in message):
        os.system(message)

#Prints a message when a new client connects to the WebSocket server
def new_client(client, server):
    print("New client connected with id %d" % client['id'])

#Gets Arduino Serial Data such as Potentiometer and Button values
def listen_to_arduino(server):
    arduino = serial.Serial('COM10', 9600, timeout=.1)
    while True:
        data = arduino.readline()
        if data:
            print(data)
            server.send_message_to_all(data)

#Starts the WebSocket server
def create_websocket():
    server = WebsocketServer(host="0.0.0.0", port=32323)
    server.set_fn_new_client(new_client)
    server.set_fn_message_received(on_message)
    thread = threading.Thread(target=server.run_forever)
    thread.daemon = True
    thread.start()
    listen_to_arduino(server)

def main():
    create_websocket()

main()
