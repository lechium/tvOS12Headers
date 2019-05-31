/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CLLocation, NSArray, PGManager;

@interface PGFeatureVectorGenerator : NSObject {

	BOOL _isDryTesting;
	NSDate* _localDate;
	CLLocation* _location;
	NSArray* _peopleNames;
	PGManager* _manager;

}

@property (assign) BOOL isDryTesting;                            //@synthesize isDryTesting=_isDryTesting - In the implementation block
@property (nonatomic,retain) NSDate * localDate;                 //@synthesize localDate=_localDate - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSArray * peopleNames;                //@synthesize peopleNames=_peopleNames - In the implementation block
@property (__weak,readonly) PGManager * manager;                 //@synthesize manager=_manager - In the implementation block
+(id)_calendarEventsBetweenDate:(id)arg1 andDate:(id)arg2 atLocation:(id)arg3 withPeopleUUIDs:(id)arg4 inPhotoLibrary:(id)arg5 ;
-(id)initWithManager:(id)arg1 ;
-(NSArray *)peopleNames;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSDate *)localDate;
-(void)setLocalDate:(NSDate *)arg1 ;
-(void)enumerateFeatureVectorsByTypeUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isDryTesting;
-(void)setIsDryTesting:(BOOL)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(PGManager *)manager;
@end

