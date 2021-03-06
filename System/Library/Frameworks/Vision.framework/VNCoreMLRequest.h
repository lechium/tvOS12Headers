/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>

@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest {

	VNCoreMLModel* _model;

}

@property (nonatomic,readonly) VNCoreMLModel * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption; 
+(Class)configurationClass;
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)newDefaultRequestInstance;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(id)initWithModel:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithModel:(id)arg1 ;
-(VNCoreMLModel *)model;
@end

