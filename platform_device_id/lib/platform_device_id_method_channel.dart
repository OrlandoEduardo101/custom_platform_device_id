import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';

import 'platform_device_id_platform_interface.dart';

/// An implementation of [PlatformDeviceIdPlatform] that uses method channels.
class MethodChannelPlatformDeviceId extends PlatformDeviceIdPlatform {
  /// The method channel used to interact with the native platform.
  @visibleForTesting
  final methodChannel = const MethodChannel('platform_device_id');

  @override
  Future<String?> getPlatformVersion() async {
    final version = await methodChannel.invokeMethod<String>('getPlatformVersion');
    return version;
  }
}
