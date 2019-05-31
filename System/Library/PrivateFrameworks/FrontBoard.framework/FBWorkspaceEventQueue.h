/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSEventQueue.h>

@interface FBWorkspaceEventQueue : BSEventQueue
+(id)sharedInstance;
-(void)executeOrPrependEvents:(id)arg1 ;
-(void)executeOrAppendEvent:(id)arg1 ;
-(void)executeOrPrependEvent:(id)arg1 ;
-(BOOL)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2 ;
-(void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2 ;
-(void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2 ;
-(void)_noteWillExecuteEvent:(id)arg1 ;
-(void)_noteQueueDidLock;
-(void)_noteQueueDidUnlock;
@end

