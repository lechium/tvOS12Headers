/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMCameraStreamAudioPreferences, HMCameraStreamVideoPreferences;

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding> {

	HMCameraStreamAudioPreferences* _audioPreferences;
	HMCameraStreamVideoPreferences* _videoPreferences;

}

@property (nonatomic,readonly) HMCameraStreamAudioPreferences * audioPreferences;              //@synthesize audioPreferences=_audioPreferences - In the implementation block
@property (nonatomic,readonly) HMCameraStreamVideoPreferences * videoPreferences;              //@synthesize videoPreferences=_videoPreferences - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithAudioPreferences:(id)arg1 videoPreferences:(id)arg2 ;
-(HMCameraStreamVideoPreferences *)videoPreferences;
-(HMCameraStreamAudioPreferences *)audioPreferences;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

