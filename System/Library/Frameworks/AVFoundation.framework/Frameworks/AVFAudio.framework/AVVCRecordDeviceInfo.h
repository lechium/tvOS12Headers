/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID;

@interface AVVCRecordDeviceInfo : NSObject {

	BOOL _isRemoteDevice;
	NSString* _recordRoute;
	NSString* _remoteProductIdentifier;
	NSUUID* _remoteDeviceUID;

}

@property (nonatomic,readonly) NSString * recordRoute;                          //@synthesize recordRoute=_recordRoute - In the implementation block
@property (readonly) BOOL isRemoteDevice;                                       //@synthesize isRemoteDevice=_isRemoteDevice - In the implementation block
@property (nonatomic,readonly) NSString * remoteProductIdentifier;              //@synthesize remoteProductIdentifier=_remoteProductIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * remoteDeviceUID;                        //@synthesize remoteDeviceUID=_remoteDeviceUID - In the implementation block
-(id)initWithVoiceController:(id)arg1 ;
-(BOOL)isRemoteDevice;
-(NSString *)recordRoute;
-(NSUUID *)remoteDeviceUID;
-(NSString *)remoteProductIdentifier;
-(void)dealloc;
@end
