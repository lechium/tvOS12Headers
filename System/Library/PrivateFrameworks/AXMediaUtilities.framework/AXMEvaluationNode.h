/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMVisionEngineNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXMEvaluationNode : AXMVisionEngineNode <NSSecureCoding> {

	double _minimumConfidence;
	unsigned long long _priority;
	unsigned long long _effectivePriority;

}

@property (assign,nonatomic) unsigned long long effectivePriority;              //@synthesize effectivePriority=_effectivePriority - In the implementation block
@property (assign,nonatomic) double minimumConfidence;                          //@synthesize minimumConfidence=_minimumConfidence - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                       //@synthesize priority=_priority - In the implementation block
+(unsigned long long)defaultPriority;
+(BOOL)supportsSecureCoding;
-(void)setMinimumConfidence:(double)arg1 ;
-(double)minimumConfidence;
-(void)nodeInitialize;
-(BOOL)shouldEvaluate:(id)arg1 ;
-(void)boostEffectivePriority;
-(unsigned long long)effectivePriority;
-(void)resetEffectivePriority;
-(id)_diagnosticNameForRequests:(id)arg1 diagnostics:(id)arg2 ;
-(void)setEffectivePriority:(unsigned long long)arg1 ;
-(void)evaluate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
@end

