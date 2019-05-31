/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface HFItemUpdateRequest : NSObject {

	NSSet* _itemsToUpdate;
	NSSet* _itemsProvidersToReload;
	SEL _senderSelector;

}

@property (nonatomic,readonly) NSSet * itemsToUpdate;                       //@synthesize itemsToUpdate=_itemsToUpdate - In the implementation block
@property (nonatomic,readonly) NSSet * itemsProvidersToReload;              //@synthesize itemsProvidersToReload=_itemsProvidersToReload - In the implementation block
@property (nonatomic,readonly) SEL senderSelector;                          //@synthesize senderSelector=_senderSelector - In the implementation block
+(id)requestToReloadItemProviders:(id)arg1 senderSelector:(SEL)arg2 ;
+(id)requestToUpdateItems:(id)arg1 senderSelector:(SEL)arg2 ;
-(SEL)senderSelector;
-(NSSet *)itemsProvidersToReload;
-(NSSet *)itemsToUpdate;
-(id)initWithItemProviders:(id)arg1 items:(id)arg2 senderSelector:(SEL)arg3 ;
-(id)init;
@end

