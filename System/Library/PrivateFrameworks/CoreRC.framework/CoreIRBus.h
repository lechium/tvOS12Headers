/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRCBus.h>

@class CoreIRDevice;

@interface CoreIRBus : CoreRCBus {

	CoreIRDevice* _pairedAppleRemote;
	CoreIRDevice* _lastAppleRemote;

}

@property (nonatomic,retain) CoreIRDevice * lastAppleRemote;                //@synthesize lastAppleRemote=_lastAppleRemote - In the implementation block
@property (nonatomic,retain) CoreIRDevice * pairedAppleRemote;              //@synthesize pairedAppleRemote=_pairedAppleRemote - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)setPairedAppleRemote:(id)arg1 error:(id*)arg2 ;
-(id)addDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 error:(id*)arg3 ;
-(id)addDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 learningSession:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteDevice:(id)arg1 error:(id*)arg2 ;
-(CoreIRDevice *)pairedAppleRemote;
-(void)willRemoveDevice:(id)arg1 ;
-(id)initWithBus:(id)arg1 ;
-(id)mergeProperties;
-(CoreIRDevice *)lastAppleRemote;
-(void)didDispatchCommandFromAppleRemote:(id)arg1 ;
-(void)setPairedAppleRemote:(CoreIRDevice *)arg1 ;
-(void)setLastAppleRemote:(CoreIRDevice *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

