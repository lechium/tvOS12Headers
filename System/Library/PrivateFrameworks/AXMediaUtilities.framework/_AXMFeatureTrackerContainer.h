/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMFeatureTracker, AXDispatchTimer;

@interface _AXMFeatureTrackerContainer : NSObject {

	AXMFeatureTracker* _tracker;
	AXDispatchTimer* _activeTimer;

}

@property (nonatomic,retain) AXMFeatureTracker * tracker;                //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * activeTimer;              //@synthesize activeTimer=_activeTimer - In the implementation block
-(id)initWithFeature:(id)arg1 queue:(id)arg2 ;
-(AXDispatchTimer *)activeTimer;
-(void)setActiveTimer:(AXDispatchTimer *)arg1 ;
-(AXMFeatureTracker *)tracker;
-(void)setTracker:(AXMFeatureTracker *)arg1 ;
@end

