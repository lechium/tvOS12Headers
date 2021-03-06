/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface NSFilePresenterAsynchronousOperation : NSOperation {

	/*^block*/id _block;
	BOOL _isFinished;
	BOOL _isExecuting;

}
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isAsynchronous;
-(void)start;
-(void)finish;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

