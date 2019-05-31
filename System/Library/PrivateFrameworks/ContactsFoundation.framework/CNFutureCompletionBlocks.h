/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject {

	NSMutableArray* _completionBlocks;
	BOOL _shouldCallImmediately;

}
-(void)addCompletionBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(BOOL)shouldCallImmediately;
-(void)setShouldCallImmediately:(BOOL)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(void)flushCompletionBlocksWithFutureResult:(id)arg1 ;
-(id)init;
@end
