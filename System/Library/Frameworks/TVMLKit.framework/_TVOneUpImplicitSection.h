/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/_TVOneUpSection.h>
#import <TVMLKit/_TVOneUpSection.h>

@class NSArray, NSDictionary;

@interface _TVOneUpImplicitSection : _TVOneUpSection <_TVOneUpSection> {

	NSArray* _lockups;
	long long _autoHighlightIndex;
	NSDictionary* _newItemIndexesByOldItemIndex;
	BOOL _itemsChangeSetContainsMovedAddedOrRemovedItems;

}

@property (nonatomic,readonly) long long autoHighlightIndex; 
-(id)elementForItemAtIndex:(long long)arg1 ;
-(void)loadIndex:(long long)arg1 ;
-(void)unloadIndex:(long long)arg1 ;
-(long long)autoHighlightIndex;
-(void)resetAutoHighlightIndex;
-(void)configureItemsChangeSetWithSection:(id)arg1 ;
-(BOOL)itemsChangeSetContainsMovedAddedOrRemovedItems;
-(long long)newItemIndexForOldItemIndex:(long long)arg1 ;
-(id)initWithLockups:(id)arg1 autoHighlightIndex:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)numberOfItems;
@end

