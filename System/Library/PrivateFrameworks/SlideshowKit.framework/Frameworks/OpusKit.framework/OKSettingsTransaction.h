/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface OKSettingsTransaction : NSObject {

	NSMutableArray* _items;
	NSMutableDictionary* _itemsByKey;

}

@property (nonatomic,retain,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
-(void)registerTransactionItem:(id)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)mergeWithTransaction:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)items;
@end

