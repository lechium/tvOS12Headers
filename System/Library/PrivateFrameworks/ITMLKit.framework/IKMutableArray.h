/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKArray.h>

@interface IKMutableArray : IKArray {

	long long _expectedCapacity;

}

@property (nonatomic,readonly) long long expectedCapacity;              //@synthesize expectedCapacity=_expectedCapacity - In the implementation block
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)_convertToArrayStore;
-(long long)expectedCapacity;
-(void)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(long long)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(long long)arg2 ;
-(id)initWithCapacity:(long long)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
@end

