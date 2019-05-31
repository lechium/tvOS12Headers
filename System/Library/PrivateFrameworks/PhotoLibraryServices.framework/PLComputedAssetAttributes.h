/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLManagedAsset;

@interface PLComputedAssetAttributes : PLManagedObject

@property (nonatomic,retain) PLManagedAsset * asset; 
@property (assign,nonatomic) float wellFramedSubjectScore; 
@property (assign,nonatomic) float wellChosenSubjectScore; 
@property (assign,nonatomic) float tastefullyBlurredScore; 
@property (assign,nonatomic) float sharplyFocusedSubjectScore; 
@property (assign,nonatomic) float wellTimedShotScore; 
@property (assign,nonatomic) float pleasantLightingScore; 
@property (assign,nonatomic) float pleasantReflectionsScore; 
@property (assign,nonatomic) float harmoniousColorScore; 
@property (assign,nonatomic) float livelyColorScore; 
@property (assign,nonatomic) float pleasantSymmetryScore; 
@property (assign,nonatomic) float pleasantPatternScore; 
@property (assign,nonatomic) float immersivenessScore; 
@property (assign,nonatomic) float pleasantPerspectiveScore; 
@property (assign,nonatomic) float pleasantPostProcessingScore; 
@property (assign,nonatomic) float noiseScore; 
@property (assign,nonatomic) float failureScore; 
@property (assign,nonatomic) float pleasantCompositionScore; 
@property (assign,nonatomic) float interestingSubjectScore; 
@property (assign,nonatomic) float intrusiveObjectPresenceScore; 
@property (assign,nonatomic) float pleasantCameraTiltScore; 
@property (assign,nonatomic) float lowLight; 
+(id)fetchRequest;
+(id)entityName;
@end

