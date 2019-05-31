/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMJSONSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSString, AXMLanguage, NSNumber, AXMTaggedText, AXMVisionFeatureColorInfo, AXMVisionFeatureAssetMetadata, AXMVisionFeatureFaceLandmarks;

@interface AXMVisionFeature : NSObject <AXMJSONSerializable, NSSecureCoding> {

	unsigned long long _featureType;
	NSArray* _subfeatures;
	NSString* _barcodeType;
	long long _ocrFeatureType;
	AXMLanguage* _detectionLanguage;
	double _creationDate;
	CGRect _frame;
	CGRect _normalizedFrame;
	NSString* _value;
	NSNumber* _isValueSpeakable;
	AXMTaggedText* _taggedText;
	AXMVisionFeatureColorInfo* _colorInfo;
	AXMVisionFeatureAssetMetadata* _assetMetadata;
	double _blur;
	double _brightness;
	double _confidence;
	CGAffineTransform _horizonTransform;
	float _horizonAngle;
	AXMVisionFeatureFaceLandmarks* _faceLandmarks;
	AXMVisionFeatureFaceLandmarks* _faceLandmarks3d;
	NSDictionary* _faceExpressionsAndConfidence;
	long long _likelyExpression;
	unsigned long long _faceId;
	SCD_Struct_AX17 _facePose;
	CGSize _canvasSize;

}

