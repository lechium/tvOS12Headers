/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostSupportSubsystemCategoryFilter.h>

@interface SignpostSupportSubsystemCategoryWhitelist : SignpostSupportSubsystemCategoryFilter
-(id)initWithEntries:(id)arg1 ;
-(BOOL)passesSubsystem:(id)arg1 category:(id)arg2 ;
-(void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2 ;
-(BOOL)_wantsNotSubsystem;
-(unsigned long long)_compoundPredicateType;
@end
