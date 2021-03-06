/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/BKSProcessAssertionUpdateEvent.h>

@class NSString;

@interface BKSProcessAssertionCreateEvent : BKSProcessAssertionUpdateEvent {

	unsigned _reason;
	NSString* _targetBundleIdentifier;
	int _targetPID;

}

@property (assign,nonatomic) unsigned reason;                              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) int targetPID;                                //@synthesize targetPID=_targetPID - In the implementation block
@property (nonatomic,copy) NSString * targetBundleIdentifier;              //@synthesize targetBundleIdentifier=_targetBundleIdentifier - In the implementation block
-(int)targetPID;
-(NSString *)targetBundleIdentifier;
-(void)setTargetPID:(int)arg1 ;
-(void)setTargetBundleIdentifier:(NSString *)arg1 ;
-(void)setReason:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned)reason;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

