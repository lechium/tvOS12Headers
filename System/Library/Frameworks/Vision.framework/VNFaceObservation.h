/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetectedObjectObservation.h>

@class VNFaceLandmarks2D, VNFaceLandmarks3D, VNFaceRegionMap, VNFaceAttributes, VNTorsoprint, VNFaceTorsoprint, VNFaceLandmarkSegments, NSDictionary, NSNumber, NSData, VNFaceprint;

@interface VNFaceObservation : VNDetectedObjectObservation {

	VNFaceLandmarks2D* _cachedLandmarks;
	VNFaceLandmarks3D* _cachedLandmarks3d;
	VNFaceRegionMap* _faceRegionMap;
	VNFaceAttributes* _faceAttributes;
	VNTorsoprint* _torsoprint;
	VNFaceTorsoprint* _faceTorsoprint;
	VNFaceLandmarkSegments* _faceLandmarkSegments;
	float _landmarkScore;
	BOOL _isBlinking;
	float _blinkScore;
	NSDictionary* _expressionsAndScores;
	float _faceJunkinessIndex;
	float _faceOrientationIndex;
	BOOL _hasBBoxBeenAligned;
	float _alignedRotationAngle;
	float _faceIdConfidence;
	NSNumber* _roll;
	NSNumber* _yaw;
	VNFaceLandmarks2D* _landmarks;
	NSData* _landmarkPoints;
	NSData* _landmarkPoints3d;
	NSData* _poseData;
	NSData* _alignedMeanShape;
	unsigned long long _faceId;
	VNFaceprint* _faceprint;
	Geometry2D_rect2D_ _alignedBoundingBox;

}

