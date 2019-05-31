/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWPhotoDecompressorNode : BWNode {

	int _downstreamRetainedBufferCount;
	BOOL _downstreamIsSharingOutputPool;
	BOOL _decompressionSetupIsComplete;
	FigPhotoSurfacePoolRef _decompressionSurfacePool;
	FigPhotoDecompressionSessionRef _decompressionSession;
	CFDictionaryRef _containerOptions;
	CFDictionaryRef _decompressionOptions;
	opaqueCMFormatDescriptionRef _uncompressedFormatDescription;

}
+(void)initialize;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)setDownstreamIsSharingOutputPool:(BOOL)arg1 ;
-(void)setDownstreamRetainedBufferCount:(int)arg1 ;
-(void)_releaseDecodeResources;
-(opaqueCMSampleBufferRef)_createUncompressedSampleBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setupDecompressionSurfacePool;
-(int)_setupDecompressionSession;
-(int)_setupContainerOptions;
-(int)_setupDecompressionOptions;
-(int)_setupDecodeResources;
-(void)_setCVColorProperties:(CVBufferRef)arg1 fromSourceBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(int)downstreamRetainedBufferCount;
-(BOOL)downstreamIsSharingOutputPool;
-(id)init;
-(void)dealloc;
-(id)nodeType;
@end

