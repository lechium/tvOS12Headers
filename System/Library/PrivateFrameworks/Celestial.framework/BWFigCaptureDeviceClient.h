/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BWFigCaptureDeviceClient : NSObject {

	int _clientID;
	int _pid;
	/*^block*/id _deviceAvailabilityChangedHandler;
	BOOL _sharedDeviceInUseForFlashlight;
	BOOL _sharedDeviceInUseForVideo;

}

@property (nonatomic,readonly) int clientID;                                   //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) int pid;                                        //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) id deviceAvailabilityChangedHandler;                //@synthesize deviceAvailabilityChangedHandler=_deviceAvailabilityChangedHandler - In the implementation block
@property (assign,nonatomic) BOOL sharedDeviceInUseForFlashlight;              //@synthesize sharedDeviceInUseForFlashlight=_sharedDeviceInUseForFlashlight - In the implementation block
@property (assign,nonatomic) BOOL sharedDeviceInUseForVideo;                   //@synthesize sharedDeviceInUseForVideo=_sharedDeviceInUseForVideo - In the implementation block
+(id)deviceClientWithPID:(int)arg1 clientIDOut:(int*)arg2 ;
-(id)initWithPID:(int)arg1 ;
-(id)deviceAvailabilityChangedHandler;
-(void)setDeviceAvailabilityChangedHandler:(id)arg1 ;
-(BOOL)sharedDeviceInUseForFlashlight;
-(void)setSharedDeviceInUseForFlashlight:(BOOL)arg1 ;
-(BOOL)sharedDeviceInUseForVideo;
-(void)setSharedDeviceInUseForVideo:(BOOL)arg1 ;
-(int)clientID;
-(int)pid;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

