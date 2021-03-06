/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/BKSAssertionEvent.h>

@class NSString;

@interface BKSTerminationAssertionEfficacyChangedEvent : BKSAssertionEvent {

	unsigned long long _efficacyMask;
	NSString* _targetBundleIdentifier;

}

@property (assign,nonatomic) unsigned long long efficacyMask;               //@synthesize efficacyMask=_efficacyMask - In the implementation block
@property (nonatomic,readonly) unsigned long long maxEfficacy; 
@property (nonatomic,copy) NSString * targetBundleIdentifier;               //@synthesize targetBundleIdentifier=_targetBundleIdentifier - In the implementation block
-(unsigned long long)efficacyMask;
-(unsigned long long)maxEfficacy;
-(void)setEfficacyMask:(unsigned long long)arg1 ;
-(NSString *)targetBundleIdentifier;
-(void)setTargetBundleIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

