#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "PerseusPlugin.h"

void PerseusPlugin::input(std::string file) {
 inputfile = file;
}

void PerseusPlugin::run() {}

void PerseusPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "Perseus";
myCommand += " ";
myCommand += "-sin";
myCommand += " ";
myCommand += inputfile + " > "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<PerseusPlugin> PerseusPluginProxy = PluginProxy<PerseusPlugin>("Perseus", PluginManager::getInstance());
