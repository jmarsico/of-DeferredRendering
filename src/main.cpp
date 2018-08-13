#include "ofApp.h"
#include "ofAppGlutWindow.h"

int main() {
	ofAppGlutWindow window;

	ofSetupOpenGL(&window, 1920, 980, OF_WINDOW);
	ofRunApp(new ofApp());
}
