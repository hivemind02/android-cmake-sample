#include <jni.h>
#include "Math.hpp"
#include <sstream>
#include <string>

extern "C" {

jstring
Java_com_example_cmake_MainActivity_getString(JNIEnv *env, jobject) {
    Math math;
    int i = math.add(1,5);
    int j = math.add100(10);
    std::ostringstream stream;
    stream << "Cmake " << i << "," << j << std::endl;
    std::string str = stream.str();
	return env->NewStringUTF(str.c_str());
}

}
