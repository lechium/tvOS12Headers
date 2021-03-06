/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFConcreteTimeTriggerBuilder.h>

@class NSSet;

@interface HFEventBasedTimeTriggerBuilder : HFConcreteTimeTriggerBuilder {

	NSSet* _stagedEvents;

}

@property (nonatomic,retain) NSSet * stagedEvents;              //@synthesize stagedEvents=_stagedEvents - In the implementation block
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_updateEvents;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(void)_setupWithExistingTrigger:(id)arg1 ;
-(void)setStagedEvents:(NSSet *)arg1 ;
-(id)_updateRecurrences;
-(id)_updateExecuteOnce;
-(NSSet *)stagedEvents;
-(void)setRecurrences:(id)arg1 ;
@end

