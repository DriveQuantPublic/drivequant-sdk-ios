Pod::Spec.new do |s|
  s.name           = "DriveQuantSDK"
  s.version        = "1.0.1"
  s.summary        = "DriveQuant iOS SDK"
  s.homepage       = "https://www.drivequant.com"
  s.author         = { "DriveQuant" => "developer@drivequant.com" }
  s.platform       = :ios, '9.0'
  s.source         = { :git => "https://github.com/DriveQuantPublic/drivequant-sdk-ios.git", :tag => "{s.version}" }
  s.frameworks     = "CoreLocation"
  # s.frameworks     = "SystemConfiguration", "CoreLocation", "CoreMotion", "CoreTelephony"
  # s.libraries      = "z.1.1.3", "sqlite3", "c++"

  s.ios.vendored_frameworks = 'DriveQuant_SDK.framework'
  s.requires_arc = true
end
