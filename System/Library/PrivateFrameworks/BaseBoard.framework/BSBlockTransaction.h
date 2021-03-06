/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class NSString;

@interface BSBlockTransaction : BSTransaction {

	NSString* _debugName;
	/*^block*/id _block;

}

@property (nonatomic,copy) NSString * debugName;              //@synthesize debugName=_debugName - In the implementation block
-(id)_descriptionProem;
-(id)_graphNodeDebugName;
-(void)setDebugName:(NSString *)arg1 ;
-(NSString *)debugName;
-(BOOL)_canBeInterrupted;
-(void)_begin;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