@property (nonatomic,readonly) AXMTaggedText * taggedText; 
@property (nonatomic,readonly) unsigned long long featureType; 
@property (nonatomic,readonly) BOOL isBarcode; 
@property (nonatomic,readonly) BOOL isFace; 
@property (nonatomic,readonly) BOOL isHuman; 
@property (nonatomic,readonly) BOOL isClassification; 
@property (nonatomic,readonly) BOOL isBrightness; 
@property (nonatomic,readonly) BOOL isBlur; 
@property (nonatomic,readonly) BOOL isHorizon; 
@property (nonatomic,readonly) BOOL isColor; 
@property (nonatomic,readonly) BOOL isMediaLegibility; 
@property (nonatomic,readonly) BOOL isAssetMetadata; 
@property (nonatomic,readonly) BOOL isRectangle; 
@property (nonatomic,readonly) BOOL isModelClassification; 
@property (nonatomic,readonly) BOOL isOCR; 
@property (nonatomic,readonly) BOOL isTextDocument; 
@property (nonatomic,readonly) BOOL isTextRegion; 
@property (nonatomic,readonly) BOOL isTextLine; 
@property (nonatomic,readonly) BOOL isTextSequence; 
@property (nonatomic,readonly) BOOL isTextCharacter; 
@property (nonatomic,readonly) BOOL isTextDiacritic; 
@property (nonatomic,readonly) NSArray * subfeatures; 
@property (nonatomic,readonly) double creationDate; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect normalizedFrame; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) BOOL isValueSpeakable; 
@property (nonatomic,readonly) NSString * barcodeType; 
@property (nonatomic,readonly) long long ocrFeatureType; 
@property (nonatomic,readonly) AXMLanguage * detectionLanguage; 
@property (nonatomic,readonly) AXMVisionFeatureColorInfo * colorInfo; 
@property (nonatomic,readonly) AXMVisionFeatureAssetMetadata * assetMetadata; 
@property (nonatomic,readonly) double blur; 
@property (nonatomic,readonly) double brightness; 
@property (nonatomic,readonly) AXMVisionFeatureFaceLandmarks * faceLandmarks; 
@property (nonatomic,readonly) AXMVisionFeatureFaceLandmarks * faceLandmarks3d; 
@property (nonatomic,readonly) NSDictionary * faceExpressionsAndConfidence; 
@property (nonatomic,readonly) long long likelyExpression; 
@property (nonatomic,readonly) unsigned long long faceId; 
@property (nonatomic,readonly) SCD_Struct_AX17 facePose; 
@property (nonatomic,readonly) CGAffineTransform horizonTransform; 
@property (nonatomic,readonly) float horizonAngle; 
@property (nonatomic,readonly) BOOL isTrackable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)featureWithVisionRequest:(id)arg1 horizonResult:(id)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithVisionRequest:(id)arg1 faceResult:(id)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithVisionRequest:(id)arg1 blurValue:(float)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithColorInfo:(id)arg1 canvasSize:(CGSize)arg2 ;
+(id)featureWithVisionRequest:(id)arg1 rectangleResult:(id)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithMediaLegibility:(id)arg1 ;
+(id)featureWithFutharkFeature:(id)arg1 canvasSize:(CGSize)arg2 context:(id)arg3 ;
+(id)featureWithVisionRequest:(id)arg1 textResult:(id)arg2 canvasSize:(CGSize)arg3 context:(id)arg4 ;
+(id)textLineWithBoundingBox:(CGRect)arg1 sequences:(id)arg2 canvasSize:(CGSize)arg3 context:(id)arg4 ;
+(id)textRegionWithBoundingBox:(CGRect)arg1 lines:(id)arg2 canvasSize:(CGSize)arg3 context:(id)arg4 ;
+(id)textDocumentWithBoundingBox:(CGRect)arg1 regions:(id)arg2 canvasSize:(CGSize)arg3 context:(id)arg4 ;
+(id)featureWithAssetMetadata:(id)arg1 ;
+(id)featureWithVisionRequest:(id)arg1 humanResult:(id)arg2 canvasSize:(CGSize)arg3 ;
+(id)nameForFeatureType:(unsigned long long)arg1 ;
+(void)_append:(id)arg1 toList:(id)arg2 ;
+(id)featureWithMetadata:(id)arg1 canvasSize:(CGSize)arg2 ;
+(id)featureWithVisionRequest:(id)arg1 brightnessValue:(float)arg2 canvasSize:(CGSize)arg3 ;
+(id)featureWithVisionRequest:(id)arg1 classificationResult:(id)arg2 canvasSize:(CGSize)arg3 ;
+(id)nameForOCRType:(long long)arg1 ;
+(id)nameForFaceExpression:(long long)arg1 ;
+(id)flattenedFeatureList:(id)arg1 ;
+(id)unitTestingFeatureWithType:(unsigned long long)arg1 canvasSize:(CGSize)arg2 frame:(CGRect)arg3 value:(id)arg4 barcodeType:(id)arg5 ocrFeatureType:(long long)arg6 subFeatures:(id)arg7 ;
+(id)unitTestingFeature;
+(id)unitTestingFaceFeature;
+(id)unitTestingHorizonFeature;
+(BOOL)supportsSecureCoding;
-(AXMVisionFeatureColorInfo *)colorInfo;
-(unsigned long long)featureType;
-(double)creationDate;
-(id)stringForExpression:(long long)arg1 ;
-(BOOL)isTextRegion;
-(unsigned long long)faceId;
-(CGRect)normalizedFrame;
-(AXMLanguage *)detectionLanguage;
-(BOOL)isOCR;
-(BOOL)isTextDocument;
-(NSArray *)subfeatures;
-(BOOL)isValueSpeakable;
-(BOOL)isFace;
-(BOOL)isClassification;
-(BOOL)isBlur;
-(BOOL)isBrightness;
-(long long)likelyExpression;
-(BOOL)isTrackable;
-(void)_serializeWithCoder:(id)arg1 orDictionary:(id)arg2 ;
-(id)_nameForOCRFeatureType:(long long)arg1 ;
-(NSDictionary *)faceExpressionsAndConfidence;
-(id)_valueForTextFeature;
-(BOOL)isTextLine;
-(BOOL)isTextSequence;
-(BOOL)isTextCharacter;
-(BOOL)isTextDiacritic;
-(BOOL)_isTextFeatureValueSpeakable;
-(AXMVisionFeatureFaceLandmarks *)faceLandmarks;
-(AXMVisionFeatureFaceLandmarks *)faceLandmarks3d;
-(double)confidenceForExpression:(long long)arg1 ;
-(NSString *)barcodeType;
-(long long)ocrFeatureType;
-(AXMVisionFeatureAssetMetadata *)assetMetadata;
-(float)horizonAngle;
-(BOOL)isEqualToAXMVisionFeature:(id)arg1 ;
-(long long)expressionForString:(id)arg1 ;
-(SCD_Struct_AX17)facePose;
-(CGAffineTransform)horizonTransform;
-(BOOL)isBarcode;
-(BOOL)isHuman;
-(BOOL)isModelClassification;
-(BOOL)isColor;
-(BOOL)isHorizon;
-(BOOL)isMediaLegibility;
-(BOOL)isAssetMetadata;
-(BOOL)isRectangle;
-(AXMTaggedText *)taggedText;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(CGRect)frame;
-(NSString *)value;
-(id)_init;
-(double)brightness;
-(double)confidence;
-(NSDictionary *)dictionaryRepresentation;
-(double)blur;
@end
