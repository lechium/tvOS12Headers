/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {

	NSMutableArray* _queue;
	NSMutableArray* _holdQueue;

}
-(id)initWithGraph:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
@end

