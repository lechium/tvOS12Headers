/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClockTimerSnapshotMutating.h>

@class AFClockTimerSnapshot, NSDate, NSDictionary, NSOrderedSet, NSString;

@interface _AFClockTimerSnapshotMutation : NSObject <AFClockTimerSnapshotMutating> {

	AFClockTimerSnapshot* _baseModel;
	unsigned long long _generation;
	NSDate* _date;
	NSDictionary* _timersByID;
	NSOrderedSet* _notifiedFiringTimerIDs;
	struct {
		unsigned isDirty : 1;
		unsigned hasGeneration : 1;
		unsigned hasDate : 1;
		unsigned hasTimersByID : 1;
		unsigned hasNotifiedFiringTimerIDs : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBaseModel:(id)arg1 ;
-(void)setTimersByID:(id)arg1 ;
-(void)setNotifiedFiringTimerIDs:(id)arg1 ;
-(void)setGeneration:(unsigned long long)arg1 ;
-(id)generate;
-(id)init;
-(void)setDate:(id)arg1 ;
@end

