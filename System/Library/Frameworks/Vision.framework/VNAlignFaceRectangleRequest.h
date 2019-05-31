/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNAlignFaceRectangleRequest : VNRequest {

	NSArray* _inputFaceObservations;

}

@property (nonatomic,copy,readonly) NSArray * inputFaceObservations;              //@synthesize inputFaceObservations=_inputFaceObservations - In the implementation block
+(Class)configurationClass;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)newDefaultRequestInstance;
-(id)initWithFaceObservations:(id)arg1 ;
-(NSArray *)inputFaceObservations;
-(id)initWithFaceObservations:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3 ;
@end

