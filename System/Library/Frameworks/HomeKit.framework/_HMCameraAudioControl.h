/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMCameraControl.h>

@class HMCharacteristic;

@interface _HMCameraAudioControl : _HMCameraControl {

	HMCharacteristic* _mute;
	HMCharacteristic* _volume;

}

@property (nonatomic,readonly) HMCharacteristic * mute;                //@synthesize mute=_mute - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * volume;              //@synthesize volume=_volume - In the implementation block
-(HMCharacteristic *)mute;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(HMCharacteristic *)volume;
@end

