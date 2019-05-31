/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVWeakObservable.h>
#import <AVFoundation/AVKeyPathDependencyHost.h>

@class AVAssetWriterInputPixelBufferAdaptorInternal, AVAssetWriterInput, NSDictionary, NSString;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {

	AVAssetWriterInputPixelBufferAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetWriterInput * assetWriterInput; 
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2 ;
-(void)finalize;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(NSDictionary *)sourcePixelBufferAttributes;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV5)arg2 ;
-(id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2 ;
-(AVAssetWriterInput *)assetWriterInput;
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