@property (nonatomic,retain) VNFaceLandmarks2D * landmarks;                                         //@synthesize landmarks=_landmarks - In the implementation block
@property (assign,nonatomic) BOOL hasBBoxBeenAligned;                                               //@synthesize hasBBoxBeenAligned=_hasBBoxBeenAligned - In the implementation block
@property (assign,nonatomic) Geometry2D_rect2D_ alignedBoundingBox;                                 //@synthesize alignedBoundingBox=_alignedBoundingBox - In the implementation block
@property (assign,nonatomic) float alignedRotationAngle;                                            //@synthesize alignedRotationAngle=_alignedRotationAngle - In the implementation block
@property (nonatomic,retain) NSData * landmarkPoints;                                               //@synthesize landmarkPoints=_landmarkPoints - In the implementation block
@property (nonatomic,retain) NSData * landmarkPoints3d;                                             //@synthesize landmarkPoints3d=_landmarkPoints3d - In the implementation block
@property (nonatomic,retain) NSData * poseData;                                                     //@synthesize poseData=_poseData - In the implementation block
@property (assign,nonatomic) float faceIdConfidence;                                                //@synthesize faceIdConfidence=_faceIdConfidence - In the implementation block
@property (nonatomic,retain) NSData * alignedMeanShape;                                             //@synthesize alignedMeanShape=_alignedMeanShape - In the implementation block
@property (nonatomic,retain) VNTorsoprint * torsoprint; 
@property (nonatomic,retain) NSNumber * roll;                                                       //@synthesize roll=_roll - In the implementation block
@property (nonatomic,retain) NSNumber * yaw;                                                        //@synthesize yaw=_yaw - In the implementation block
@property (nonatomic,readonly) VNFaceLandmarks3D * landmarks3d; 
@property (nonatomic,readonly) VNFaceRegionMap * faceRegionMap;                                     //@synthesize faceRegionMap=_faceRegionMap - In the implementation block
@property (nonatomic,readonly) VNFaceAttributes * faceAttributes;                                   //@synthesize faceAttributes=_faceAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * expressionsAndConfidence; 
@property (nonatomic,readonly) SCD_Struct_VN38 pose; 
@property (nonatomic,readonly) float nameConfidence; 
@property (assign,nonatomic) unsigned long long faceId;                                             //@synthesize faceId=_faceId - In the implementation block
@property (nonatomic,retain) VNFaceprint * faceprint;                                               //@synthesize faceprint=_faceprint - In the implementation block
@property (nonatomic,readonly) VNFaceTorsoprint * faceTorsoprint; 
@property (nonatomic,readonly) VNFaceLandmarkSegments * faceLandmarkSegments;                       //@synthesize faceLandmarkSegments=_faceLandmarkSegments - In the implementation block
@property (readonly) float blinkScore; 
@property (getter=faceJunkinessIndex,nonatomic,readonly) float faceJunkinessIndex; 
@property (getter=faceOrientationIndex,nonatomic,readonly) float faceOrientationIndex; 
+(id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 andAlignedBoundingBox:(CGRect)arg3 ;
+(id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 faceprint:(id)arg3 ;
+(BOOL)_exifOrientationFromFaceRollAngle:(float)arg1 exifOrientation:(int*)arg2 error:(id*)arg3 ;
+(id)faceObservationWithBoundingBox:(CGRect)arg1 andAlignedBoundingBox:(CGRect)arg2 ;
+(id)faceObservationWithBoundingBox:(CGRect)arg1 faceprint:(id)arg2 ;
+(id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 roll:(id)arg3 yaw:(id)arg4 ;
+(id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 alignedBoundingBox:(CGRect)arg3 roll:(id)arg4 yaw:(id)arg5 ;
+(BOOL)computeYawPitchRollFromPoseMatrix:(SCD_Struct_VN38)arg1 outputYaw:(float*)arg2 outputPitch:(float*)arg3 outputRoll:(float*)arg4 ;
+(BOOL)supportsSecureCoding;
-(NSNumber *)roll;
-(VNFaceprint *)faceprint;
-(void)setFaceprint:(VNFaceprint *)arg1 ;
-(unsigned long long)faceId;
-(VNFaceTorsoprint *)faceTorsoprint;
-(void)setFaceId:(unsigned long long)arg1 ;
-(VNFaceLandmarks2D *)landmarks;
-(BOOL)isBlinking;
-(id)expressionsAndScores;
-(Geometry2D_rect2D_)alignedBoundingBox;
-(float)alignedRotationAngle;
-(void)setRoll:(NSNumber *)arg1 ;
-(void)setIsBlinking:(BOOL)arg1 ;
-(void)setBlinkScore:(float)arg1 ;
-(BOOL)hasBBoxBeenAligned;
-(VNTorsoprint *)torsoprint;
-(NSData *)landmarkPoints;
-(void)setExpressionsAndScores:(id)arg1 ;
-(void)setFaceAttributes:(VNFaceAttributes *)arg1 ;
-(void)setLandmarkPoints3d:(NSData *)arg1 ;
-(void)setPoseData:(NSData *)arg1 ;
-(void)setFaceRegionMap:(VNFaceRegionMap *)arg1 ;
-(NSData *)landmarkPoints3d;
-(NSData *)poseData;
-(float)faceIdConfidence;
-(VNFaceRegionMap *)faceRegionMap;
-(VNFaceAttributes *)faceAttributes;
-(VNFaceLandmarkSegments *)faceLandmarkSegments;
-(NSData *)alignedMeanShape;
-(float)landmarkScore;
-(float)faceJunkinessIndex;
-(float)faceOrientationIndex;
-(void)setAlignedMeanShape:(NSData *)arg1 ;
-(void)setLandmarkPoints:(NSData *)arg1 ;
-(void)setTorsoprint:(VNTorsoprint *)arg1 ;
-(void)setFaceTorsoprint:(VNFaceTorsoprint *)arg1 ;
-(void)setFaceLandmarkSegments:(VNFaceLandmarkSegments *)arg1 ;
-(void)setHasBBoxBeenAligned:(BOOL)arg1 ;
-(void)setAlignedBoundingBox:(Geometry2D_rect2D_)arg1 ;
-(void)setAlignedRotationAngle:(float)arg1 ;
-(void)setLandmarkScore:(float)arg1 ;
-(void)setFaceIdConfidence:(float)arg1 ;
-(void)setFaceJunkinessIndex:(float)arg1 ;
-(void)setFaceOrientationIndex:(float)arg1 ;
-(NSDictionary *)expressionsAndConfidence;
-(float)nameConfidence;
-(VNFaceLandmarks3D *)landmarks3d;
-(SCD_Struct_VN38)pose;
-(BOOL)getComputedRectifyingTransform:(CGAffineTransform*)arg1 ;
-(float)blinkScore;
-(CGRect)alignedBoundingBoxAsCGRect;
-(id)expressionsAndDetections;
-(BOOL)getFaceEXIFOrientation:(int*)arg1 error:(id*)arg2 ;
-(void)setLandmarks:(VNFaceLandmarks2D *)arg1 ;
-(void)setYaw:(NSNumber *)arg1 ;
-(NSNumber *)yaw;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

