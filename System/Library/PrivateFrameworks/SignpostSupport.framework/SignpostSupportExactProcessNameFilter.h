/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostPredicateProducer.h>

@class NSSet, NSPredicate;

@interface SignpostSupportExactProcessNameFilter : NSObject <SignpostPredicateProducer> {

	NSSet* _processNameSet;

}

@property (nonatomic,readonly) unsigned long long _compoundPredicateType; 
@property (nonatomic,readonly) BOOL _wantsNotEqual; 
@property (nonatomic,readonly) NSSet * processNameSet;                                 //@synthesize processNameSet=_processNameSet - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicateEquivalent; 
-(BOOL)passesProcessName:(id)arg1 ;
-(NSPredicate *)predicateEquivalent;
-(unsigned long long)_compoundPredicateType;
-(BOOL)_wantsNotEqual;
-(NSSet *)processNameSet;
-(void)addProcessName:(id)arg1 ;
-(void)addProcessNameSet:(id)arg1 ;
-(id)init;
@end
