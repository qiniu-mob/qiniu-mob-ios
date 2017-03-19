# iOS Framework

Qiniu Mobile Services dynamic framework for iOS development.

### Usage

- add *QNMob* to your `Podfile` within required targets.

```ruby
platform :ios, '8.0'
use_frameworks!

target :'QiniuMobDemo' do
    pod 'QNMob', :git => 'https://github.com/qiniu-mob/qiniu-mob-ios.git'
end
```

- run `pod install`

- run `open <YourProject>.xcworkspace`
