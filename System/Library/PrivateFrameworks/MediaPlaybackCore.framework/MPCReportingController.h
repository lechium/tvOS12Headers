/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface MPCReportingController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _childReportingControllers;
	MPCReportingController* _parentReportingController;

}

@property (assign,nonatomic,__weak) MPCReportingController * parentReportingController; 
@property (nonatomic,copy,readonly) NSArray * childReportingControllers; 
-(void)addChildReportingController:(id)arg1 ;
-(void)setParentReportingController:(MPCReportingController *)arg1 ;
-(void)_recordReportingEvents:(id)arg1 ;
-(MPCReportingController *)parentReportingController;
-(NSArray *)childReportingControllers;
-(void)recordReportingEvents:(id)arg1 ;
-(void)removeChildReportingController:(id)arg1 ;
-(id)init;
@end
