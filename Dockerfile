FROM ubuntu:jammy

RUN apt-get update  \
	&& apt-get install -y g++ make
