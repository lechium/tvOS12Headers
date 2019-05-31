/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol DepthProcessor;
@class NSDictionary, NSString;

@interface BWDepthConverterNode : BWNode {

	NSDictionary* _sensorIDDictionary;
	NSDictionary* _cameraInfoByPortType;
	BOOL _forceCPath;
	SCD_Struct_BW13 _inputDepthDimensions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	unsigned _outputFormat;
	SCD_Struct_BW13 _outputDimensions;
	float _baseline;
	SCD_Struct_BW48 _identityExtrinsicMatrix;
	SCD_Struct_BW48 _infraredProjectorExtrinsicMatrix;
	float _depthPixelSizeInMicrons;
	int _depthAccuracy;
	SCD_Struct_BW49 _depthLensDistortionCorrectionBasePolynomial;
	SCD_Struct_BW49 _depthLensDistortionCorrectionDynamicPolynomial;
	int _baseRotationDegrees;
	int _rotationDegrees;
	BOOL _mirroringEnabled;
	BOOL _streamingFilteringEnabled;
	BOOL _stillFilteringEnabled;
	int _horizontalSensorBinningFactor;
	int _verticalSensorBinningFactor;
	BOOL _depthIsAlwaysHighQuality;
	CVBufferRef _fixedPointScaledIntermediateBuffer;
	CVBufferRef _fixedPointRotatedIntermediateBuffer;
	CVBufferRef _filteringInputBuffer;
	CVBufferRef _streamingFilteringScaledDepthInputBuffer;
	CVBufferRef _streamingFilteringScaledDepthOutputBuffer;
	CVBufferRef _filteringScaledYUVBuffer;
	CVBufferRef _filteringOutputBuffer;
	BOOL _conversionAfterFilteringRequired;
	BOOL _depthFromInfrared;
	NSString* _depthProcessorClassName;
	FigPhotoScaleAndRotateSessionRef _scaler;
	id<DepthProcessor> _depthProcessor;
	int _depthBufferOriginalExifOrientation;
	int _depthBufferFinalExifOrientation;
	BOOL _workIntervalHintsEnabled;
	work_intervalRef _workInterval;

}
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setOutputFormat:(unsigned)arg1 ;
-(unsigned)outputFormat;
-(void)setOutputDimensions:(SCD_Struct_BW13)arg1 ;
-(void)setRotationDegrees:(int)arg1 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(BOOL)mirroringEnabled;
-(int)rotationDegrees;
-(void)_updateOutputRequirements;
-(int)_parseCameraInfo;
-(int)_loadAndConfigureDepthProcessorClass:(id)arg1 ;
-(int)_computeConversionParametersFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 convertOptionsOut:(SCD_Struct_BW52*)arg2 ;
-(int)_convertDepthDisparityToFloat_NEON:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 options:(SCD_Struct_BW52*)arg3 ;
-(int)_convertDepthDisparityToFloat_C:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 options:(SCD_Struct_BW52*)arg3 ;
-(int)convertToFloatAndRotate:(opaqueCMSampleBufferRef)arg1 inputSampleBuffer:(opaqueCMSampleBufferRef)arg2 outputPixelBuffer:(CVBufferRef)arg3 ;
-(int)filterBuffer:(CVBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 imageSampleBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(id)_depthMetadataDictionaryFromDepthSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 stillFilteringRequested:(BOOL)arg3 ;
-(int)rotateAndScaleImagePixelBuffer:(CVBufferRef)arg1 depthPixelBuffer:(CVBufferRef)arg2 to:(CVBufferRef)arg3 rotationAngle:(int)arg4 flip:(BOOL)arg5 ;
-(int)_convertU16toFloatForImage_NEON:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 options:(SCD_Struct_BW52*)arg3 ;
-(id)initWithCameraInfoByPortType:(id)arg1 sensorIDDictionary:(id)arg2 rgbPersonSegmentationEnabled:(BOOL)arg3 depthIsAlwaysHighQuality:(BOOL)arg4 ;
-(SCD_Struct_BW13)outputDimensions;
-(void)setBaseRotationDegrees:(int)arg1 ;
-(int)baseRotationDegrees;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(void)setStreamingFilteringEnabled:(BOOL)arg1 ;
-(BOOL)streamingFilteringEnabled;
-(void)setStillFilteringEnabled:(BOOL)arg1 ;
-(BOOL)stillFilteringEnabled;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(int)horizontalSensorBinningFactor;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(int)verticalSensorBinningFactor;
-(id)init;
-(void)dealloc;
-(id)nodeType;
@end

