/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFanOutNode.h>

@class BWNodeOutput;

@interface BWFaceDetectionNode : BWFanOutNode {

	BWNodeOutput* _metadataObjectOutput;
	BWNodeOutput* _boxedMetadataOutput;
	CGRect _rectOfInterest;
	BOOL _metadataObjectOutputEnabled;
	BOOL _boxedMetadataOutputEnabled;
	int _lastObjectFaceCount;
	opaqueCMFormatDescriptionRef _boxedFormatDescription;
	unsigned _localIDOfDetectedFace_BE;
	unsigned _localIDOfDetectedFaceFaceID_BE;
	unsigned _localIDOfDetectedFaceBounds_BE;
	unsigned _localIDOfDetectedFaceRoll_BE;
	unsigned _localIDOfDetectedFaceYaw_BE;
	OpaqueCMBlockBufferRef _emptyMetadataSampleData;
	SCD_Struct_BW2 _prevBoxedFacePTS;
	SCD_Struct_BW2 _prevBoxedFaceDur;
	SCD_Struct_BW2 _prevBoxedNoFacePTS;
	int _lastBoxedFaceCount;

}

@property (readonly) BWNodeOutput * metadataObjectOutput; 
@property (readonly) BWNodeOutput * boxedMetadataOutput; 
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)_renderSampleBufferForMetadataObjectOutput:(opaqueCMSampleBufferRef)arg1 withFaceArray:(id)arg2 ;
-(void)_renderSampleBufferForBoxedMetadataOutput:(opaqueCMSampleBufferRef)arg1 withFaceArray:(id)arg2 ;
-(OpaqueCMBlockBufferRef)_getEmptyMetadataSampleData;
-(BWNodeOutput *)metadataObjectOutput;
-(BWNodeOutput *)boxedMetadataOutput;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(CGRect)rectOfInterest;
-(void)setMetadataObjectOutputEnabled:(BOOL)arg1 ;
-(BOOL)metadataObjectOutputEnabled;
-(void)setBoxedMetadataOutputEnabled:(BOOL)arg1 ;
-(BOOL)boxedMetadataOutputEnabled;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)nodeType;
@end

