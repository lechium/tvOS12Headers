/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, CLLocation;


@protocol PLMomentProtocol <NSObject>
@property (nonatomic,readonly) NSDate * pl_startDate; 
@property (nonatomic,readonly) NSDate * pl_endDate; 
@property (nonatomic,readonly) unsigned long long pl_numberOfAssets; 
@property (nonatomic,readonly) CLLocation * pl_location; 
@required
-(CLLocation *)pl_location;
-(unsigned long long)pl_numberOfAssets;
-(NSDate *)pl_endDate;
-(NSDate *)pl_startDate;

@end
