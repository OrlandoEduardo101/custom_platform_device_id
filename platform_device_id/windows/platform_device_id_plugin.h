#ifndef FLUTTER_PLUGIN_PLATFORM_DEVICE_ID_PLUGIN_H_
#define FLUTTER_PLUGIN_PLATFORM_DEVICE_ID_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace platform_device_id {

class PlatformDeviceIdPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  PlatformDeviceIdPlugin();

  virtual ~PlatformDeviceIdPlugin();

  // Disallow copy and assign.
  PlatformDeviceIdPlugin(const PlatformDeviceIdPlugin&) = delete;
  PlatformDeviceIdPlugin& operator=(const PlatformDeviceIdPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace platform_device_id

#endif  // FLUTTER_PLUGIN_PLATFORM_DEVICE_ID_PLUGIN_H_
