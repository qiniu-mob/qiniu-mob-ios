Pod::Spec.new do |s|
  s.name         = 'QNMob'
  s.version      = '1.0.0'
  s.summary      = 'Qiniu Mobile Services SDK for iOS.'

  s.description  = 'The Mobile SDK for iOS provides a library, code samples, and documentation for developers to build connected mobile applications using Qiniu Mobile Services.'

  s.homepage     = 'https://github.com/qiniu-mob/qiniu-mob-ios'
  s.license      = 'Apache License, Version 2.0'
  s.author       = { 'Qiniu Mobile Services' => 'qiniumobileservices' }
  s.platform     = :ios, '8.0'

  s.source       = { :git => 'git@github.com:qiniu-mob/qiniu-mob-ios.git',
                     :tag => "v#{s.version}"}
  s.frameworks   = 'AWSCore', 'QNMob'
  s.libraries    = 'z', 'sqlite3'
  s.requires_arc = true

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_frameworks  = 'QNMob.framework', 'AWSCore.framework'
  s.ios.frameworks           = 'AWSCore', 'QNMob'
end
