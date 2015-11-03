## Some info

1. Camera = Server, PC = Client
2. Try not to import packages like java.util in server
3. The client uses java 1.7 and the server should be 1.4 compliant

##FIRST HANDIN

The first hand-in is due Wednesday 11/11 at 10.00. You should hand-in a pdf document containing your proposed design.

The document should contain the following material:

- A diagram showing the design of the server, including activities, passive objects and communication paths.

- A similar diagram for the client.

- A text describing the responsibilities of each activity and passive object in both client and server.

- A text describing your suggested network protocol, i.e. how the network packets are organized (at byte level) and what information is contained in the packets.

- A text describing how movie mode is propagated to the other camera in case one camera detects motion. I.e. how are activities communicating this information in client and server and how is it transferred over the network?

- A text describing your suggested method for detecting synchronous view mode and your suggested method for implementing synchronous viewing (in the client).

The texts should be short and to the point. The more detailed your description is, the better the feedback will be, probably saving you (a lot of) implementation time during the weeks ahead. Feedback will be given during the course meeting next week. When the teaching assistant deem your design ok, he will give go ahead for implementation.