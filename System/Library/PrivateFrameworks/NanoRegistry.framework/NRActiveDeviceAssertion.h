/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NRDevice;

@interface NRActiveDeviceAssertion : NSObject {

	BOOL _isActive;
	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _queue;
	NRDevice* _device;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                   //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,retain) NRDevice * device;                               //@synthesize device=_device - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDevice:(id)arg1 identifier:(id)arg2 ;
-(NRDevice *)device;
-(void)setDevice:(NRDevice *)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)description;
-(BOOL)isActive;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)invalidate;
-(void)_invalidate;
-(void)setIsActive:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
