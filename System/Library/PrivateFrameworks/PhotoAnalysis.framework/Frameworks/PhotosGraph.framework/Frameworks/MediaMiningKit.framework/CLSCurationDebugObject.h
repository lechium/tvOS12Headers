/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface CLSCurationDebugObject : NSObject {

	NSMutableArray* _stateHistory;
	unsigned long long _tentativeSectionStateHistoryLength;
	unsigned long long _state;

}

@property (readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (readonly) NSArray * stateHistory;                //@synthesize stateHistory=_stateHistory - In the implementation block
+(id)stringForState:(unsigned long long)arg1 ;
-(void)beginTentativeSection;
-(void)endTentativeSectionWithSuccess:(BOOL)arg1 ;
-(void)setState:(unsigned long long)arg1 withReason:(id)arg2 agent:(id)arg3 stage:(id)arg4 ;
-(void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3 ;
-(NSArray *)stateHistory;
-(id)init;
-(unsigned long long)state;
-(id)timestamp;
-(id)dictionaryRepresentation;
@end

