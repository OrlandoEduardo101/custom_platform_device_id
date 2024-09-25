#include "include/platform_device_id/platform_device_id_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "platform_device_id_plugin.h"

void PlatformDeviceIdPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  platform_device_id::PlatformDeviceIdPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
