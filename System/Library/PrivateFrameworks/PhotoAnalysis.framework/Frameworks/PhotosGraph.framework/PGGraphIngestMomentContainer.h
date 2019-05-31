/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGGraphIngestMoment.h>

@class NSDate, NSString, CLSClueCollection, CLSInvestigationPhotoKitFeeder, NSNumber, PGManager;

@interface PGGraphIngestMomentContainer : NSObject <PGGraphIngestMoment> {

	CLSClueCollection* _clueCollection;
	CLSInvestigationPhotoKitFeeder* _feeder;
	NSNumber* _isInterestingNumber;
	NSNumber* _isSmartInterestingNumber;
	NSNumber* _contentScoreNumber;
	PGManager* _manager;

}

@property (nonatomic,retain) CLSClueCollection * clueCollection;                        //@synthesize clueCollection=_clueCollection - In the implementation block
@property (nonatomic,retain) CLSInvestigationPhotoKitFeeder * feeder;                   //@synthesize feeder=_feeder - In the implementation block
@property (nonatomic,retain) NSNumber * isInterestingNumber;                            //@synthesize isInterestingNumber=_isInterestingNumber - In the implementation block
@property (nonatomic,retain) NSNumber * isSmartInterestingNumber;                       //@synthesize isSmartInterestingNumber=_isSmartInterestingNumber - In the implementation block
@property (nonatomic,retain) NSNumber * contentScoreNumber;                             //@synthesize contentScoreNumber=_contentScoreNumber - In the implementation block
@property (nonatomic,retain) PGManager * manager;                                       //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) BOOL isSmartInteresting; 
@property (nonatomic,readonly) BOOL isInteresting; 
@property (nonatomic,readonly) double contentScore; 
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) unsigned long long numberOfItemsWithPeople; 
@property (nonatomic,readonly) unsigned long long totalNumberOfPersons; 
@property (nonatomic,readonly) NSString * localIdentifier; 
-(CLSInvestigationPhotoKitFeeder *)feeder;
-(void)setFeeder:(CLSInvestigationPhotoKitFeeder *)arg1 ;
-(NSString *)localIdentifier;
-(double)contentScore;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(BOOL)isInteresting;
-(CLSClueCollection *)clueCollection;
-(NSDate *)localEndDate;
-(NSDate *)localStartDate;
-(unsigned long long)totalNumberOfPersons;
-(BOOL)isSmartInteresting;
-(void)_computeScoresIfNeeded;
-(unsigned long long)numberOfItemsWithPeople;
-(id)initMomentContainerWithFeeder:(id)arg1 clueCollection:(id)arg2 manager:(id)arg3 ;
-(void)setClueCollection:(CLSClueCollection *)arg1 ;
-(NSNumber *)isInterestingNumber;
-(void)setIsInterestingNumber:(NSNumber *)arg1 ;
-(NSNumber *)isSmartInterestingNumber;
-(void)setIsSmartInterestingNumber:(NSNumber *)arg1 ;
-(NSNumber *)contentScoreNumber;
-(void)setContentScoreNumber:(NSNumber *)arg1 ;
-(unsigned long long)numberOfItems;
-(PGManager *)manager;
-(void)setManager:(PGManager *)arg1 ;
@end
