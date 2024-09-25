import 'package:plugin_platform_interface/plugin_platform_interface.dart';

import 'platform_device_id_method_channel.dart';

abstract class PlatformDeviceIdPlatform extends PlatformInterface {
  /// Constructs a PlatformDeviceIdPlatform.
  PlatformDeviceIdPlatform() : super(token: _token);

  static final Object _token = Object();

  static PlatformDeviceIdPlatform _instance = MethodChannelPlatformDeviceId();

  /// The default instance of [PlatformDeviceIdPlatform] to use.
  ///
  /// Defaults to [MethodChannelPlatformDeviceId].
  static PlatformDeviceIdPlatform get instance => _instance;

  /// Platform-specific implementations should set this with their own
  /// platform-specific class that extends [PlatformDeviceIdPlatform] when
  /// they register themselves.
  static set instance(PlatformDeviceIdPlatform instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }

  Future<String?> getPlatformVersion() {
    throw UnimplementedError('platformVersion() has not been implemented.');
  }
}
