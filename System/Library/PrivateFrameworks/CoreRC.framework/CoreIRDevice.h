/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRCDevice.h>

@class NSArray, CoreIRLearningSession, NSString, NSUUID;

@interface CoreIRDevice : CoreRCDevice {

	BOOL _isTransmitter;
	BOOL _isReceiver;
	unsigned long long _vendorID;
	NSArray* _buttons;
	CoreIRLearningSession* _learningSession;
	NSString* _OSDName;

}

@property (nonatomic,copy) NSString * OSDName;                                     //@synthesize OSDName=_OSDName - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                                      //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) BOOL isTransmitter;                                   //@synthesize isTransmitter=_isTransmitter - In the implementation block
@property (assign,nonatomic) BOOL isReceiver;                                      //@synthesize isReceiver=_isReceiver - In the implementation block
@property (nonatomic,readonly) BOOL is3rdPartyRemote; 
@property (assign,nonatomic) unsigned long long vendorID;                          //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,retain) CoreIRLearningSession * learningSession;              //@synthesize learningSession=_learningSession - In the implementation block
@property (nonatomic,readonly) BOOL isAppleRemote; 
@property (nonatomic,readonly) NSUUID * deviceID; 
+(BOOL)supportsSecureCoding;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(void)setVendorID:(unsigned long long)arg1 ;
-(unsigned long long)vendorID;
-(BOOL)isReceiver;
-(id)initWithDevice:(id)arg1 ;
-(NSUUID *)deviceID;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 deviceType:(unsigned long long)arg3 ;
-(BOOL)pairAppleRemote:(id*)arg1 ;
-(BOOL)unpairAppleRemote:(id*)arg1 ;
-(BOOL)isAppleRemote;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 ;
-(void)setIsTransmitter:(BOOL)arg1 ;
-(void)setIsReceiver:(BOOL)arg1 ;
-(BOOL)is3rdPartyRemote;
-(BOOL)isTransmitter;
-(BOOL)setOSDName:(id)arg1 error:(id*)arg2 ;
-(id)mergeProperties;
-(id)startLearningSessionWithReason:(unsigned long long)arg1 error:(id*)arg2 ;
-(CoreIRLearningSession *)learningSession;
-(BOOL)updateMappingWithSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)sendCommand:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearAllStoredCommands:(id*)arg1 ;
-(BOOL)setCommand:(unsigned long long)arg1 target:(id)arg2 forButtonCombination:(id)arg3 delay:(double)arg4 error:(id*)arg5 ;
-(BOOL)enableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(BOOL)disableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(BOOL)changeButtonCombination:(id)arg1 delay:(double)arg2 enabled:(BOOL)arg3 error:(id*)arg4 ;
-(void)setLearningSession:(CoreIRLearningSession *)arg1 ;
-(NSString *)OSDName;
-(void)setOSDName:(NSString *)arg1 ;
-(BOOL)setRemoteName:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
@end
