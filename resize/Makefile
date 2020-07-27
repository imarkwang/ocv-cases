OCV_DIR=/root/volume/hostsrc/opensource-prj/program/opencv/
#OCV_DIR=/root/volume/hostsrc/opensource-prj/program/x86
OCV_LIBS=-L$(OCV_DIR)/lib/ -lopencv_imgcodecs -lopencv_core -lopencv_imgproc

INC_DIR=-I$(OCV_DIR)/include/opencv4/

LD_LIBRARY_PATH=$(OCV_DIR)/lib/
TARGET=resize.elf 

GCC=riscv64-unknown-linux-gnu-g++
#GCC=g++

$(TARGET): 
	$(GCC) $(INC_DIR) -o $@  ./*.cpp  $<  $(OCV_LIBS) 

clean:
	rm -rf *.o *.elf output.jpg


oring_ocv:
	g++ main.cpp -o test `pkg-config --cflags --libs opencv`
