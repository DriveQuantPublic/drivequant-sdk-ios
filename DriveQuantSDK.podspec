Pod::Spec.new do |s|
  s.name           = "DriveQuantSDK"
  s.version        = "3.0.3"
  s.summary        = "DriveQuant iOS SDK"
  s.homepage       = "https://www.drivequant.com"
  s.author         = { "DriveQuant" => "developer@drivequant.com" }
  s.platform       = :ios, '9.0'
  s.source         = { :git => "https://github.com/DriveQuantPublic/drivequant-sdk-ios.git", :tag => "{s.version}" }
  s.frameworks     = "CoreLocation"

  s.ios.vendored_frameworks = 'DriveQuant_SDK.framework'
  s.requires_arc = true
end
