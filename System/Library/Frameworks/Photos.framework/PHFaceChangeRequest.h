/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSString, PHFaceprint, PHChangeRequestHelper, PHObjectPlaceholder, NSManagedObjectID;

@interface PHFaceChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {

	BOOL _clientEntitled;
	NSString* _clientName;
	int _clientProcessID;
	PHFaceprint* _faceprint;
	BOOL _didSetFaceprint;
	BOOL _shouldClearFaceCropGenerationState;
	PHChangeRequestHelper* _helper;

}

@property (assign,nonatomic) BOOL shouldClearFaceCropGenerationState;                        //@synthesize shouldClearFaceCropGenerationState=_shouldClearFaceCropGenerationState - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedFace; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) double centerX; 
@property (assign,nonatomic) double centerY; 
@property (assign,nonatomic) long long sourceWidth; 
@property (assign,nonatomic) long long sourceHeight; 
@property (assign,nonatomic) double leftEyeX; 
@property (assign,nonatomic) double leftEyeY; 
@property (assign,nonatomic) double rightEyeX; 
@property (assign,nonatomic) double rightEyeY; 
@property (assign,nonatomic) double mouthX; 
@property (assign,nonatomic) double mouthY; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isInTrash,nonatomic) BOOL inTrash; 
@property (assign,nonatomic) BOOL manual; 
@property (assign,nonatomic) BOOL hasSmile; 
@property (assign,nonatomic) double blurScore; 
@property (assign,getter=isLeftEyeClosed,nonatomic) BOOL leftEyeClosed; 
@property (assign,getter=isRightEyeClosed,nonatomic) BOOL rightEyeClosed; 
@property (nonatomic,copy) id adjustmentVersion; 
@property (assign,nonatomic) long long nameSource; 
@property (assign,nonatomic) long long faceAlgorithmVersion; 
@property (assign,nonatomic) double poseYaw; 
@property (nonatomic,retain) PHFaceprint * faceprint; 
@property (assign,nonatomic) long long clusterSequenceNumber; 
@property (assign,nonatomic) long long qualityMeasure; 
@property (assign,nonatomic) unsigned short ageType; 
@property (assign,nonatomic) unsigned short genderType; 
@property (assign,nonatomic) unsigned short eyesState; 
@property (assign,nonatomic) unsigned short smileType; 
@property (assign,nonatomic) unsigned short facialHairType; 
@property (assign,nonatomic) unsigned short hairColorType; 
@property (assign,nonatomic) unsigned short baldType; 
@property (assign,nonatomic) unsigned short glassesType; 
@property (assign,nonatomic) unsigned short eyeMakeupType; 
@property (assign,nonatomic) unsigned short lipMakeupType; 
@property (nonatomic,retain) NSString * groupingIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled;                  //@synthesize clientEntitled=_clientEntitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                        //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                                          //@synthesize clientProcessID=_clientProcessID - In the implementation block
@property (getter=isNew,readonly) BOOL new; 
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                               //@synthesize helper=_helper - In the implementation block
@property (getter=isMutated,readonly) BOOL mutated; 
+(void)deleteFaces:(id)arg1 ;
+(BOOL)canGenerateUUIDWithoutEntitlements;
+(id)changeRequestForFace:(id)arg1 ;
+(id)creationRequestForFace;
-(BOOL)isInTrash;
-(long long)nameSource;
-(void)setNameSource:(long long)arg1 ;
-(PHFaceprint *)faceprint;
-(BOOL)manual;
-(void)setInTrash:(BOOL)arg1 ;
-(void)setCenterX:(double)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(void)setManual:(BOOL)arg1 ;
-(long long)faceAlgorithmVersion;
-(void)setFaceAlgorithmVersion:(long long)arg1 ;
-(void)setSourceWidth:(long long)arg1 ;
-(void)setSourceHeight:(long long)arg1 ;
-(double)blurScore;
-(BOOL)hasSmile;
-(BOOL)isLeftEyeClosed;
-(BOOL)isRightEyeClosed;
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(void)setAdjustmentVersion:(id)arg1 ;
-(void)setClusterSequenceNumber:(long long)arg1 ;
-(NSString *)managedEntityName;
-(BOOL)isClientEntitled;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(int)clientProcessID;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(PHChangeRequestHelper *)helper;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)didMutate;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)isMutated;
-(void)setShouldClearFaceCropGenerationState:(BOOL)arg1 ;
-(void)setFaceprint:(PHFaceprint *)arg1 ;
-(PHObjectPlaceholder *)placeholderForCreatedFace;
-(double)leftEyeX;
-(void)setLeftEyeX:(double)arg1 ;
-(double)leftEyeY;
-(void)setLeftEyeY:(double)arg1 ;
-(double)rightEyeX;
-(void)setRightEyeX:(double)arg1 ;
-(double)rightEyeY;
-(void)setRightEyeY:(double)arg1 ;
-(double)mouthX;
-(void)setMouthX:(double)arg1 ;
-(double)mouthY;
-(void)setMouthY:(double)arg1 ;
-(void)setHasSmile:(BOOL)arg1 ;
-(void)setBlurScore:(double)arg1 ;
-(void)setLeftEyeClosed:(BOOL)arg1 ;
-(void)setRightEyeClosed:(BOOL)arg1 ;
-(double)poseYaw;
-(void)setPoseYaw:(double)arg1 ;
-(void)setQualityMeasure:(long long)arg1 ;
-(unsigned short)ageType;
-(void)setAgeType:(unsigned short)arg1 ;
-(unsigned short)genderType;
-(void)setGenderType:(unsigned short)arg1 ;
-(unsigned short)eyesState;
-(void)setEyesState:(unsigned short)arg1 ;
-(unsigned short)smileType;
-(void)setSmileType:(unsigned short)arg1 ;
-(unsigned short)facialHairType;
-(void)setFacialHairType:(unsigned short)arg1 ;
-(unsigned short)hairColorType;
-(void)setHairColorType:(unsigned short)arg1 ;
-(unsigned short)baldType;
-(void)setBaldType:(unsigned short)arg1 ;
-(unsigned short)glassesType;
-(void)setGlassesType:(unsigned short)arg1 ;
-(unsigned short)eyeMakeupType;
-(void)setEyeMakeupType:(unsigned short)arg1 ;
-(unsigned short)lipMakeupType;
-(void)setLipMakeupType:(unsigned short)arg1 ;
-(NSString *)groupingIdentifier;
-(void)setGroupingIdentifier:(NSString *)arg1 ;
-(BOOL)shouldClearFaceCropGenerationState;
-(NSManagedObjectID *)objectID;
-(double)centerX;
-(double)centerY;
-(id)adjustmentVersion;
-(long long)sourceWidth;
-(long long)sourceHeight;
-(BOOL)isNew;
-(NSString *)clientName;
-(double)size;
-(NSString *)uuid;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setSize:(double)arg1 ;
@end

