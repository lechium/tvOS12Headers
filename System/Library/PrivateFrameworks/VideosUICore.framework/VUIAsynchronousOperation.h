/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface VUIAsynchronousOperation : NSOperation {

	int _state;

}
-(BOOL)isAsynchronous;
-(void)finishExecutionIfPossible;
-(void)executionDidBegin;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

