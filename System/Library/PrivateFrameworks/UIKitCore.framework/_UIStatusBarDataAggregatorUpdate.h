/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIStatusBarDataEntry;

@interface _UIStatusBarDataAggregatorUpdate : NSObject {

	BOOL _animated;
	_UIStatusBarDataEntry* _entry;

}

@property (nonatomic,retain) _UIStatusBarDataEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (assign,nonatomic) BOOL animated;                              //@synthesize animated=_animated - In the implementation block
+(id)updateWithEntry:(id)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(_UIStatusBarDataEntry *)entry;
-(void)setEntry:(_UIStatusBarDataEntry *)arg1 ;
@end

