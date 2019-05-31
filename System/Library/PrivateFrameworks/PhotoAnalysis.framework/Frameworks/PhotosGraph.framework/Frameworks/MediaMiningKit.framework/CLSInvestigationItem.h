/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, CLLocation, NSArray, NSString, NSSet, NSData, NSDateComponents;


@protocol CLSInvestigationItem <NSObject,PLRegionsClusteringItem>
@property (nonatomic,readonly) NSDate * clsDate; 
@property (nonatomic,readonly) CLLocation * clsLocation; 
@property (nonatomic,readonly) NSArray * clsPeopleNames; 
@property (nonatomic,readonly) NSArray * clsUnprefetchedPeopleNames; 
@property (nonatomic,readonly) unsigned long long clsPeopleCount; 
@property (nonatomic,readonly) NSString * clsIdentifier; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSArray * peopleNames; 
@property (nonatomic,readonly) long long clsViewCount; 
@property (nonatomic,readonly) long long clsPlayCount; 
@property (nonatomic,readonly) long long clsShareCount; 
@property (nonatomic,readonly) double clsContentScore; 
@property (nonatomic,readonly) double clsExposureScore; 
@property (nonatomic,readonly) double clsSharpnessScore; 
@property (nonatomic,readonly) double clsAestheticScore; 
@property (nonatomic,readonly) BOOL isUtility; 
@property (nonatomic,readonly) BOOL isScreenshot; 
@property (nonatomic,readonly) BOOL isFavorite; 
@property (nonatomic,readonly) BOOL clsIsAestheticallyPrettyGood; 
@property (nonatomic,readonly) BOOL isBlurry; 
@property (nonatomic,readonly) BOOL clsIsInterestingVideo; 
@property (nonatomic,readonly) BOOL clsIsInterestingLivePhoto; 
@property (nonatomic,readonly) BOOL clsIsInterestingPanorama; 
@property (nonatomic,readonly) BOOL clsIsInterestingSDOF; 
@property (nonatomic,readonly) BOOL clsIsInterestingHDR; 
@property (nonatomic,readonly) long long clsSmileCount; 
@property (nonatomic,readonly) long long clsBlinkCount; 
@property (nonatomic,copy,readonly) NSSet * clsSceneClassifications; 
@property (nonatomic,readonly) NSData * clsDistanceIdentity; 
@property (nonatomic,readonly) NSDateComponents * dateComponents; 
@property (nonatomic,readonly) NSDate * universalDate; 
@property (nonatomic,readonly) NSDate * localDate; 
@required
+(id)contextForItems:(id)arg1;
-(BOOL)isFavorite;
-(NSArray *)peopleNames;
-(BOOL)isUtility;
-(BOOL)isBlurry;
-(BOOL)clsIsInterestingSDOF;
-(BOOL)clsIsInterestingHDR;
-(BOOL)clsIsInterestingLivePhoto;
-(BOOL)clsIsAestheticallyPrettyGood;
-(double)clsSharpnessScore;
-(BOOL)isScreenshot;
-(CGImageRef)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(BOOL)arg2 networkAllowed:(BOOL)arg3;
-(long long)clsViewCount;
-(long long)clsPlayCount;
-(double)clsExposureScore;
-(BOOL)clsIsInterestingVideo;
-(BOOL)clsIsInterestingPanorama;
-(NSSet *)clsSceneClassifications;
-(NSDate *)localDate;
-(CLLocation *)clsLocation;
-(double)scoreWithContext:(id)arg1;
-(NSArray *)clsPeopleNames;
-(NSDate *)universalDate;
-(unsigned long long)clsPeopleCount;
-(long long)clsSmileCount;
-(NSString *)clsIdentifier;
-(NSDate *)clsDate;
-(double)clsContentScore;
-(NSArray *)clsUnprefetchedPeopleNames;
-(long long)clsBlinkCount;
-(double)clsAestheticScore;
-(long long)clsShareCount;
-(NSData *)clsDistanceIdentity;
-(NSDate *)date;
-(CLLocation *)location;
-(NSDateComponents *)dateComponents;

@end
