/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSString;

@interface HAPCharacteristicTuple : HMFObject {

	HAPCharacteristic* _hapCharacteristic;
	NSString* _serverIdentifier;
	long long _linkType;

}

@property (nonatomic,retain) HAPCharacteristic * hapCharacteristic;              //@synthesize hapCharacteristic=_hapCharacteristic - In the implementation block
@property (nonatomic,retain) NSString * serverIdentifier;                        //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (assign) long long linkType;                                           //@synthesize linkType=_linkType - In the implementation block
-(void)setLinkType:(long long)arg1 ;
-(long long)linkType;
-(NSString *)serverIdentifier;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(id)initWithHAPCharacteristic:(id)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3 ;
-(HAPCharacteristic *)hapCharacteristic;
-(void)setHapCharacteristic:(HAPCharacteristic *)arg1 ;
@end

