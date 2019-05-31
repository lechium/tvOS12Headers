/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@class NSString;

@interface CPLByClassExtractionStep : CPLBatchExtractionStep {

	/*function pointer*/void* _query;
	Class _extractionClass;
	unsigned long long _maximumCount;
	NSString* _queryDescription;

}

@property (nonatomic,readonly) Class extractionClass;                         //@synthesize extractionClass=_extractionClass - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCount;               //@synthesize maximumCount=_maximumCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryDescription;              //@synthesize queryDescription=_queryDescription - In the implementation block
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
-(id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 description:(id)arg3 class:(Class)arg4 maximumCount:(unsigned long long)arg5 query:(/*function pointer*/void*)arg6 ;
-(Class)extractionClass;
-(unsigned long long)maximumCount;
-(NSString *)queryDescription;
-(void)reset;
-(id)shortDescription;
@end
