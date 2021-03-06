/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostPredicateProducer.h>

@class NSSet, NSPredicate;

@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer> {

	BOOL __wantsNotEqual;
	NSSet* _pidSet;

}

@property (nonatomic,readonly) unsigned long long _compoundPredicateType; 
@property (nonatomic,readonly) BOOL _wantsNotEqual;                                    //@synthesize _wantsNotEqual=__wantsNotEqual - In the implementation block
@property (nonatomic,readonly) NSSet * pidSet;                                         //@synthesize pidSet=_pidSet - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicateEquivalent; 
-(BOOL)passesPIDNumber:(id)arg1 ;
-(NSPredicate *)predicateEquivalent;
-(BOOL)_wantsNotSubsystem;
-(unsigned long long)_compoundPredicateType;
-(NSSet *)pidSet;
-(BOOL)_wantsNotEqual;
-(void)addPIDNumber:(id)arg1 ;
-(void)addPIDNumberSet:(id)arg1 ;
-(id)init;
@end

