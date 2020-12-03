#
# Be sure to run `pod lib lint LVTEKYCsdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LVTEKYCsdk'
  s.version          = '0.0.1'
  s.summary          = 'Developed by LVT'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
The ekyc platform, developed by LVT, makes it easy to embeded OCR and face live matching into mobile app
                       DESC

  s.homepage         = 'https://github.com/lpbappdev/LVTEKYCsdk-iOS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Long Hoang Giang' => 'longhoanggiang@gmail.com' }
  s.source           = { :git => 'https://github.com/lpbappdev/LVTEKYCsdk-iOS.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'
  s.pod_target_xcconfig = {'OTHER_LDFLAGS' => '-ObjC'}

  s.source_files = 'LVTEKYCsdk/Classes/**/LVTeKYC.framework/Headers/*.h'
  s.public_header_files = 'LVTEKYCsdk/Classes/**/LVTeKYC.framework/Headers/*.h'

  s.frameworks = 'UIKit', 'AVFoundation'

  s.vendored_frameworks = 'LVTEKYCsdk/Classes/**/LVTeKYC.framework'
  s.dependency 'Firebase/MLVision'
  s.dependency 'Firebase/MLVisionFaceModel'

  s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
end
