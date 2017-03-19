Pod::Spec.new do |s|
  s.name         = 'AWSCore'
  s.version      = '1.0.0'
  s.summary      = 'Amazon Web Services SDK for iOS.'

  s.description  = 'The AWS SDK for iOS provides a library, code samples, and documentation for developers to build connected mobile applications using AWS.'

  s.homepage     = 'https://github.com/qiniu-mob/qiniu-mob-ios'
  s.license      = 'Apache License, Version 2.0'
  s.author       = { 'Amazon Web Services' => 'amazonwebservices' }
  s.platform     = :ios, '8.0'

  s.source       = { :git => 'git@github.com:qiniu-mob/qiniu-mob-ios.git',
                     :tag => "v#{s.version}"}
  s.frameworks   = 'UIKit', 'Foundation', 'SystemConfiguration'
  s.libraries    = 'z', 'sqlite3'
  s.requires_arc = true

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_frameworks  = 'AWSCore.framework'
  s.ios.frameworks           = 'AWSCore'
end
