/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface MPAsyncOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _isExecuting;
	BOOL _isFinished;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(void)execute;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(id)init;
-(void)start;
-(void)finish;
-(NSError *)error;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

