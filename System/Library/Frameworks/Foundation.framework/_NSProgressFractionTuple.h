/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _NSProgressFraction;

@interface _NSProgressFractionTuple : NSObject {

	_NSProgressFraction* _previous;
	_NSProgressFraction* _next;

}

@property (copy) _NSProgressFraction * previous;              //@synthesize previous=_previous - In the implementation block
@property (copy) _NSProgressFraction * next;                  //@synthesize next=_next - In the implementation block
-(BOOL)previousIsEqualToNext;
-(_NSProgressFraction *)previous;
-(void)setPrevious:(_NSProgressFraction *)arg1 ;
-(void)setNext:(_NSProgressFraction *)arg1 ;
-(_NSProgressFraction *)next;
-(void)dealloc;
-(id)description;
@end

