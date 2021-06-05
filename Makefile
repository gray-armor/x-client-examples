INPUT_DIR = examples
OUTPUT_DIR = output

white-window-5-sec-timeout:
	gcc ./$(INPUT_DIR)/white-window-5-sec-timeout.c -lX11 -o ./$(OUTPUT_DIR)/white-window-5-sec-timeout

