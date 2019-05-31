/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetWriterInputMetadataAdaptorInternal, AVAssetWriterInput;

@interface AVAssetWriterInputMetadataAdaptor : NSObject {

	AVAssetWriterInputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetWriterInput * assetWriterInput; 
+(id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1 ;
+(void)initialize;
-(void)finalize;
-(id)initWithAssetWriterInput:(id)arg1 ;
-(AVAssetWriterInput *)assetWriterInput;
-(BOOL)appendTimedMetadataGroup:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

