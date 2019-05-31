/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceAssertion : NSObject <BSXPCCoding, BSInvalidatable> {

	unsigned long long _fenceName;
	unsigned long long _assertionName;
	BSMachPortSendRight* _preFence;
	int _invalid;
	BOOL _shouldTrace;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newSystemFenceAssertionForTriggerPort:(unsigned)arg1 ;
-(id)_initWithFenceName:(unsigned long long)arg1 assertionName:(unsigned long long)arg2 preFence:(id)arg3 shouldTrace:(BOOL)arg4 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)isValid;
@end

