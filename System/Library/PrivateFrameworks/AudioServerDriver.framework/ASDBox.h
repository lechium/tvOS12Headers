/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDObject.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString, NSArray;

@interface ASDBox : ASDObject {

	NSMutableArray* _audioDevices;
	NSMutableArray* _clockDevices;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	NSString* _boxName;
	BOOL _acquired;
	int _acquisitionFailure;
	BOOL _identify;
	NSObject*<OS_dispatch_queue> _acquireQueue;
	BOOL _hasVideo;
	BOOL _hasAudio;
	BOOL _hasMIDI;
	BOOL _requiresAuthentication;
	BOOL _supportsIdentify;
	BOOL _canSetIdentify;
	BOOL _acquirable;
	BOOL _canChangeBoxName;
	NSString* _boxUID;
	NSString* _modelUID;
	NSString* _manufacturerName;
	NSString* _modelName;
	NSString* _serialNumber;
	NSString* _firmwareVersion;

}

@property (nonatomic,copy) NSString * boxName; 
@property (nonatomic,copy,readonly) NSString * boxUID;                                        //@synthesize boxUID=_boxUID - In the implementation block
@property (nonatomic,copy) NSString * modelUID;                                               //@synthesize modelUID=_modelUID - In the implementation block
@property (nonatomic,copy) NSString * manufacturerName;                                       //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,copy) NSString * modelName;                                              //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * firmwareVersion;                                        //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (assign,nonatomic) BOOL hasVideo;                                                   //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) BOOL hasAudio;                                                   //@synthesize hasAudio=_hasAudio - In the implementation block
@property (assign,nonatomic) BOOL hasMIDI;                                                    //@synthesize hasMIDI=_hasMIDI - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthentication;                                     //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (assign,nonatomic) BOOL supportsIdentify;                                           //@synthesize supportsIdentify=_supportsIdentify - In the implementation block
@property (assign,nonatomic) BOOL canSetIdentify;                                             //@synthesize canSetIdentify=_canSetIdentify - In the implementation block
@property (assign,getter=isAcquireable,nonatomic) BOOL acquireable; 
@property (assign,getter=isAcquirable,nonatomic) BOOL acquirable;                             //@synthesize acquirable=_acquirable - In the implementation block
@property (assign,nonatomic) BOOL canChangeBoxName;                                           //@synthesize canChangeBoxName=_canChangeBoxName - In the implementation block
@property (assign,nonatomic) BOOL acquired; 
@property (assign,nonatomic) int acquisitionFailure; 
@property (assign,nonatomic) BOOL identify; 
@property (nonatomic,readonly) unsigned transportType; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> acquireQueue; 
@property (nonatomic,retain,readonly) NSArray * devices; 
@property (nonatomic,retain,readonly) NSArray * audioDevices; 
@property (nonatomic,retain,readonly) NSArray * clockDevices;                                 //@synthesize clockDevices=_clockDevices - In the implementation block
+(id)keyPathsForValuesAffectingAcquireable;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(unsigned)transportType;
-(unsigned)objectClass;
-(NSArray *)devices;
-(BOOL)hasVideo;
-(void)setHasVideo:(BOOL)arg1 ;
-(BOOL)requiresAuthentication;
-(void)systemWillSleep;
-(void)setModelName:(NSString *)arg1 ;
-(void)setSupportsIdentify:(BOOL)arg1 ;
-(NSString *)manufacturerName;
-(void)setManufacturerName:(NSString *)arg1 ;
-(BOOL)identify;
-(id)initWithPlugin:(id)arg1 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)driverClassName;
-(void)addAudioDevice:(id)arg1 ;
-(void)removeAudioDevice:(id)arg1 ;
-(NSArray *)audioDevices;
-(NSString *)boxUID;
-(void)systemHasPoweredOn;
-(NSArray *)clockDevices;
-(void)addClockDevice:(id)arg1 ;
-(void)removeClockDevice:(id)arg1 ;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(NSString *)boxName;
-(NSString *)modelUID;
-(BOOL)hasMIDI;
-(NSObject*<OS_dispatch_queue>)acquireQueue;
-(BOOL)acquired;
-(int)acquisitionFailure;
-(BOOL)canChangeBoxName;
-(BOOL)isAcquirable;
-(BOOL)canSetIdentify;
-(BOOL)changeBoxName:(id)arg1 ;
-(BOOL)acquireBox:(BOOL)arg1 fromHAL:(BOOL)arg2 ;
-(void)identifyBox:(BOOL)arg1 ;
-(void)removeAllAudioDevices;
-(void)setIdentify:(BOOL)arg1 ;
-(void)setAcquirable:(BOOL)arg1 ;
-(id)initWithBoxUID:(id)arg1 withPlugin:(id)arg2 ;
-(void)removeAllClockDevices;
-(void)addDevicesToPlugin;
-(void)removeDevicesFromPlugin;
-(void)setBoxName:(NSString *)arg1 ;
-(void)setAcquired:(BOOL)arg1 ;
-(void)setAcquisitionFailure:(int)arg1 ;
-(BOOL)isAcquireable;
-(void)setAcquireable:(BOOL)arg1 ;
-(void)setModelUID:(NSString *)arg1 ;
-(void)setHasAudio:(BOOL)arg1 ;
-(void)setHasMIDI:(BOOL)arg1 ;
-(void)setCanSetIdentify:(BOOL)arg1 ;
-(void)setCanChangeBoxName:(BOOL)arg1 ;
-(NSString *)firmwareVersion;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)addDevice:(id)arg1 ;
-(void)removeDevice:(id)arg1 ;
-(BOOL)supportsIdentify;
-(NSString *)modelName;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)hasAudio;
-(void)removeAllDevices;
@end

