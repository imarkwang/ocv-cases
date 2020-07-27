OCV_DIR=/root/volume/hostsrc/opensource-prj/program/x86
OCV_LIBS=-L$(OCV_DIR)/lib/ -lopencv_stitching   -lopencv_video   -lopencv_features2d -lopencv_flann -lopencv_objdetect -lopencv_ml  -lopencv_highgui -lopencv_videoio -lopencv_imgcodecs  -lopencv_imgproc -lopencv_core 

INC_DIR=-I$(OCV_DIR)/include/opencv4/

LD_LIBRARY_PATH=$(OCV_DIR)/lib/
TARGET=resize.elf 

GCC=g++

$(TARGET): 
	$(GCC) $(INC_DIR) -v -o $@  ./*.cpp  $<  $(OCV_LIBS) 

clean:
	rm -rf *.o *.elf


oring_ocv:
	g++ main.cpp -o test `pkg-config --cflags --libs opencv`
