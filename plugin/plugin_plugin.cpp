#include "plugin_plugin.h"
#include "bqtnconnect.h"

#include <qqml.h>

void PluginPlugin::registerTypes(const char *uri)
{
    // @uri com.combitech.bqtnconnect
    qmlRegisterType<BQtNConnect>(uri, 1, 0, "BQtNConnect");
}


