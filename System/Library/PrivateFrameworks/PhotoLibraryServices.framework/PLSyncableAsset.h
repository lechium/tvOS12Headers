/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet, NSDate;


@protocol PLSyncableAsset <NSObject,PLSyncableObject>
@property (nonatomic,retain,readonly) NSString * cloudIdentifier; 
@property (nonatomic,retain) NSSet * detectedFaces; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) BOOL faceDetectionComplete; 
@property (nonatomic,copy,readonly) NSDate * dateForComparingAdjustmentVersions; 
@property (nonatomic,readonly) id faceAdjustmentVersion; 
@property (nonatomic,copy,readonly) NSString * syncedAdjustmentFingerprint; 
@property (nonatomic,readonly) BOOL hasAdjustmentsOrLegacyAdjustments; 
@required
-(id)syncDescription;
-(NSSet *)detectedFaces;
-(NSString *)syncedAdjustmentFingerprint;
-(BOOL)hasAdjustmentsOrLegacyAdjustments;
-(BOOL)faceDetectionComplete;
-(void)markForNeedingFaceDetection;
-(void)setDetectedFaces:(id)arg1;
-(NSDate *)dateForComparingAdjustmentVersions;
-(NSString *)cloudIdentifier;
-(id)faceAdjustmentVersion;
-(long long)width;
-(long long)height;

@end

