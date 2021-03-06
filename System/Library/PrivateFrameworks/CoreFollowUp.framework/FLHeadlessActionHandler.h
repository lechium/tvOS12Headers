/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FLFollowUpItem;

@interface FLHeadlessActionHandler : NSObject {

	FLFollowUpItem* _item;

}

@property (nonatomic,retain) FLFollowUpItem * item;              //@synthesize item=_item - In the implementation block
+(id)handlerWithItem:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)handleExtensionBasedAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setItem:(FLFollowUpItem *)arg1 ;
-(FLFollowUpItem *)item;
@end

